// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace Microsoft.MixedReality.Toolkit.SpatialManipulation
{
    /// <summary>
    /// Implements a scale logic that will scale an object based on the 
    /// ratio of the distance between hands.
    /// object_scale = start_object_scale * curr_hand_dist / start_hand_dist
    /// 
    /// Usage:
    /// When a manipulation starts, call Setup.
    /// Call Update any time to update the move logic and get a new rotation for the object.
    /// </summary>
    public class ScaleLogic : ManipulationLogic<Vector3>
    {
        private Vector3 startObjectScale;
        private float startHandDistanceMeters;

        /// <inheritdoc />
        public override void Setup(List<IXRSelectInteractor> interactors, IXRSelectInteractable interactable, MixedRealityTransform currentTarget)
        {
            base.Setup(interactors, interactable, currentTarget);

            startHandDistanceMeters = GetScaleBetweenInteractors(interactors, interactable);
            startObjectScale = currentTarget.Scale;
        }

        /// <inheritdoc />
        public override Vector3 Update(List<IXRSelectInteractor> interactors, IXRSelectInteractable interactable, MixedRealityTransform currentTarget, bool centeredAnchor)
        {
            base.Update(interactors, interactable, currentTarget, centeredAnchor);

            var ratioMultiplier = GetScaleBetweenInteractors(interactors, interactable) / startHandDistanceMeters;
            return startObjectScale * ratioMultiplier;
        }

        /// <summary>
        /// Calculates the minimum distance between any pair of the provided interactors. Will return
        /// 1.0f if only one interactor is participating, for scaling purposes.
        /// </summary>
        private float GetScaleBetweenInteractors(List<IXRSelectInteractor> interactors, IXRSelectInteractable interactable)
        {
            // If only one interactor, we never change scale.
            if (interactors.Count == 1)
            {
                return 1.0f;
            }

            var result = float.MaxValue;
            for (int i = 0; i < interactors.Count; i++)
            {
                for (int j = i + 1; j < interactors.Count; j++)
                {
                    // Defer square root until end for performance.
                    var distance = Vector3.SqrMagnitude(interactors[i].GetAttachTransform(interactable).position -
                                                       interactors[j].GetAttachTransform(interactable).position);
                    if (distance < result)
                    {
                        result = distance;
                    }
                }
            }

            // Deferred sqrt.
            return Mathf.Sqrt(result);
        }
    }
}
