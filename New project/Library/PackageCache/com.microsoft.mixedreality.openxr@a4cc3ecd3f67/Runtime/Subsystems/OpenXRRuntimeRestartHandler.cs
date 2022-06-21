// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using UnityEngine;
using UnityEngine.XR.OpenXR;

namespace Microsoft.MixedReality.OpenXR
{
    internal class OpenXRRuntimeRestartHandler : IDisposable
    {
        private readonly string m_featureName;
        private readonly bool? m_skipRestart = null;
        private readonly bool? m_skipQuitApp = null;

        public OpenXRRuntimeRestartHandler(UnityEngine.XR.OpenXR.Features.OpenXRFeature feature, bool? skipRestart = null, bool? skipQuitApp = null)
        {
            m_featureName = feature.GetType().Name;
            m_skipRestart = skipRestart;
            m_skipQuitApp = skipQuitApp;

            Debug.Log($"[OpenXRRuntimeRestartHandler] is created for {m_featureName}.");

            OpenXRRuntime.wantsToRestart += OpenXRRuntime_wantsToRestart;
            OpenXRRuntime.wantsToQuit += OpenXRRuntime_wantsToQuit;
        }

        public void Dispose()
        {
            Debug.Log($"[OpenXRRuntimeRestartHandler] is disposed for {m_featureName}");
            OpenXRRuntime.wantsToQuit -= OpenXRRuntime_wantsToQuit;
            OpenXRRuntime.wantsToRestart -= OpenXRRuntime_wantsToRestart;
        }

        private bool OpenXRRuntime_wantsToQuit()
        {
            if (m_skipQuitApp == true)
            {
                Debug.Log($"[OpenXRRuntimeRestartHandler] {m_featureName} attempts to skip quitting the app after XR session is finished.");
                return false;   // skip quitting application after XR session is finished.
            }
            else
            {
                return true;    // yield the decision to other wantsToQuit event handlers.
            }
        }

        private bool OpenXRRuntime_wantsToRestart()
        {
            if (m_skipRestart == true)
            {
                Debug.Log($"[OpenXRRuntimeRestartHandler] {m_featureName} attempts to skip restarting XR session.");
                return false;  // skip restarting XR session.
            }
            else
            {
                return true;    // yield the decision to other wantsToRestart event handlers.
            }
        }
    }
}
