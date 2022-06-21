// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit;

namespace Microsoft.MixedReality.Toolkit.UX
{
    public class ToggleCollection : MonoBehaviour
    {
        [SerializeField]
        [Tooltip("Array of StatefulInteractable toggles that will be managed by this controller.")]
        private StatefulInteractable[] toggles;

        /// <summary>
        /// Array of StatefulInteractable toggles that will be managed by this controller.
        /// </summary>
        public StatefulInteractable[] Toggles
        {
            get => toggles;
            set
            {
                if (value != null && toggles != value)
                {
                    if (toggles != null)
                    {
                        // Destroy all listeners on previous toggleList
                        RemoveSelectionListeners();
                    }

                    // Set new list
                    toggles = value;

                    // Add listeners to new list
                    AddSelectionListeners();

                    int index = Mathf.Clamp(CurrentIndex, 0, toggles.Length - 1);
                    SetSelection(index);
                }
            }
        }

        [SerializeField]
        [Tooltip("Currently selected index in the ToggleList, default is 0")]
        private int currentIndex;

        /// <summary>
        /// The current index in the array of stateful toggles
        /// </summary>
        public int CurrentIndex
        {
            get => currentIndex;
            set => SetSelection(value);
        }

        [Tooltip("This event is triggered when any of the toggles in the ToggleList are selected. The event data is the index of the toggle in the ToggleList selected.")]
        [SerializeField]
        private ToggleSelectedEvent onToggleSelected = new ToggleSelectedEvent();

        /// <summary>
        /// This event is triggered when any of the toggles in the ToggleList are selected. The event data is the index of the toggle in the ToggleList selected.
        /// </summary>
        public ToggleSelectedEvent OnToggleSelected
        {
            get => onToggleSelected;
        }

        // List of the actions for the toggles in ToggleList
        private List<UnityAction<float>> toggleActions = new List<UnityAction<float>>();

        private void Start()
        {
            if (Toggles != null && toggleActions.Count == 0)
            {
                // Add listeners to each toggle in ToggleList
                AddSelectionListeners();

                // Force set initial selection in the toggle collection at start
                if (CurrentIndex >= 0 && CurrentIndex < Toggles.Length - 1)
                {
                    SetSelection(CurrentIndex, true);
                    Toggles[CurrentIndex].ForceSetToggled(true);
                }
            }
        }

        /// <summary>
        /// Set the selection of a an element in the toggle collection based on index.
        /// <param name="index">Index of an element in ToggleList</param>
        /// <param name="force">Force selection set</param>
        /// </summary>
        public void SetSelection(int index, bool force = false)
        {
            if (index < 0 || Toggles.Length <= index || Toggles == null || !isActiveAndEnabled)
            {
                Debug.LogWarning("Index out of range of ToggleList: " + index);
                return;
            }

            if (CurrentIndex != index || force)
            {
                currentIndex = index;

                OnSelection(index);
            }
        }

        protected virtual void OnSelection(int index)
        {
            for (int i = 0; i < Toggles.Length; i++)
            {
                if (index != i)
                {
                    Toggles[i].ForceSetToggled(false);
                }
                else
                {
                    Toggles[i].ForceSetToggled(true);
                }
            }

            OnToggleSelected?.Invoke(index);
        }

        private void AddSelectionListeners()
        {
            // Add listeners to new list
            for (int i = 0; i < Toggles.Length; i++)
            {
                int itemIndex = i;

                UnityAction<float> setSelectionAction = (_) =>
                {
                    SetSelection(itemIndex);
                };

                toggleActions.Add(setSelectionAction);

                Toggles[i].IsToggled.OnEntered.AddListener(setSelectionAction);
                Toggles[i].ToggleMode = StatefulInteractable.ToggleType.OneWayToggle;
            }
        }

        private void RemoveSelectionListeners()
        {
            for (int i = 0; i < toggleActions.Count; i++)
            {
                StatefulInteractable toggle = Toggles[i];

                if (toggle != null)
                {
                    toggle.IsToggled.OnEntered.RemoveListener(toggleActions[i]);
                }
            }

            toggleActions.Clear();
        }

        private void OnDestroy()
        {
            RemoveSelectionListeners();
        }
    }
}
