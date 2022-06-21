// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;
using UnityEngine.XR.ARSubsystems;

namespace Microsoft.MixedReality.OpenXR
{
    internal enum NativeLibToken : ulong
    {
        Invalid = 0,
        HoloLens = 1,
        HandTracking = 2,
        Remoting = 3,
        Controller = 4,
    }

    [AttributeUsage(AttributeTargets.Class)]
    internal class NativeLibTokenAttribute : Attribute
    {
        public NativeLibToken NativeLibToken { get; set; }
    }

    [Flags]
    internal enum NativeSpaceLocationFlags : uint
    {
        OrientationValid = 1,
        PositionValid = 2,
        OrientationTracked = 4,
        PositionTracked = 8,
        All = 15
    }

    internal class NativeLib
    {
        internal const string DllName = "MicrosoftOpenXRPlugin";

        // Configure Unity's IL2CPP compiler to process C# string (always UTF16) interop to C++ "const char*".
        // Unity by default is converting to UTF8 when compiling IL2CPP code for pinvoke.
        // Using the [MarshalAs(UnmanagedUTF8Type)] string to make this conversion more explicitly.
        // UnmanagedType.LPUTF8Str is only defined in Net40, so for compatibility on NET20, use 48 instead.
        const short UnmanagedUTF8Type = 48; // UnmanagedType.LPUTF8Str

        [DllImport(DllName, EntryPoint = "openxr_plugin_InitializePlugin")]
        internal static extern void InitializePlugin();

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetPluginEnvironment")]
        internal static extern void SetPluginEnvironment(PluginEnvironment pluginEnvironment, [MarshalAs(UnmanagedUTF8Type)] string pluginInfo);

