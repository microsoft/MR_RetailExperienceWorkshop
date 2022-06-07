// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.UX
{
    /// <summary>
    /// A simple script to fit a <see cref="BoxCollider"/> onto a specified <see cref="RectTransform"/>.
    /// Works in both Edit and Play modes. Only fits the X and Y axes, and preserves the Z axis.
    /// </summary>
    [ExecuteAlways]
    public class RectTransformColliderFitter : MonoBehaviour
    {
        [SerializeField]
        [Tooltip("Should the collider fitter continually update in Play mode?")]
        private bool dynamicFitting = true;

        /// <summary>
        /// Should the collider fitter continually update in Play mode?
        /// </summary>
        public bool DynamicFitting
        {
            get => dynamicFitting;
            set => dynamicFitting = value;
        }

        [SerializeField]
        [Tooltip("The collider to fit to the RectTransform.")]
        private BoxCollider thisCollider;

        /// <summary>
        /// The collider to fit to the RectTransform.
        /// </summary>
        public BoxCollider ThisCollider
        {
            get
            {
                if (thisCollider == null)
                {
                    thisCollider = GetComponent<BoxCollider>();
                }
                return thisCollider;
            }
            set => thisCollider = value;
        }

        [SerializeField]
        [Tooltip("The RectTransform to fit the collider onto.")]
        private RectTransform rectTransform;

        /// <summary>
        /// The RectTransform to fit the collider onto.
        /// </summary>
        public RectTransform RectTransform
        {
            get
            {
                if (rectTransform == null)
                {
                    rectTransform = GetComponent<RectTransform>();
                }
                return rectTransform;
            }
            set => rectTransform = value;
        }

        [SerializeField]
        [Tooltip("2D padding around the RectTransform.")]
        private Vector2 padding = Vector2.zero;

        /// <summary>
        /// 2D padding around the rect transform.
        /// </summary>
        public Vector2 Padding
        {
            get => padding;
            set => padding = value;
        }

        void Update()
        {
            if (!(Application.isPlaying && !DynamicFitting) && ThisCollider != null && RectTransform != null && RectTransform.hasChanged)
            {
                thisCollider.size = new Vector3(Mathf.Abs(rectTransform.rect.width) + 2 * padding.x, Mathf.Abs(rectTransform.rect.height) + 2 * padding.y, thisCollider.size.z);
                Vector3 pivotOffset = new Vector3(0.5f - rectTransform.pivot.x, 0.5f - rectTransform.pivot.y, 0);
                thisCollider.center = new Vector3(pivotOffset.x * rectTransform.rect.width, pivotOffset.y * rectTransform.rect.height, thisCollider.center.z);
            }
        }
    }
}
