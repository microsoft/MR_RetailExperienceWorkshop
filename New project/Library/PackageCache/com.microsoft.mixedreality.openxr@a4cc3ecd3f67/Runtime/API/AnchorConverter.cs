// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Runtime.InteropServices;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.OpenXR;

namespace Microsoft.MixedReality.OpenXR
{
    /// <summary>
    /// Provides helper functions to convert an Unity Anchor object to underlying OpenXR anchor handle or SpatialAnchor COM object.
    /// </summary>
    public static class AnchorConverter
    {
        /// <summary>
        /// Get the OpenXR handle of the given nativePtr from ARAnchor or XRAnchor object if available, or return 0.
        /// </summary>
        /// <param name="nativePtr">The nativePtr obtained from either XRAnchor.nativePtr or ARAnchor.nativePtr.</param>
        /// <returns>XrAnchorMSFT handle that represents the underlying OpenXR anchor of given nativePtr, or 0 when such associated handle cannot be found.</returns>
        public static ulong ToOpenXRHandle(IntPtr nativePtr)
        {
            if (nativePtr == null)
                return 0;

            NativeAnchorData data = Marshal.PtrToStructure<NativeAnchorData>(nativePtr);
            if (data.version == 1)
            {
                return data.anchorHandle;
            }
            return 0;
        }

        /// <summary>
        /// Get a COM wrapper object of Windows.Perception.Spatial.SpatialAnchor from the given ARAnchor's nativePtr.
        /// </summary>
        /// <param name="nativePtr">The nativePtr obtained from either XRAnchor.nativePtr or ARAnchor.nativePtr.</param>
        /// <returns>The COM wrapper object of Windows.Perception.Spatial.SpatialAnchor, or null when the conversion failed.</returns>
        public static object ToPerceptionSpatialAnchor(IntPtr nativePtr)
        {
            MixedRealityFeaturePlugin feature = OpenXRSettings.Instance.GetFeature<MixedRealityFeaturePlugin>();
            if (feature != null && feature.enabled && nativePtr != IntPtr.Zero)
            {
                IntPtr unknown = feature.TryAcquirePerceptionSpatialAnchor(ToOpenXRHandle(nativePtr));
                if (unknown != IntPtr.Zero)
                {
                    object result = Marshal.GetObjectForIUnknown(unknown);
                    Marshal.Release(unknown);   // Balance the ref count because "feature.TryAcquire" increment it on return.
                    return result;
                }
            }
            return null;
        }

        /// <summary>
        /// Get a COM wrapper object of Windows.Perception.Spatial.SpatialAnchor from the given TrackableId.
        /// If failed, the function returns nullptr.
        /// </summary>
        /// <param name="trackableId">An existing XRAnchor or ARAnchor's ID.</param>
        /// <returns>The COM wrapper object of Windows.Perception.Spatial.SpatialAnchor, or null when the conversion failed.</returns>
        public static object ToPerceptionSpatialAnchor(TrackableId trackableId)
        {
            MixedRealityFeaturePlugin feature = OpenXRSettings.Instance.GetFeature<MixedRealityFeaturePlugin>();
            if (feature != null && feature.enabled && trackableId != TrackableId.invalidId)
            {
                IntPtr unknown = feature.TryAcquirePerceptionSpatialAnchor(FeatureUtils.ToGuid(trackableId));
                if (unknown != IntPtr.Zero)
                {
                    object result = Marshal.GetObjectForIUnknown(unknown);
                    Marshal.Release(unknown);   // Balance the ref count because "feature.TryAcquire" increment it on return.
                    return result;
                }
            }
            return null;
        }

