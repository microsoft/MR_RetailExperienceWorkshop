// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License

using System;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Animations;

using AnimationBlendType = Microsoft.MixedReality.Toolkit.UX.IAnimationMixableEffect.AnimationBlendType;

namespace Microsoft.MixedReality.Toolkit.UX
{
    [Serializable]
    /// <summary>
    /// An <see cref="IEffect"> that plays an <see cref="AnimationClip"/>.
    /// </summary>
    internal class AnimationEffect : PlayableEffect, IAnimationMixableEffect
    {
        [SerializeField]
        [HideInInspector]
#pragma warning disable CS0414 // Inspector uses this as a helpful label in lists.
        private string name = "Animation";
#pragma warning restore CS0414 // Inspector uses this as a helpful label in lists.

        [SerializeField]
        [Tooltip("The animation clip for this effect.")]
        private AnimationClip clip;

        [SerializeField]
        [Tooltip("Playback speed of the playable.")]
        private float speed = 1.0f;

        /// <inheritdoc />
        protected override float Speed => speed;

        [SerializeField]
        [Tooltip("Should the playable be played back as a one-shot triggered effect, or should the playback time be directly driven by the state's value?")]
        private PlayableEffect.PlaybackType playbackMode;

        /// <inheritdoc />
        protected override PlayableEffect.PlaybackType PlaybackMode => playbackMode;

        #region IAnimationMixableEffect

        [SerializeField]
        [Tooltip("Should the animation additively blend or override?")]
        private AnimationBlendType blendMode;

        /// <inheritdoc />
        public AnimationBlendType BlendMode => blendMode;

        #endregion IAnimationMixableEffect

        public AnimationEffect() { }

        public AnimationEffect(AnimationClip clip, PlayableEffect.PlaybackType playbackMode, float speed)
        {
            this.clip = clip;
            this.playbackMode = playbackMode;
            this.speed = speed;
        }

        /// <inheritdoc />
        public override void Setup(PlayableGraph graph, GameObject owner)
        {
            Playable = AnimationClipPlayable.Create(graph, clip);
            Playable.SetDuration(clip.length);
        }
    }
}