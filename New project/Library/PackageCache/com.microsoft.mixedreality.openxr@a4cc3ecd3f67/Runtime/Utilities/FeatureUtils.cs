// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using UnityEngine.XR.ARSubsystems;

namespace Microsoft.MixedReality.OpenXR
{
    internal static class FeatureUtils
    {
        internal static TrackableId ToTrackableId(Guid guid)
        {
            byte[] bytes = guid.ToByteArray();
            ulong subId1 = BitConverter.ToUInt64(bytes, 0);
            ulong subId2 = BitConverter.ToUInt64(bytes, 8);
            return new TrackableId(subId1, subId2);
        }

        internal static Guid ToGuid(TrackableId id)
        {
            byte[] bytes = new byte[16];
            Array.Copy(BitConverter.GetBytes(id.subId1), 0, bytes, 0, 8);
            Array.Copy(BitConverter.GetBytes(id.subId2), 0, bytes, 8, 8);
            return new Guid(bytes);
        }
    }
}
