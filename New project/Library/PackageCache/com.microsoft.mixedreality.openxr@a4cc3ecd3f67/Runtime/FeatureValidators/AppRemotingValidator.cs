// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#if UNITY_EDITOR

using Microsoft.MixedReality.OpenXR.Remoting;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.XR.OpenXR.Features;
using UnityEngine.XR.Management;
using UnityEngine.XR.OpenXR;
using UnityEngine.XR.OpenXR.Features;
using static UnityEngine.XR.OpenXR.Features.OpenXRFeature;

namespace Microsoft.MixedReality.OpenXR
{
    internal class AppRemotingValidator
    {
        internal static void GetValidationChecks(OpenXRFeature feature, List<ValidationRule> results, BuildTargetGroup targetGroup)
        {
            results.Add(new ValidationRule(feature)
            {
                message = $"\"{AppRemotingPlugin.featureName}\" and \"Initialize XR on Startup\" are both enabled. XR initialization should be delayed until a specific IP address is entered.",
                error = true,
                checkPredicate = () =>
                {
                    XRGeneralSettings settings = XRSettingsHelpers.GetOrCreateXRGeneralSettings(targetGroup);
                    return settings != null && !settings.InitManagerOnStart;
                },
                fixIt = () =>
                {
                    XRGeneralSettings settings = XRSettingsHelpers.GetOrCreateXRGeneralSettings(targetGroup);
                    if (settings != null)
                    {
                        settings.InitManagerOnStart = false;
                    }
                }
            });
        }
    }
}

#endif
