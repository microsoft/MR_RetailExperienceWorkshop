// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.XR.OpenXR;

namespace Microsoft.MixedReality.OpenXR
{
    internal class OpenXRSceneUnderstandingObserver
    {
        internal static readonly uint InvalidSceneObserverHandle = 0;
        internal static readonly NativeLibToken nativeLibToken = MixedRealityFeaturePlugin.nativeLibToken;

        public static OpenXRSceneUnderstandingObserver CreateDefaultSceneObserver()
        {
            MixedRealityFeaturePlugin feature = OpenXRSettings.Instance.GetFeature<MixedRealityFeaturePlugin>();
            if (feature == null || !feature.enabled)
            {
                Debug.LogWarning($"GetDefaultSceneObserver: Scene understanding observers are not supported; {MixedRealityFeaturePlugin.featureName} is not enabled.");
                return new OpenXRSceneUnderstandingObserver(InvalidSceneObserverHandle, 0);
            }

            ulong openXRSession = OpenXRContext.Current.Session;
            if (openXRSession == 0)
            {
                Debug.LogWarning("GetDefaultSceneObserver: Cannot get scene understanding observers without a valid XR session.");
                return new OpenXRSceneUnderstandingObserver(InvalidSceneObserverHandle, 0);
            }

            uint nativeHandle = NativeLib.GetDefaultSceneObserverHandle(OpenXRSceneUnderstandingObserver.nativeLibToken);
            if (nativeHandle == InvalidSceneObserverHandle)
            {
                Debug.LogWarning("GetDefaultSceneObserver: The scene understanding observer is not supported; either the feature is not enabled, or the related OpenXR extensions are not supported.");
                return new OpenXRSceneUnderstandingObserver(InvalidSceneObserverHandle, 0);
            }

            return new OpenXRSceneUnderstandingObserver(nativeHandle, openXRSession);
        }

        private uint m_nativeObserverHandle;
        private ulong m_openXRSession;

        private OpenXRSceneUnderstandingObserver(uint nativeObserverHandle, ulong openXRSession)
        {
            m_nativeObserverHandle = nativeObserverHandle;
            m_openXRSession = openXRSession;
        }

        public bool IsValid()
        {
            return m_nativeObserverHandle != InvalidSceneObserverHandle && m_openXRSession == OpenXRContext.Current.Session;
        }

        public IEnumerator StartDeserializingSceneFromStreamingAsset(string pathInStreamingAssets)
        {
            if (!IsValid())
            {
                Debug.LogError($"StartDeserializingSceneFromStreamingAsset: Scene understanding observer is not valid.");
                yield break;
            }

            Uri fullUri = new Uri(Path.Combine(Application.streamingAssetsPath, pathInStreamingAssets));
            UnityWebRequest webRequest = UnityWebRequest.Get(fullUri);
            yield return webRequest.SendWebRequest();

            if (webRequest.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError($"StartDeserializingSceneFromStreamingAsset: Could not load file for deserialization.\nError: {webRequest.error}\nPath: {fullUri}");
                yield break;
            }

            NativeLib.SetSceneObserverSceneData(nativeLibToken, m_nativeObserverHandle, webRequest.downloadHandler.data, (uint)webRequest.downloadHandler.data.Length);
        }
    }

} // namespace Microsoft.MixedReality.OpenXR
