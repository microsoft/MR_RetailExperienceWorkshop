// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Collections.Generic;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;

namespace Microsoft.MixedReality.Toolkit.Examples.Demos
{
    /// <summary>
    /// A simple interactor that can live on inanimate/non-XRController objects.
    /// Acts as a poking interactor. 
    /// </summary>
    internal class PenInteractor : XRBaseInteractor, IPokeInteractor
    {
        #region IPokeInteractor Implementation

        /// <inheritdoc />
        public float PokeRadius => 0.001f;

        #endregion IPokeInteractor Implementation

        /// <inheritdoc />
        // Always select.
        public override bool isSelectActive => true;

        // Collection of hover targets.
        private HashSet<IXRInteractable> hoveredTargets = new HashSet<IXRInteractable>();

        /// <inheritdoc />
        public override void GetValidTargets(List<IXRInteractable> targets)
        {
            targets.Clear();
            targets.AddRange(hoveredTargets);
        }

        /// <inheritdoc />
        public override bool CanSelect(IXRSelectInteractable interactable)
        {
            // Can only select if we've hovered.
            return hoveredTargets.Contains(interactable);
        }

        void OnTriggerStay(Collider c)
        {
            if (interactionManager.TryGetInteractableForCollider(c, out var associatedInteractable))
            {
                hoveredTargets.Add(associatedInteractable);
            }
        }

        void FixedUpdate()
        {
            hoveredTargets.Clear();
        }
    }
}
