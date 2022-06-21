// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System.Reflection;
using UnityEditor;
using UnityEditor.XR.Management.Metadata;
using UnityEditor.XR.OpenXR.Features;
using UnityEngine;
using UnityEngine.SpatialTracking;
using UnityEngine.XR.Management;
using UnityEngine.XR.OpenXR;
using UnityEngine.XR.OpenXR.Features;
using UnityEngine.XR.OpenXR.Features.Interactions;

namespace Microsoft.MixedReality.OpenXR.Editor
{
    /// <summary>
    /// Provides a menu item for configuring settings according to specified OpenXR devices.
    /// </summary>
    internal static class UpdateSettings
    {
        internal const string CannotAutoConfigureForHL2 = "Could not automatically apply recommended settings for HoloLens 2. " +
            "Please see https://aka.ms/openxr-unity-install for manual set up instructions";

        [MenuItem("Mixed Reality/Project/Apply recommended scene settings for HoloLens 2", false, 1)]
        private static void ApplyHoloLens2CameraSettings()
        {
            Camera.main.clearFlags = CameraClearFlags.SolidColor;
            Camera.main.backgroundColor = Color.clear;
            ApplyGeneralCameraSettings();
        }

        private static void ApplyGeneralCameraSettings()
        {
            if (!Camera.main.gameObject.GetComponent<TrackedPoseDriver>()
#if USE_ARFOUNDATION
                && !Camera.main.gameObject.GetComponent<UnityEngine.XR.ARFoundation.ARPoseDriver>()
#endif
                )
            {
                Camera.main.gameObject.AddComponent<TrackedPoseDriver>();
            }
        }

        [MenuItem("Mixed Reality/Project/Apply recommended project settings for HoloLens 2", false, 0)]
        private static void ApplyOpenXRSettings()
        {
            XRManagerSettings standaloneManagerSettings = XRSettingsHelpers.GetOrCreateXRManagerSettings(BuildTargetGroup.Standalone);
            XRManagerSettings wsaManagerSettings = XRSettingsHelpers.GetOrCreateXRManagerSettings(BuildTargetGroup.WSA);

            if (standaloneManagerSettings != null)
            {
                XRPackageMetadataStore.AssignLoader(standaloneManagerSettings, nameof(OpenXRLoader), BuildTargetGroup.Standalone);
                EnableFeatureSet(BuildTargetGroup.Standalone);
            }
            else
            {
                Debug.LogError(PlayModeRemotingValidator.CannotAutoConfigureRemoting);
            }

            if (wsaManagerSettings != null)
            {
                XRPackageMetadataStore.AssignLoader(wsaManagerSettings, nameof(OpenXRLoaderNoPreInit), BuildTargetGroup.WSA);
                EnableFeatureSet(BuildTargetGroup.WSA);
            }
            else
            {
                Debug.LogError(CannotAutoConfigureForHL2);
            }

            EditorBuildSettings.TryGetConfigObject(Constants.k_SettingsKey, out Object obj);
            if (obj is IPackageSettings packageSettings)
            {
                EnableFeaturesInSettings(packageSettings.GetSettingsForBuildTargetGroup(BuildTargetGroup.Standalone), OpenXRSettings.DepthSubmissionMode.Depth24Bit);
                EnableFeaturesInSettings(packageSettings.GetSettingsForBuildTargetGroup(BuildTargetGroup.WSA), OpenXRSettings.DepthSubmissionMode.Depth16Bit);
            }
            else
            {
                Debug.LogError(CannotAutoConfigureForHL2);
            }

            EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.WSA, BuildTarget.WSAPlayer);

            QualitySettings.SetQualityLevel(2, true);
            QualitySettings.shadows = ShadowQuality.Disable;    // disable shadow of medium quality.
            QualitySettings.SetQualityLevel(0, true);

            AssetDatabase.SaveAssets();

            SetRealtimeGlobalIllumination(false);
        }

        private static void EnableFeatureSet(BuildTargetGroup target)
        {
            foreach (var featureSet in OpenXRFeatureSetManager.FeatureSetsForBuildTarget(target))
            {
                featureSet.isEnabled =
                    featureSet.featureSetId == HoloLensFeatureSet.featureSetId ||
                    featureSet.featureSetId == WMRFeatureSet.featureSetId;
            }
            OpenXRFeatureSetManager.SetFeaturesFromEnabledFeatureSets(target);
        }

        private static void EnableFeaturesInSettings(OpenXRSettings settings, OpenXRSettings.DepthSubmissionMode depthSubmissionMode)
        {
            if (settings != null)
            {
                settings.renderMode = OpenXRSettings.RenderMode.SinglePassInstanced;
                settings.depthSubmissionMode = depthSubmissionMode;

                foreach (OpenXRFeature feature in settings.GetFeatures())
                {
                    if (feature is MixedRealityFeaturePlugin ||
                        feature is HandTrackingFeaturePlugin ||
                        feature is MotionControllerFeaturePlugin ||
                        feature is MicrosoftHandInteraction)
                    {
                        feature.enabled = true;
                    }
                }

                EditorUtility.SetDirty(settings);
            }
        }

        /// <summary>
        /// Loads the lightmap settings as a SerializedObject and updates the realtime global illumination setting.
        /// </summary>
        /// <param name="enabled">Whether to enable or disable the realtime global illumination setting.</param>
        private static void SetRealtimeGlobalIllumination(bool enabled)
        {
            MethodInfo getLightmapSettingsMethod = typeof(LightmapEditorSettings).GetMethod("GetLightmapSettings", BindingFlags.Static | BindingFlags.NonPublic);
            if (getLightmapSettingsMethod != null)
            {
                SerializedObject lightmapSettings = new SerializedObject(getLightmapSettingsMethod.Invoke(null, null) as Object);
                SerializedProperty lightmaps = lightmapSettings?.FindProperty("m_GISettings.m_EnableRealtimeLightmaps");
                if (lightmaps != null)
                {
                    lightmaps.boolValue = enabled;
                    lightmapSettings.ApplyModifiedProperties();
                }
                else
                {
                    Debug.LogError("Could not find m_GISettings.m_EnableRealtimeLightmaps via reflection. Has this property been removed or renamed?");
                }
            }
            else
            {
                Debug.LogError("Could not find GetLightmapSettings via reflection. Has this method been removed or renamed?");
            }
        }
    }
}
