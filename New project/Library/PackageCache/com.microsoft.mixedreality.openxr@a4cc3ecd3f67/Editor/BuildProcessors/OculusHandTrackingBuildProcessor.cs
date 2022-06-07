// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Xml;
using UnityEditor.Build.Reporting;
using UnityEditor.XR.OpenXR.Features;
using UnityEngine.XR.OpenXR.Features.OculusQuestSupport;
using static Microsoft.MixedReality.OpenXR.Editor.BuildProcessorHelpers;
using static Microsoft.MixedReality.OpenXR.Editor.BuildProcessorHelpers.AndroidManifest;

namespace Microsoft.MixedReality.OpenXR.Editor
{
    internal class OculusHandTrackingBuildProcessor : OpenXRFeatureBuildHooks
    {
        public override int callbackOrder => 1;

        public override Type featureType => typeof(OculusQuestFeature);

        protected override void OnPreprocessBuildExt(BuildReport report) { }

        protected override void OnPostGenerateGradleAndroidProjectExt(string path)
        {
            if (IsFeatureEnabled<HandTrackingFeaturePlugin>())
            {
                var androidManifest = new AndroidManifest(GetManifestPath(path));
                androidManifest.EnsureOculusHandTrackingPermissions();
                androidManifest.Save();
            }
        }

        protected override void OnPostprocessBuildExt(BuildReport report) { }
    }

    internal static class AndroidManifestExtensions
    {
        internal static void EnsureOculusHandTrackingPermissions(this AndroidManifest manifest)
        {
            XmlNode usesPermission = null;
            XmlNode usesFeature = null;
            foreach (XmlNode child in manifest.RootElement.ChildNodes)
            {
                if (child.Name == "uses-permission" &&
                    HasAttribute(child, "android:name", "com.oculus.permission.HAND_TRACKING"))
                {
                    usesPermission = child;

                    if (usesPermission != null && usesFeature != null)
                    {
                        break;
                    }
                }
                else if (child.Name == "uses-feature" &&
                    HasAttribute(child, "android:name", "oculus.software.handtracking"))
                {
                    usesFeature = child;

                    if (usesPermission != null && usesFeature != null)
                    {
                        break;
                    }
                }
            }

            if (usesPermission == null)
            {
                usesPermission = manifest.RootElement.AppendChild(manifest.CreateElement("uses-permission"));
                usesPermission.Attributes.Append(manifest.CreateAndroidAttribute("name", "com.oculus.permission.HAND_TRACKING"));
            }

            if (usesFeature == null)
            {
                usesFeature = manifest.RootElement.AppendChild(manifest.CreateElement("uses-feature"));
                usesFeature.Attributes.Append(manifest.CreateAndroidAttribute("name", "oculus.software.handtracking"));
            }

            if (!SetAttribute(usesFeature, "android:required", "false"))
            {
                usesFeature.Attributes.Append(manifest.CreateAndroidAttribute("required", "false"));
            }
        }
    }
}
