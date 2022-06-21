// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using Microsoft.MixedReality.Toolkit.Subsystems;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.Input
{
    [CreateAssetMenu(
        fileName = "MRTKHandsAggregatorConfig.asset",
        menuName = "MRTK/Subsystems/MRTK Hands Aggregator Config")]
    public class MRTKHandsAggregatorConfig : HandsAggregatorConfig
    {
        [SerializeField]
        protected float pinchOpenThreshold;

        public float PinchOpenThreshold => pinchOpenThreshold;

        [SerializeField]
        protected float pinchClosedThreshold;

        public float PinchClosedThreshold => pinchClosedThreshold;

        [SerializeField]
        protected float handRaiseCameraFov;

        public float HandRaiseCameraFov => handRaiseCameraFov;

        [SerializeField, LabelWidth(170)]
        protected float handFacingAwayToleranceInDegrees;

        public float HandFacingAwayToleranceInDegrees => handFacingAwayToleranceInDegrees;

        protected virtual void Reset()
        {
            pinchOpenThreshold = 0.08f;
            pinchClosedThreshold = 0.03f;
            handRaiseCameraFov = 60.0f;
            handFacingAwayToleranceInDegrees = 75f;
        }
    }
}
