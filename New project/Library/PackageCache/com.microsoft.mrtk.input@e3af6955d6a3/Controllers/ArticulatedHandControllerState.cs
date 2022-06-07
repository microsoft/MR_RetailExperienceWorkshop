// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using UnityEngine.XR.Interaction.Toolkit;

namespace Microsoft.MixedReality.Toolkit.Input
{
    /// <summary>
    /// Represents the current state of the <see cref="ArticulatedHandController"/>.
    /// Contains extra state values extended from the base <see cref="XRControllerState">,
    /// including the left and right pinch/select progress.
    /// </summary>
    [Serializable]
    internal class ArticulatedHandControllerState : XRControllerState
    {
        /// <summary>
        /// The associated pinch selected-ness of the controller/hand.
        /// </summary>
        [Obsolete("Use the base class's selectInteractionState.value instead")]
        public float PinchSelectProgress;

        /// <summary>
        /// Is the controller/hand ready to select via pinch?
        /// </summary>
        public bool PinchSelectReady;

        /// <summary>
        /// The world-space pose of hand/controller performing the pinch.
        /// </summary>
        public MixedRealityPose PinchPose;

        /// <summary>
        /// Constructs a new ArticulatedHandControllerState with default values.
        /// </summary>
        public ArticulatedHandControllerState() : base()
        {
            PinchSelectProgress = 0.0f;
            PinchSelectReady = false;
            PinchPose = MixedRealityPose.ZeroIdentity;
        }
    }
}
