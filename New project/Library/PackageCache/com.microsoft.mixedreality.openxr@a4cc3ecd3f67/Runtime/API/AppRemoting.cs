// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Runtime.InteropServices;
using UnityEngine.XR.OpenXR;

namespace Microsoft.MixedReality.OpenXR.Remoting
{
    /// <summary>
    /// Provides information and configuration for creating a Holographic Remoting remote app.
    /// </summary>
    public static class AppRemoting
    {
        /// <summary>
        /// Sets the Holographic Remoting remote app configuration for the connection and initializes XR.
        /// </summary>
        /// <remarks>
        /// Uses XR Management to initialize the default XR loader and start it. If a loader is enabled, XR will be launched.
        /// This method must be run as a coroutine itself, as initializing XR has to happen in a coroutine.
        /// </remarks>
        /// <param name="configuration">The set of parameters to use for remoting.</param>
        public static System.Collections.IEnumerator Connect(RemotingConfiguration configuration) => m_appRemotingPlugin.Connect(configuration);

        /// <summary>
        /// Sets the Holographic Remoting remote app configuration for the runtime to listen on and initializes XR.
        /// </summary>
        /// <remarks>
        /// Uses XR Management to initialize the default XR loader and start it. If a loader is enabled, XR will be launched.
        /// This method must be run as a coroutine itself, as initializing XR has to happen in a coroutine.
        /// </remarks>
        /// <param name="listenConfiguration">The set of parameters to use for remoting.</param>
        /// <param name="onRemotingListenCompleted"> Action callback to signal listen complete. </param>
        public static System.Collections.IEnumerator Listen(RemotingListenConfiguration listenConfiguration, Action onRemotingListenCompleted = null)
            => m_appRemotingPlugin.Listen(listenConfiguration, default, onRemotingListenCompleted);

        /// <summary>
        /// Disconnects from the remote and stops the active XR session.
        /// </summary>
        public static void Disconnect() => m_appRemotingPlugin.Disconnect();

        /// <summary>
        /// Provides information on the current remoting session, if one exists.
        /// </summary>
        /// <param name="connectionState">The current connection state of the remote session.</param>
        /// <param name="disconnectReason">If the connection state is disconnected, this helps explain why.</param>
        /// <returns>Whether the information was successfully retrieved.</returns>
        public static bool TryGetConnectionState(out ConnectionState connectionState, out DisconnectReason disconnectReason)
            => m_appRemotingPlugin.TryGetConnectionState(out connectionState, out disconnectReason);

        private static readonly AppRemotingPlugin m_appRemotingPlugin = OpenXRSettings.Instance.GetFeature<AppRemotingPlugin>();
    }

    /// <summary>
    /// Describes the preferred video codec to use for the connection.
    /// </summary>
    public enum RemotingVideoCodec
    {
        /// <summary>
        /// Represents HEVC video codec preferred, fall back to H264 if HEVC is not supported by all participants.
        /// </summary>
        Auto = 0,
        /// <summary>
        /// Represents HEVC video codec.
        /// </summary>
        H265,
        /// <summary>
        /// Represents H264 video codec.
        /// </summary>
        H264,
    }

    /// <summary>
    /// Defines a set of data needed to initiate a remoting connection.
    /// </summary>
    [Serializable, StructLayout(LayoutKind.Sequential, Pack = 8)]
    public struct RemotingConfiguration
    {
        /// <summary>
        /// The host name or IP address of the player running in network server mode to connect to.
        /// </summary>
        public string RemoteHostName;

        /// <summary>
        /// The port number of the server's handshake port.
        /// </summary>
        public ushort RemotePort;

        /// <summary>
        /// The max bitrate in Kbps to use for the connection.
        /// </summary>
        public uint MaxBitrateKbps;

        /// <summary>
        /// The video codec to use for the connection.
        /// </summary>
        public RemotingVideoCodec VideoCodec;

        /// <summary>
        /// Enable/disable audio remoting.
        /// </summary>
        public bool EnableAudio;
    }

    /// <summary>
    /// Defines a set of data needed to initiate a remoting connection in listen mode.
    /// </summary>
    [Serializable, StructLayout(LayoutKind.Sequential, Pack = 8)]
    public struct RemotingListenConfiguration
    {
        /// <summary>
        /// The host name or IP address of the player running in network server mode to connect to.
        /// </summary>
        public string ListenInterface;

        /// <summary>
        /// The port number of the server's handshake port.
        /// </summary>
        public ushort HandshakeListenPort;

        /// <summary>
        /// The port number of the server's transport port.
        /// </summary>
        public ushort TransportListenPort;

        /// <summary>
        /// The max bitrate in Kbps to use for the connection.
        /// </summary>
        public uint MaxBitrateKbps;

        /// <summary>
        /// The video codec to use for the connection.
        /// </summary>
        public RemotingVideoCodec VideoCodec;

        /// <summary>
        /// Enable/disable audio remoting.
        /// </summary>
        public bool EnableAudio;
    }

