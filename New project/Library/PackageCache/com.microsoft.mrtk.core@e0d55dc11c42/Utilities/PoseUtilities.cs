﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;

namespace Microsoft.MixedReality.Toolkit
{
    /// <summary>
    /// Utilities for working with poses.
    /// </summary>
    internal static class PoseUtilities
    {
        /// <summary>
        /// Returns an estimated distance from the provided pose to the user's body.
        /// <remarks>
        /// The body is treated as a ray, parallel to the y-axis, where the start is head position.
        /// This means that moving your hand down such that is the same distance from the body will
        /// not cause the manipulated object to move further away from your hand. However, when you
        /// move your hand upward, away from your head, the manipulated object will be pushed away.
        ///
        /// Internal for now, may be made public later.
        /// </remarks>
        internal static float GetDistanceToBody(MixedRealityPose pose)
        {
            if (pose.Position.y > CameraCache.Main.transform.position.y)
            {
                return Vector3.Distance(pose.Position, CameraCache.Main.transform.position);
            }
            else
            {
                Vector2 headPosXZ = new Vector2(CameraCache.Main.transform.position.x, CameraCache.Main.transform.position.z);
                Vector2 pointerPosXZ = new Vector2(pose.Position.x, pose.Position.z);

                return Vector2.Distance(pointerPosXZ, headPosXZ);
            }
        }
    }
}
