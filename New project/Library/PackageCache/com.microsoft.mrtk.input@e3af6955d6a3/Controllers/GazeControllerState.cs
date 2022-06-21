// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using UnityEngine.XR.Interaction.Toolkit;

namespace Microsoft.MixedReality.Toolkit.Input
{
    /// <summary>
    /// Represents the current state of the <see cref="GazeController"/>.
    /// Contains extra state values extended from the base <see cref="XRControllerState">,
    /// including the left and right pinch/select progress.
    /// </summary>
    [Serializable]
    internal class GazeControllerState : XRControllerState
    {
        /// <summary>
        /// The associated selected-ness of the left-handed controller.
        /// </summary>
        public float LeftSelectProgress;

        /// <summary>
        /// The associated selected-ness of the right-handed controller.
        /// </summary>
        public float RightSelectProgress;

        /// <summary>
        /// Is the left-handed controller/hand ready to select?
        /// </summary>
        public bool LeftSelectReady;

        /// <summary>
        /// Is the right-handed controller/hand ready to select?
        /// </summary>
        public bool RightSelectReady;

        /// <summary>
        /// The worldspace pose of the selection centroid;
        /// the average of the selection points across any and all
        /// hands that are performing a valid selection.
        /// </summary>
        public MixedRealityPose SelectCentroid;

        /// <summary>
        /// The worldspace pose of the left-hand selection.
        /// </summary>
        public MixedRealityPose LeftSelectPose;

        /// <summary>
        /// The worldspace pose of the right-hand selection.
        /// </summary>
        public MixedRealityPose RightSelectPose;

        /// <summary>
        /// Constructs a new GazeControllerState with default values.
        /// </summary>
        public GazeControllerState() : base()
        {
            LeftSelectProgress = 0.0f;
            RightSelectProgress = 0.0f;
            LeftSelectReady = false;
            RightSelectReady = false;
            SelectCentroid = MixedRealityPose.ZeroIdentity;
            LeftSelectPose = MixedRealityPose.ZeroIdentity;
            RightSelectPose = MixedRealityPose.ZeroIdentity;
        }
    }
}

