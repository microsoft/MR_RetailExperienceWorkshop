// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;

namespace Microsoft.MixedReality.OpenXR
{
    internal abstract class Disposable : IDisposable
    {
        protected bool disposedValue { get; private set; }

        protected virtual void DisposeManagedResources()
        {
            // Dispose managed state (managed objects)
        }

        protected virtual void DisposeNativeResources()
        {
            // Free unmanaged resources (unmanaged objects) and override finalizer
            // Set large fields to null
        }

        private void Dispose(bool disposing)
        {
            if (!disposedValue)
            {
                if (disposing)
                {
                    DisposeManagedResources();
                }

                DisposeNativeResources();
                disposedValue = true;
            }
        }

        // Override finalizer only if 'Dispose(bool disposing)' has code to free unmanaged resources
        ~Disposable()
        {
            // Do not change this code. Put cleanup code in 'Dispose(bool disposing)' method
            Dispose(disposing: false);
        }

        public void Dispose()
        {
            // Do not change this code. Put cleanup code in 'Dispose(bool disposing)' method
            Dispose(disposing: true);
            System.GC.SuppressFinalize(this);
        }
    }
}
