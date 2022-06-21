// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.Input
{
    public class NearInteractionModeDetector : ProximityDetector
    {
        [SerializeField]
        [Tooltip("The set of near interactors that belongs to near interaction")]
        private HandJointInteractor[] nearInteractors;

        /// <inheritdoc />
        public override bool IsModeDetected()
        {
            return base.IsModeDetected() || IsNearInteractorSelecting();
        }

        private bool IsNearInteractorSelecting()
        {
            foreach (HandJointInteractor nearInteractor in nearInteractors)
            {
                if (nearInteractor.hasSelection)
                {
                    return true;
                }
            }
            return false;
        }
    }
}