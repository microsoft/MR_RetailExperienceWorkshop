// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System.Threading.Tasks;
using UnityEngine.XR.OpenXR;

namespace Microsoft.MixedReality.OpenXR
{
    /// <summary>
    /// Provides access to a byte stream representing a glTF model of the current controller.
    /// </summary>
    public class ControllerModel
    {
        /// <summary>
        /// The user's left controller.
        /// </summary>
        public static ControllerModel Left { get; } = new ControllerModel(Handedness.Left);

        /// <summary>
        /// The user's right controller.
        /// </summary>
        public static ControllerModel Right { get; } = new ControllerModel(Handedness.Right);

        private readonly NativeLibToken m_token;
        private readonly Handedness m_handedness;
        private readonly bool m_controllerModelExtensionEnabled;

        private byte[] m_modelBuffer = null;

        private const string ControllerModelExtension = "XR_MSFT_controller_model";

        internal ControllerModel(Handedness trackerHandedness)
        {
            m_token = MotionControllerFeaturePlugin.nativeLibToken;
            m_handedness = trackerHandedness;
            m_controllerModelExtensionEnabled = OpenXRRuntime.IsExtensionEnabled(ControllerModelExtension);
        }

        /// <summary>
        /// Provides access to a model-specific key to either load a new model or use to cache loaded models.
        /// </summary>
        /// <param name="modelKey">The unique key representing this controller's model, if one exists.</param>
        /// <returns>True if a valid key could be retrieved. False otherwise.</returns>
        public bool TryGetControllerModelKey(out ulong modelKey)
        {
            if (m_token == NativeLibToken.Invalid || !m_controllerModelExtensionEnabled)
            {
                UnityEngine.Debug.LogWarning($"TryGetControllerModelKey: The controller model is not supported; missing OpenXR extension {ControllerModelExtension}");
                modelKey = 0;
                return false; // Controller feature is not enabled.
            }

            return NativeLib.TryGetControllerModelKey(m_token, m_handedness, out modelKey);
        }

        /// <summary>
        /// Provides a byte stream representing the glTF model of the controller, if available.
        /// </summary>
        /// <remarks>
        /// Needs to be passed into a glTF parser/loader to convert into a Unity GameObject.
        /// This method allocates a byte buffer on every successful call. It's recommended to either cache it or the resulting GameObject locally instead of calling this multiple times.
        /// </remarks>
        /// <param name="modelKey">The unique key representing the desired controller's model. Can be queried using <see cref="TryGetControllerModelKey"/>.</param>
        /// <returns>Task that triggers once the controller model stream is loaded, yielding the stream or null if there is no model available.</returns>
        public Task<byte[]> TryGetControllerModel(ulong modelKey)
        {
            if (m_token == NativeLibToken.Invalid || !m_controllerModelExtensionEnabled)
            {
                UnityEngine.Debug.LogWarning($"TryGetControllerModel: The controller model is not supported; missing OpenXR extension {ControllerModelExtension}");
                return Task.FromResult<byte[]>(null); // Controller feature is not enabled.
            }

            Task<byte[]> newTask = Task.Run(() =>
            {
                if (NativeLib.TryGetControllerModel(m_token, modelKey, 0, out uint bufferCapacity))
                {
                    m_modelBuffer = new byte[bufferCapacity];
                }
                else
                {
                    return null;
                }

                if (NativeLib.TryGetControllerModel(m_token, modelKey, bufferCapacity, out _, m_modelBuffer))
                {
                    return m_modelBuffer;
                }
                else
                {
                    return null;
                }
            });

            return newTask;
        }
    }
}
