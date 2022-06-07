// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace Microsoft.MixedReality.Toolkit.Input
{
    /// <summary>
    /// A ring-like reticle that expands/contracts.
    /// </summary>
    internal class RingReticle : MonoBehaviour, IVariableReticle
    {
        [SerializeField]
        [Tooltip("The amount of smoothing to apply to the reticle's grow/shrink effect.")]
        private float animationSmoothing = 0.000001f;

        /// <summary>
        /// The amount of smoothing to apply to the reticle's grow/shrink effect.
        /// </summary>
        public float AnimationSmoothing
        {
            get => animationSmoothing;
            set => animationSmoothing = value;
        }

        [SerializeField]
        [Tooltip("The incoming shrink value is multiplied by this value to set the center fraction of the ring.")]
        private float centerFraction = 1.3f;

        /// <summary>
        /// The incoming shrink value is multiplied by this value to set the center fraction of the ring.
        /// </summary>
        public float CenterFraction
        {
            get => centerFraction;
            set => centerFraction = value;
        }

        [SerializeField]
        [Tooltip("The amount of smoothing to apply to the reticle's grow/shrink effect.")]
        private float radiusFraction = 0.7f;

        /// <summary>
        /// The amount of smoothing to apply to the reticle's grow/shrink effect.
        /// </summary>
        public float RadiusFraction
        {
            get => radiusFraction;
            set => radiusFraction = value;
        }

        private MaterialPropertyBlock propertyBlock;

        private float smoothedValue = 0.0f;

        private MeshRenderer reticleRenderer;

        void Awake()
        {
            propertyBlock = new MaterialPropertyBlock();
            reticleRenderer = GetComponent<MeshRenderer>();

            // Set the initial size of the reticle.
            SetReticleShrink(0);
        }

        /// <inheritdoc />
        public void UpdateVisuals(float value)
        {
            if (reticleRenderer == null || Mathf.Approximately(value, smoothedValue)) { return; }

            smoothedValue = Smoothing.SmoothTo(smoothedValue, value, animationSmoothing, Time.deltaTime);
            SetReticleShrink(smoothedValue);
        }

        private void SetReticleShrink(float value)
        {
            reticleRenderer.GetPropertyBlock(propertyBlock);
            propertyBlock.SetFloat("_Near_Center_Fraction_", 1 - value * centerFraction);
            propertyBlock.SetFloat("_Near_Radius_Fraction_", 1 - value * radiusFraction);
            reticleRenderer.SetPropertyBlock(propertyBlock);
        }
    }
}
