// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace Microsoft.MixedReality.Toolkit.Input
{
    /// <summary>
    /// An HandJointInteractor that is used for poking/pressing near interactions.
    /// </summary>
    [AddComponentMenu("Scripts/Microsoft/MRTK/Input/Poke Interactor")]
    public class PokeInteractor : HandJointInteractor, IPokeInteractor
    {
        /// <summary>
        /// The default poke radius returned by <see cref="IPokeInteractor.PokeRadius"/>
        /// if no joint data is obtained.
        /// </summary>
        private const float defaultPokeRadius = 0.085f;

        [SerializeField]
        [Tooltip("Which specific hand joint does this interactor track?")]
        private TrackedHandJoint joint;

        #region XRBaseControllerInteractor

        /// <inheritdoc />
        public override bool isSelectActive => true;
        
        #endregion

        /// <summary>
        /// Get the interaction point from the specific tracked joint.
        /// </summary>
        protected override bool TryGetInteractionPoint(out HandJointPose jointPose)
        {
            return HandsAggregator.TryGetJoint(joint, HandNode, out jointPose);
        }

        /// <inheritdoc />
        public float PokeRadius => TryGetInteractionPoint(out var jointPose) ? jointPose.Radius : defaultPokeRadius;

        /// <inheritdoc/>
        public override void UpdateVisuals(XRBaseInteractable interactable)
        {
            if (TouchVisuals != null)
            {
                // TODO: Replace with surface magnetism.
                TouchVisuals.transform.SetPositionAndRotation(attachTransform.position + attachTransform.forward * PokeRadius, attachTransform.rotation);
            }
        }
    }
}