        /// <summary>
        /// Get a TrackableId representing the resulting XRAnchor/ARAnchor created from the Windows.Perception.Spatial.SpatialAnchor.
        /// If failed, the function returns TrackableId.invalidId.
        /// Creates an OpenXR anchor from a Windows.Perception.Spatial.SpatialAnchor and reports it to Unity.
        /// </summary>
        /// <param name="spatialAnchor">Must be a Windows.Perception.Spatial.SpatialAnchor.</param>
        /// <returns>The id representing the Unity anchor or <see cref="TrackableId.invalidId"/> if the conversion was unsuccessful.</returns>
        public static TrackableId FromPerceptionSpatialAnchor(object spatialAnchor)
        {
            MixedRealityFeaturePlugin feature = OpenXRSettings.Instance.GetFeature<MixedRealityFeaturePlugin>();
            if (feature != null && feature.enabled && spatialAnchor != null)
            {
                Guid guid = feature.TryAcquireXrSpatialAnchor(spatialAnchor);
                if (guid != Guid.Empty)
                {
                    return FeatureUtils.ToTrackableId(guid);
                }
            }
            return TrackableId.invalidId;
        }

        /// <summary>
        /// Replaces the underlying platform anchor for an existing XRAnchor/ARAnchor represented by the
        /// given TrackableId, so the Unity anchor will instead be located by the given SpatialAnchor.
        /// </summary>
        /// <remarks>Use this function instead of <see cref="FromPerceptionSpatialAnchor"/> to avoid creating new ARAnchor on every new platform anchor.</remarks>
        /// <param name="spatialAnchor">Must be a Windows.Perception.Spatial.SpatialAnchor.</param>
        /// <param name="existingId">An id representing an existing XRAnchor/ARAnchor.</param>
        /// <returns>The id representing the Unity anchor or <see cref="TrackableId.invalidId"/> if the conversion was unsuccessful.</returns>
        public static TrackableId ReplaceSpatialAnchor(object spatialAnchor, TrackableId existingId)
        {
            MixedRealityFeaturePlugin feature = OpenXRSettings.Instance.GetFeature<MixedRealityFeaturePlugin>();
            if (feature != null && feature.enabled && spatialAnchor != null)
            {
                Guid guid = feature.TryAcquireAndReplaceXrSpatialAnchor(spatialAnchor, FeatureUtils.ToGuid(existingId));
                if (guid != Guid.Empty)
                {
                    return FeatureUtils.ToTrackableId(guid);
                }
            }
            return TrackableId.invalidId;
        }
    }

    namespace ARSubsystems
    {
        /// <summary>
        /// Provides extension function to convert an XRAnchor object to underlying OpenXR anchor handle.
        /// </summary>
        public static class XRAnchorExtensions
        {
            /// <summary>
            /// Get the native OpenXR handle of the given XRAnchor object if available, or return 0.
            /// </summary>
            /// <param name="anchor">A valid <see cref="UnityEngine.XR.ARSubsystems.XRAnchor"/> object.</param>
            /// <returns>XrAnchorMSFT handle that represents the underlying OpenXR anchor, or 0 when such associated handle cannot be found.</returns>
            public static ulong GetOpenXRHandle(this UnityEngine.XR.ARSubsystems.XRAnchor anchor)
            {
                return anchor == null ? 0 : AnchorConverter.ToOpenXRHandle(anchor.nativePtr);
            }
        }
    }

    namespace ARFoundation
    {
        /// <summary>
        /// Provides extension function to convert an ARAnchor object to underlying OpenXR anchor handle.
        /// </summary>
        public static class ARAnchorExtensions
        {
            /// <summary>
            /// Get the native OpenXR handle of the given ARAnchor object if available, or return 0.
            /// </summary>
            /// <param name="anchor">A valid <see cref="UnityEngine.XR.ARFoundation.ARAnchor"/> object.</param>
            /// <returns>XrAnchorMSFT handle that represents the underlying OpenXR anchor, or 0 when such associated handle cannot be found.</returns>
            public static ulong GetOpenXRHandle(this UnityEngine.XR.ARFoundation.ARAnchor anchor)
            {
                return anchor == null ? 0 : AnchorConverter.ToOpenXRHandle(anchor.nativePtr);
            }
        }
    }
}
