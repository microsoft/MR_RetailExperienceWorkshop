// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License

using UnityEngine.Playables;

namespace Microsoft.MixedReality.Toolkit.UX
{
    /// <summary>
    /// An <see cref="IPlayableEffect"/> that plugs into an AnimationLayerMixerPlayable.
    /// </summary>
    public interface IAnimationMixableEffect : IPlayableEffect
    {
        /// <summary>
        /// Whether an animation-based effect will additively blend or override
        /// on top of other animations. In Override mode, the weight of the layer
        /// is set equal to the playback time, so inactive layers don't override active
        /// active layers.
        /// </summary>
        public enum AnimationBlendType
        {
            Additive,

            /// <summary>
            /// In Override mode, the weight of layer is set equal to the playback time of the layer.
            /// </summary>
            Override
        }

        /// <summary>
        /// Should the animation additively blend or override?
        /// In Override mode, the weight of the layer is set equal
        /// to the playback time, to model state "transitions".
        /// </summary>
        AnimationBlendType BlendMode { get; }
    }
}