    /// <summary>
    /// Describes the current connection state.
    /// </summary>
    public enum ConnectionState
    {
        /// <summary>
        /// Represents that the state is not connected, and no connection attempt is
        /// in progress (Client), or not listening for incoming connections (Server).
        /// </summary>
        Disconnected = 0,
        /// <summary>
        /// Represents connecting to server (Client), listening for incoming
        /// connections (Server), or performing connection handshake (Client/Server).
        /// </summary>
        Connecting = 1,
        /// <summary>
        /// Represents fully connected, all communication channels established (Client/Server).
        /// </summary>
        Connected = 2,
    }

    /// <summary>
    /// Describes the reason for why the connection disconnected.
    /// </summary>
    public enum DisconnectReason
    {
        /// <summary>
        /// The connection succeeded and there was no connection failure.
        /// </summary>
        None = 0,
        /// <summary>
        /// The connection failed for an unknown reason.
        /// </summary>
        Unknown = 1,
        /// <summary>
        /// The secure connection was enabled, but certificate was missing, invalid, or not usable (Server).
        /// </summary>
        NoServerCertificate = 2,
        /// <summary>
        /// The handshake port could not be opened for accepting connections (Server).
        /// </summary>
        HandshakePortBusy = 3,
        /// <summary>
        /// The handshake server is unreachable (Client).
        /// </summary>
        HandshakeUnreachable = 4,
        /// <summary>
        /// The handshake server closed the connection prematurely; likely due to TLS/Plain mismatch or invalid certificate (Client).
        /// </summary>
        HandshakeConnectionFailed = 5,
        /// <summary>
        /// The authentication with the handshake server failed (Client).
        /// </summary>
        AuthenticationFailed = 6,
        /// <summary>
        /// No common compatible remoting version could be determined during handshake (Client).
        /// </summary>
        RemotingVersionMismatch = 7,
        /// <summary>
        /// No common transport protocol could be determined during handshake (Client).
        /// </summary>
        IncompatibleTransportProtocols = 8,
        /// <summary>
        /// The handshake failed for any other reason (Client).
        /// </summary>
        HandshakeFailed = 9,
        /// <summary>
        /// The transport port could not be opened for accepting connections (Server).
        /// </summary>
        TransportPortBusy = 10,
        /// <summary>
        /// The transport server is unreachable (Client).
        /// </summary>
        TransportUnreachable = 11,
        /// <summary>
        /// The transport connection was closed before all communication channels had been set up (Client/Server).
        /// </summary>
        TransportConnectionFailed = 12,
        /// <summary>
        /// The transport connection was closed due to protocol version mismatch (Client/Server).
        /// </summary>
        ProtocolVersionMismatch = 13,
        /// <summary>
        /// A protocol error occurred that was severe enough to invalidate the current connection or connection attempt (Client/Server).
        /// </summary>
        ProtocolError = 14,
        /// <summary>
        /// The transport connection was closed due to the requested video codec not being available (Client/Server).
        /// </summary>
        VideoCodecNotAvailable = 15,
        /// <summary>
        /// The connection attempt has been canceled (Client/Server).
        /// </summary>
        Canceled = 16,
        /// <summary>
        /// The connection has been closed by peer (Client/Server).
        /// </summary>
        ConnectionLost = 17,
        /// <summary>
        /// The connection has been closed due to graphics device loss (Client/Server).
        /// </summary>
        DeviceLost = 18,
        /// <summary>
        /// The connection has been closed by request (Client/Server).
        /// </summary>
        DisconnectRequest = 19,
        /// <summary>
        /// The network is unreachable. This usually means the client knows no route to reach the remote host (Client).
        /// </summary>
        HandshakeNetworkUnreachable = 20,
        /// <summary>
        /// No connection could be made because the remote side actively refused it. Usually this means that no host application is running (Client).
        /// </summary>
        HandshakeConnectionRefused = 21,
        /// <summary>
        /// The transport connection was closed due to the requested video format not being available (Client/Server).
        /// </summary>
        VideoFormatNotAvailable = 22,
        /// <summary>
        /// Disconnected after receiving a disconnect request from the peer (Client/Server).
        /// </summary>
        PeerDisconnectRequest = 23,
        /// <summary>
        /// Timed out while waiting for peer to close connection (Client/Server).
        /// </summary>
        PeerDisconnectTimeout = 24,
        /// <summary>
        /// Timed out while waiting for transport session to be opened (Client/Server).
        /// </summary>
        SessionOpenTimeout = 25,
        /// <summary>
        /// Timed out while waiting for the remoting handshake to complete (Client/Server).
        /// </summary>
        RemotingHandshakeTimeout = 26,
        /// <summary>
        /// The connection failed due to an internal error (Client/Server).
        /// </summary>
        InternalError = 27,
        /// <summary>
        /// The handshake could not be opened due to insufficient permissions (Client).
        /// </summary>
        HandshakePermissionDenied = 28,
    }
}
