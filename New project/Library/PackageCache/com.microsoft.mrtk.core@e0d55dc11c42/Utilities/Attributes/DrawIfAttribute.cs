// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit
{
    /// <summary>
    /// Conditionally draws a property or field.
    /// </summary>
    /// <remarks>
    /// Based on https://forum.unity.com/threads/draw-a-field-only-if-a-condition-is-met.448855/
    /// </remarks>
    [AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = true)]
    public sealed class DrawIfAttribute : PropertyAttribute
    {
        public string ComparedPropertyName { get; private set; }

        public bool ComparedValue { get; private set; }

        /// <summary>
        /// Only draws the field only if the provided property's boolValue matches the compared value.
        /// </summary>
        /// <param name="comparedPropertyName">The name of the property that is being compared (case sensitive).</param>
        /// <param name="comparedValue">The value the property is being compared to.</param>
        public DrawIfAttribute(string comparedPropertyName, bool comparedValue = true)
        {
            this.ComparedPropertyName = comparedPropertyName;
            this.ComparedValue = comparedValue;
        }
    }
}