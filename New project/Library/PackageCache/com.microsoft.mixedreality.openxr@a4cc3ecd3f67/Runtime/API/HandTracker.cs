// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Runtime.InteropServices;
using UnityEngine;

namespace Microsoft.MixedReality.OpenXR
{
    /// <summary>
    /// Represents a user's hand and the ability to track hand joints from it.
    /// </summary>
    public class HandTracker
    {
        /// <summary>
        /// The user's left hand.
        /// </summary>
        public static HandTracker Left { get; } = new HandTracker(Handedness.Left);

        /// <summary>
        /// The user's right hand.
        /// </summary>
        public static HandTracker Right { get; } = new HandTracker(Handedness.Right);

        private readonly NativeLibToken m_token;
        private readonly Handedness m_handedness;

        internal HandTracker(Handedness trackerHandedness)
        {
            m_token = HandTrackingFeaturePlugin.nativeLibToken;
            m_handedness = trackerHandedness;
        }

        /// <summary>
        /// The maximum number of hand joints that might be tracked.
        /// </summary>
        public const int JointCount = 26;

        /// <summary>
        /// Fills the passed-in array with current hand joint locations, if possible.
        /// </summary>
        /// <param name="frameTime">The point in the rendering cycle this method is being called from.</param>
        /// <param name="handJointLocations">An array of HandJointLocations, indexed according to the HandJoint enum.</param>
        /// <returns>True if the hand joint poses are valid; false otherwise.</returns>
        public bool TryLocateHandJoints(FrameTime frameTime, HandJointLocation[] handJointLocations)
        {
            if (handJointLocations.Length != JointCount)
            {
                Debug.LogError($"LocateJoints requires an array of size {JointCount}. You can use HandTracker.JointCount for this.");
                return false;
            }

            if (m_token == NativeLibToken.Invalid)
            {
                return false; // Hand tracking feature is not enabled.
            }

            try
            {
                return NativeLib.GetHandJointData(m_token, m_handedness, frameTime, handJointLocations);
            }
            catch (DllNotFoundException)
            {
                return false;
            }
        }
    }

    /// <summary>
    /// Represents locational data for a hand joint.
    /// </summary>
    [StructLayout(LayoutKind.Sequential, Pack = 8)]
    public readonly struct HandJointLocation
    {
        /// <summary>
        /// Whether the corresponding hand joint is actively tracked.
        /// </summary>
        /// <remarks>If not actively tracked, the pose may be inferred or last-known but otherwise still meaningful.</remarks>
        public bool IsTracked => Convert.ToBoolean(isTracked);
        // bool isn't blittable, so marshal a byte across the P/Invoke layer instead
        private readonly byte isTracked;

        /// <summary>
        /// The world-space pose of the corresponding hand joint.
        /// </summary>
        public Pose Pose { get; }

        /// <summary>
        /// The radius of the corresponding joint in units of meters.
        /// </summary>
        public float Radius { get; }
    }

    /// <summary>
    /// Describes which hand the current hand tracker represents.
    /// </summary>
    public enum Handedness
    {
        /// <summary>
        /// Represents the user's left hand.
        /// </summary>
        Left = 0,

        /// <summary>
        /// Represents the user's right hand.
        /// </summary>
        Right
    }

    /// <summary>
    /// The supported tracked hand joints in OpenXR.
    /// </summary>
    /// <remarks>See https://www.khronos.org/registry/OpenXR/specs/1.0/html/xrspec.html#XrHandJointEXT for more information.</remarks>
    public enum HandJoint
    {
        /// <summary>
        /// The palm.
        /// </summary>
        Palm,
        /// <summary>
        /// The wrist.
        /// </summary>
        Wrist,
        /// <summary>
        /// The lowest joint of the thumb.
        /// </summary>
        ThumbMetacarpal,
        /// <summary>
        /// The second joint of the thumb.
        /// </summary>
        ThumbProximal,
        /// <summary>
        /// The joint nearest the tip of the thumb.
        /// </summary>
        ThumbDistal,
        /// <summary>
        /// The tip of the thumb.
        /// </summary>
        ThumbTip,
        /// <summary>
        /// The lowest joint of the index finger.
        /// </summary>
        IndexMetacarpal,
        /// <summary>
        /// The knuckle joint of the index finger.
        /// </summary>
        IndexProximal,
        /// <summary>
        /// The middle joint of the index finger.
        /// </summary>
        IndexIntermediate,
        /// <summary>
        /// The joint nearest the tip of the index finger.
        /// </summary>
        IndexDistal,
        /// <summary>
        /// The tip of the index finger.
        /// </summary>
        IndexTip,
        /// <summary>
        /// The lowest joint of the middle finger.
        /// </summary>
        MiddleMetacarpal,
        /// <summary>
        /// The proximal joint of the middle finger.
        /// </summary>
        MiddleProximal,
        /// <summary>
        /// The middle joint of the middle finger.
        /// </summary>
        MiddleIntermediate,
        /// <summary>
        /// The joint nearest the tip of the middle finger.
        /// </summary>
        MiddleDistal,
        /// <summary>
        /// The tip of the middle finger.
        /// </summary>
        MiddleTip,
        /// <summary>
        /// The lowest joint of the ring finger.
        /// </summary>
        RingMetacarpal,
        /// <summary>
        /// The knuckle of the ring finger.
        /// </summary>
        RingProximal,
        /// <summary>
        /// The middle joint of the ring finger.
        /// </summary>
        RingIntermediate,
        /// <summary>
        /// The joint nearest the tip of the ring finger.
        /// </summary>
        RingDistal,
        /// <summary>
        /// The tip of the ring finger.
        /// </summary>
        RingTip,
        /// <summary>
        /// The lowest joint of the little finger.
        /// </summary>
        LittleMetacarpal,
        /// <summary>
        /// The knuckle joint of the little finger.
        /// </summary>
        LittleProximal,
        /// <summary>
        /// The middle joint of the little finger.
        /// </summary>
        LittleIntermediate,
        /// <summary>
        /// The joint nearest the tip of the little finger.
        /// </summary>
        LittleDistal,
        /// <summary>
        /// The tip of the little finger.
        /// </summary>
        LittleTip,
    }
}