        [DllImport(DllName, EntryPoint = "openxr_plugin_OnSubsystemsStarting")]
        internal static extern void OnSubsystemsStarting(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_OnSubsystemsStopped")]
        internal static extern void OnSubsystemsStopped(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_HookGetInstanceProcAddr")]
        internal static extern IntPtr HookGetInstanceProcAddr(NativeLibToken token, IntPtr func);

        [DllImport(DllName, EntryPoint = "openxr_plugin_OnInstanceCreated")]
        internal static extern void OnInstanceCreated(NativeLibToken token, ulong instance, IntPtr xrGetInstanceProcAddr);

        [DllImport(DllName, EntryPoint = "openxr_plugin_OnInstanceDestroyed")]
        internal static extern void OnInstanceDestroyed(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetXrSystemId")]
        internal static extern void SetXrSystemId(NativeLibToken token, ulong systemId);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetXrSession")]
        internal static extern void SetXrSession(NativeLibToken token, ulong session);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetXrSessionRunning")]
        internal static extern void SetXrSessionRunning(NativeLibToken token, bool running);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetXrSessionState")]
        internal static extern void SetSessionState(NativeLibToken token, uint sessionState);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetViewTrackingFlags")]
        internal static extern NativeSpaceLocationFlags GetViewTrackingFlags(NativeLibToken token, ViewConfigurationType viewConfigurationType);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetViewConfigurationTypeDisabled")]
        internal static extern void SetViewConfigurationTypeDisabled(NativeLibToken token, ViewConfigurationType viewConfigurationType);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetSceneOriginSpace")]
        internal static extern void SetSceneOriginSpace(NativeLibToken token, ulong sceneOriginSpace);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetEnabledViewConfigurationTypesCount")]
        internal static extern uint GetEnabledViewConfigurationTypesCount(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetEnabledViewConfigurationTypes")]
        internal static extern void GetEnabledViewConfigurationTypes(NativeLibToken token, ViewConfigurationType[] viewConfigurationTypes, uint viewConfigurationTypesCapacity);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetViewConfigurationIsActive")]
        internal static extern bool GetViewConfigurationIsActive(NativeLibToken token, ViewConfigurationType viewConfigurationType);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetSupportedReprojectionModesCount")]
        internal static extern uint GetSupportedReprojectionModesCount(NativeLibToken token, ViewConfigurationType viewConfigurationType);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetSupportedReprojectionModes")]
        internal static extern void GetSupportedReprojectionModes(NativeLibToken token, ViewConfigurationType viewConfigurationType, ReprojectionMode[] reprojectionModes, uint reprojectionModesCapacity);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetReprojectionSettings")]
        internal static extern void SetReprojectionSettings(NativeLibToken token, ViewConfigurationType viewConfigurationType, NativeReprojectionSettings nativeReprojectionSettings);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetFoundationTrackingStateFlags")]
        internal static extern NativeSpaceLocationFlags GetFoundationTrackingStateFlags(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetDefaultSceneObserverHandle")]
        internal static extern uint GetDefaultSceneObserverHandle(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetSceneObserverSceneData")]
        internal static extern void SetSceneObserverSceneData(NativeLibToken token, uint handle, byte[] sceneData, uint sceneDataLength);

        [DllImport(DllName, EntryPoint = "openxr_plugin_CreatePlaneProvider")]
        internal static extern void CreatePlaneProvider(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetPlanefindingActive")]
        internal static extern void SetPlanefindingActive(NativeLibToken token, bool isActive);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetPlaneDetectionMode")]
        internal static extern void SetPlaneDetectionMode(NativeLibToken token, PlaneDetectionMode planeDetectionMode);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetNumPlaneChanges")]
        internal static extern void GetNumPlaneChanges(NativeLibToken token, FrameTime frameTime, ref uint numAddedPlanes, ref uint numUpdatedPlanes, ref uint numRemovedPlanes);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetPlaneChanges")]
        unsafe internal static extern void GetPlaneChanges(NativeLibToken token, uint addedPlanesSize, void* addedPlanes, uint updatedPlanesSize, void* updatedPlanes, uint removedPlanesSize, void* removedPlanes);

        [DllImport(DllName, EntryPoint = "openxr_plugin_CreateAnchorProvider")]
        internal static extern void CreateAnchorProvider(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryAddAnchor")]
        unsafe internal static extern bool TryAddAnchor(NativeLibToken token, FrameTime frameTime, Quaternion rotation, Vector3 position, void* anchorPtr);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryRemoveAnchor")]
        internal static extern bool TryRemoveAnchor(NativeLibToken token, Guid anchorId);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetNumAnchorChanges")]
        internal static extern void GetNumAnchorChanges(NativeLibToken token, FrameTime frameTime, ref uint numAddedAnchors, ref uint numUpdatedAnchors, ref uint numRemovedAnchors);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetAnchorChanges")]
        unsafe internal static extern void GetAnchorChanges(NativeLibToken token, uint addedAnchorsSize, void* addedAnchors, uint updatedAnchorsSize, void* updatedAnchors, uint removedAnchorsSize, void* removedAnchors);

        [DllImport(DllName, EntryPoint = "openxr_plugin_LoadAnchorStore")]
        internal static extern bool LoadAnchorStore(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetNumPersistedAnchorNames")]
        internal static extern uint GetNumPersistedAnchorNames(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_ClearAnchorChanges")]
        internal static extern void ClearAnchorChanges(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetPersistedAnchorName")]
        internal static extern void GetPersistedAnchorName(NativeLibToken token, uint idx, [MarshalAs(UnmanagedUTF8Type)] StringBuilder nameOut, uint capacity);

        [DllImport(DllName, EntryPoint = "openxr_plugin_LoadPersistedAnchor")]
        internal static extern Guid LoadPersistedAnchor(NativeLibToken token, [MarshalAs(UnmanagedUTF8Type)] string name);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryPersistAnchor")]
        internal static extern bool TryPersistAnchor(NativeLibToken token, [MarshalAs(UnmanagedUTF8Type)] string name, Guid anchorId);

        [DllImport(DllName, EntryPoint = "openxr_plugin_UnpersistAnchor")]
        internal static extern void UnpersistAnchor(NativeLibToken token, [MarshalAs(UnmanagedUTF8Type)] string name);

        [DllImport(DllName, EntryPoint = "openxr_plugin_ClearPersistedAnchors")]
        internal static extern void ClearPersistedAnchors(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_GetHandJointData")]
        internal static extern bool GetHandJointData(NativeLibToken token, Handedness handedness, FrameTime frameTime,
            [MarshalAs(UnmanagedType.LPArray, SizeConst = HandTracker.JointCount)] HandJointLocation[] handJoints);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryLocateHandMesh")]
        internal static extern bool TryLocateHandMesh(NativeLibToken token, Handedness handedness, FrameTime frameTime, HandPoseType handPoseType, out Pose pose);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryGetHandMesh")]
        internal static extern bool TryGetHandMesh(NativeLibToken token, Handedness handedness, FrameTime frameTime, HandPoseType handPoseType,
            ref ulong vertexBufferKey, out uint vertexCount, Vector3[] vertexPositions, Vector3[] vertexNormals,
            ref uint indexBufferKey, out uint indexCount, int[] indices);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryGetHandMeshBufferSizes")]
        internal static extern bool TryGetHandMeshBufferSizes(NativeLibToken token, out uint maxVertexCount, out uint maxIndexCount);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryGetControllerModelKey")]
        internal static extern bool TryGetControllerModelKey(NativeLibToken token, Handedness handedness, out ulong modelKey);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryGetControllerModel")]
        internal static extern bool TryGetControllerModel(NativeLibToken token, ulong modelKey, uint bufferInputCapacity, out uint bufferOutputCount, byte[] modelBuffer = null);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryEnableRemotingOverride")]
        internal static extern bool TryEnableRemotingOverride(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_ResetRemotingOverride")]
        internal static extern void ResetRemotingOverride(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_ConnectRemoting")]
        internal static extern void ConnectRemoting(NativeLibToken token, Remoting.RemotingConfiguration configuration);

        [DllImport(DllName, EntryPoint = "openxr_plugin_ListenRemoting")]
        internal static extern void ListenRemoting(NativeLibToken token, Remoting.RemotingListenConfiguration listenConfiguration, bool secureListen, 
            [MarshalAs(UnmanagedUTF8Type)] string certificateStorePath, [MarshalAs(UnmanagedUTF8Type)] string subjectName,
            [MarshalAs(UnmanagedUTF8Type)] string keyPassPhrase, [MarshalAs(UnmanagedUTF8Type)] string authenticationRealm,
            [MarshalAs(UnmanagedUTF8Type)] string secureToken);

        [DllImport(DllName, EntryPoint = "openxr_plugin_DisconnectRemoting")]
        internal static extern void DisconnectRemoting(NativeLibToken token);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryGetRemotingConnectionState")]
        internal static extern bool TryGetRemotingConnectionState(NativeLibToken token, out Remoting.ConnectionState connectionState, out Remoting.DisconnectReason disconnectReason);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryCreateSpaceFromStaticNodeId")]
        internal static extern bool TryCreateSpaceFromStaticNodeId(NativeLibToken token, Guid id, out ulong spaceId);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryCreateSpaceFromDynamicNodeId")]
        internal static extern bool TryCreateSpaceFromDynamicNodeId(NativeLibToken token, Guid id, out ulong spaceId);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryLocateSpatialGraphNodeSpace")]
        internal static extern bool TryLocateSpatialGraphNodeSpace(NativeLibToken token, ulong spaceId, FrameTime frameTime, out Pose pose);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryLocateSpatialGraphNodeSpaceWithQpcTime")]
        internal static extern bool TryLocateSpatialGraphNodeSpace(NativeLibToken token, ulong spaceId, long qpcTime, out Pose pose);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryLocateViewSpace")]
        internal static extern bool TryLocateViewSpace(NativeLibToken nativeLibToken, FrameTime frameTime, out Pose pose, out long time);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryAcquireSceneCoordinateSystem")]
        internal static extern IntPtr TryAcquireSceneCoordinateSystem(NativeLibToken token, Pose poseInScene);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryAcquirePerceptionSpatialAnchorByHandle")]
        internal static extern IntPtr TryAcquirePerceptionSpatialAnchor(NativeLibToken token, ulong anchorHandle);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryAcquirePerceptionSpatialAnchorById")]
        internal static extern IntPtr TryAcquirePerceptionSpatialAnchor(NativeLibToken token, Guid trackableId);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryAcquireXrSpatialAnchor")]
        internal static extern Guid TryAcquireXrSpatialAnchor(NativeLibToken token, [MarshalAs(UnmanagedType.IUnknown)] object perceptionAnchor);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryAcquireAndReplaceXrSpatialAnchor")]
        internal static extern Guid TryAcquireAndReplaceXrSpatialAnchor(NativeLibToken token, [MarshalAs(UnmanagedType.IUnknown)] object perceptionAnchor, Guid id);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryGetPerceptionDeviceFactory")]
        internal static extern IntPtr TryGetPerceptionDeviceFactory(NativeLibToken nativeLibToken, IntPtr pfnGetInstanceProcAddr);

        [DllImport(DllName, EntryPoint = "openxr_plugin_SetMeshComputeSettings")]
        internal static extern bool SetMeshComputeSettings(NativeLibToken token, MeshComputeSettings settings);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryCreateGestureRecognizer")]
        internal static extern ulong TryCreateGestureRecognizer(NativeLibToken nativeLibToken, GestureSettings settings);

        [DllImport(DllName, EntryPoint = "openxr_plugin_DestroyGestureRecognizer")]
        internal static extern void DestroyGestureRecognizer(NativeLibToken nativeLibToken, ulong gestureRecognizer);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TrySetGestureSettings")]
        internal static extern bool TrySetGestureSettings(NativeLibToken nativeLibToken, ulong gestureRecognizer, GestureSettings settings);

        [DllImport(DllName, EntryPoint = "openxr_plugin_CancelPendingGesture")]
        internal static extern void CancelPendingGesture(NativeLibToken nativeLibToken, ulong gestureRecognizer);

        [DllImport(DllName, EntryPoint = "openxr_plugin_TryGetNextEventData")]
        internal static extern bool TryGetNextEventData(NativeLibToken nativeLibToken, ulong gestureRecognizer, ref GestureEventData eventData);

        [DllImport(DllName, EntryPoint = "openxr_plugin_StartGestureRecognizer")]
        internal static extern void StartGestureRecognizer(NativeLibToken nativeLibToken, ulong gestureRecognizer);

        [DllImport(DllName, EntryPoint = "openxr_plugin_StopGestureRecognizer")]
        internal static extern void StopGestureRecognizer(NativeLibToken nativeLibToken, ulong gestureRecognizer);
    }
}
