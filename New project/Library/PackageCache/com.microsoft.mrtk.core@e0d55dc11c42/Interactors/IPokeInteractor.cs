// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine.XR.Interaction.Toolkit;

namespace Microsoft.MixedReality.Toolkit
{
    /// <summary>
    /// An interface that all poke-like interactors implement.
    /// Interactors that implement this interface are expected to use
    /// the <see cref="IXRInteractor"/> attachTransform to specify
    /// the point at which the poke occurs; typically, this would be
    /// the tip of the index finger for an articulated hand, or a
    /// pre-determined poking point on a motion controller rig.
    /// </summary>
    public interface IPokeInteractor : IXRInteractor
    {
        /// <summary>
        /// The radius of the poking point. This is used to pad
        /// a pressable/pushable surface so that the surface of the finger
        /// is treated as the pressing point, not the center of the finger.
        /// </summary>
        float PokeRadius { get; }
    }
}