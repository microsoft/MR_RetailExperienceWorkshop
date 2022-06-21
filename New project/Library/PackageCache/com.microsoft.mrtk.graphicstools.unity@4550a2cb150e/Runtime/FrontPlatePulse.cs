// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Microsoft.MixedReality.GraphicsTools
{
    /// <summary>
    /// Animates material properties for the Graphics Tools/Non-Canvas/Frontplate and 
    /// Graphics Tools/Canvas/Frontplate shaders to play a pulse ring effect at a point in 3D space.
    /// </summary>
    [AddComponentMenu("Scripts/GraphicsTools/FrontPlatePulse")]
    public class FrontPlatePulse : MonoBehaviour
    {
        /// <summary>
        /// The total duration of the pulse effect in seconds.
        /// </summary>
        public float Duration
        {
            get => duration;
            set => duration = value;
        }

        [SerializeField]
        [Tooltip("The total duration of the pulse effect in seconds.")]
        private float duration = 1.2f;

        private bool isInitialized = false;
        private Renderer _renderer = null;
        private MaterialPropertyBlock materialProperty = null;
        private Graphic graphic = null;

        public struct PulseState
        {
            public string useGlobalBlob, blobPosition, blobPulse, blobFade;
            public bool pulseActive;
            public float startTime;

            public PulseState(string useGlobalBlob, string blobPosition, string blobPulse, string blobFade)
            {
                pulseActive = false;
                startTime = 0.0f;
                this.useGlobalBlob = useGlobalBlob;
                this.blobPosition = blobPosition;
                this.blobPulse = blobPulse;
                this.blobFade = blobFade;
            }
        }

        private PulseState[] states = new PulseState[2]
        {
            new PulseState("_Use_Global_Left_Index_", "_Blob_Position_", "_Blob_Pulse_", "_Blob_Fade_"),
            new PulseState("_Use_Global_Right_Index_", "_Blob_Position_2_", "_Blob_Pulse_2_", "_Blob_Fade_2_")
        };

        #region MonoBehaviour Implementation

        private void Start()
        {
            _renderer = gameObject.GetComponent<Renderer>();

            if (_renderer != null)
            {
                materialProperty = new MaterialPropertyBlock();
            }
            else // Operate on a graphic component rather than a renderer.
            {
                graphic = GetComponent<Graphic>();
            }

            Debug.Assert(_renderer != null || graphic != null, 
                         "The FrontPlatePulse component must have a Renderer or Graphic component.");

            isInitialized = true;
        }

        private void OnEnable()
        {
            if (isInitialized)
            {
                for (int i = 0; i < states.Length; i++)
                {
                    if (states[i].pulseActive)
                    {
                        ResetPulse(ref states[i]);
                    }
                }
            }
        }

        #endregion MonoBehaviour Implementation

        /// <summary>
        /// Starts the pulse animation at a position and index.
        /// </summary>
        public void PulseAt(Vector3 position, int index)
        {
            if (!states[index].pulseActive && isInitialized)
            {
                states[index].startTime = Time.time;
                states[index].pulseActive = true;

                if (_renderer != null)
                {
                    _renderer.GetPropertyBlock(materialProperty);

                    materialProperty.SetVector(states[index].blobPosition, position);
                    materialProperty.SetFloat(states[index].useGlobalBlob, 0.0f);

                    _renderer.SetPropertyBlock(materialProperty);
                }
                else if (graphic != null)
                {
                    graphic.material.SetVector(states[index].blobPosition, position);
                    graphic.material.SetFloat(states[index].useGlobalBlob, 0.0f);
                }

                StartCoroutine(UpdatePulse());
            }
        }

        /// <summary>
        /// Overloaded method to specify if this is a left or right pulse.
        /// </summary>
        public void Pulse(Vector3 position, bool left)
        {
            PulseAt(position, left ? 0 : 1);
        }

        /// <summary>
        /// Returns true of if any PulseState is active.
        /// </summary>
        public bool IsPulsing()
        {
            if (!isInitialized)
            {
                return false;
            }

            return states[0].pulseActive || states[1].pulseActive;
        }

        private IEnumerator UpdatePulse()
        {
            if (isInitialized)
            {
                while (IsPulsing())
                {
                    for (int i = 0; i < states.Length; ++i)
                    {
                        UpdateState(ref states[i]);
                    }

                    yield return null;
                }
            }
        }

        private void UpdateState(ref PulseState state)
        {
            if (state.pulseActive)
            {
                if (_renderer != null)
                {
                    _renderer.GetPropertyBlock(materialProperty);
                }

                float t = (Time.time - state.startTime) / Duration * 2.0f;

                if (t < 0.5f)
                {
                    if (_renderer != null)
                    {
                        materialProperty.SetFloat(state.blobPulse, t * 2.0f);
                    }
                    else if (graphic != null)
                    {
                        graphic.material.SetFloat(state.blobPulse, t * 2.0f);
                    }
                }
                else if (t < 1.0f)
                {
                    if (_renderer != null)
                    {
                        materialProperty.SetFloat(state.useGlobalBlob, 1.0f);
                        materialProperty.SetFloat(state.blobPulse, 0.0f);
                        materialProperty.SetFloat(state.blobFade, (2.0f * t - 1.0f));
                    }
                    else if (graphic != null)
                    {
                        graphic.material.SetFloat(state.useGlobalBlob, 1.0f);
                        graphic.material.SetFloat(state.blobPulse, 0.0f);
                        graphic.material.SetFloat(state.blobFade, (2.0f * t - 1.0f));
                    }
                }
                else
                {
                    state.pulseActive = false;

                    if (_renderer != null)
                    {
                        materialProperty.SetFloat(state.blobFade, 1.0f);
                    }
                    else if (graphic != null)
                    {
                        graphic.material.SetFloat(state.blobFade, 1.0f);
                    }
                }

                if (_renderer != null)
                {
                    _renderer.SetPropertyBlock(materialProperty);
                }
            }
        }

        private void ResetPulse(ref PulseState state)
        {
            if (isInitialized)
            {
                state.pulseActive = false;

                if (_renderer != null)
                {
                    _renderer.GetPropertyBlock(materialProperty);

                    materialProperty.SetFloat(state.blobFade, 1.0f);
                    materialProperty.SetFloat(state.useGlobalBlob, 1.0f);
                    materialProperty.SetFloat(state.blobPulse, 0.0f);

                    _renderer.SetPropertyBlock(materialProperty);
                }
                else if (graphic != null)
                {
                    graphic.material.SetFloat(state.blobFade, 1.0f);
                    graphic.material.SetFloat(state.useGlobalBlob, 1.0f);
                    graphic.material.SetFloat(state.blobPulse, 0.0f);
                }
            }
        }
    }
}
