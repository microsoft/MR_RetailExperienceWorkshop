// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#if GT_USE_URP
using UnityEngine;
using UnityEngine.UI;

namespace Microsoft.MixedReality.GraphicsTools
{
    /// <summary>
    /// Automatically blurs an image and passes the image and rect size/location into materials which will overlay the rect.
    /// </summary>
    [RequireComponent(typeof(RectTransform))]
    [AddComponentMenu("Scripts/GraphicsTools/AcrylicBackgroundRectProvider")]
    public class AcrylicBackgroundRectProvider : BaseMeshEffect
    {
        [Tooltip("List of materials to apply the _BlurBackgroundRect and _blurTexture to.")]
        [SerializeField]
        private Material[] materials = null;

        /// <summary>
        /// "List of materials to apply the _BlurBackgroundRect and _blurTexture to."
        /// </summary>
        public Material[] Materials
        {
            get => materials;
            set
            {
                materials = value;
                UpdateMaterialsProperties();
            }
        }

        [Tooltip("List of Graphic components to apply the _BlurBackgroundRect and _blurTexture to. Use this if your target has a material which changes or is instanced at runtime.")]
        [SerializeField]
        private Graphic[] graphics = null;

        /// <summary>
        /// "List of Graphic components to apply the _BlurBackgroundRect and _blurTexture to. Use this if your target has a material which changes or is instanced at runtime."
        /// </summary>
        public Graphic[] Graphics
        {
            get => graphics;
            set
            {
                graphics = value;
                UpdateMaterialsProperties();
            }
        }

        [Tooltip("The index of the layer in the AcrylicLayerManager to copy settings from.")]
        [SerializeField]
        private int layerIndex = 0;


        /// <summary>
        /// Access to the pre-blurred texture. 
        /// </summary>
        public Texture SourceTexture
        {
            get
            {
                Texture output = null;
                Image image = GetComponent<Image>();

                if (image != null)
                {
                    output = (image.sprite != null) ? image.sprite.texture : null;
                }
                else
                {
                    RawImage rawImage = GetComponent<RawImage>();

                    if (rawImage != null)
                    {
                        output = rawImage.texture;
                    }
                }

                return output;
            }
        }

        /// <summary>
        /// Access to the result of BlurImageTexture.
        /// </summary>
        public Texture BlurredTexture
        {
            get => source;
        }

        private Canvas canvas = null;
        private RenderTexture source = null;
        private RenderTexture destination = null;
        private int rectNameID = 0;
        private int textureID = 0;
        private bool hasBlurred = false;

        protected override void Start()
        {
            base.Start();

            // Avoid blurring twice if another script called BlurImageTexture before start.
            if (Application.isPlaying && hasBlurred == false)
            {
                BlurImageTexture();
            }
        }

        protected void Update()
        {
            UpdateMaterialsProperties();
        }

        protected override void OnDestroy()
        {
            base.OnDestroy();

            if (source != null)
            {
                source.Release();
                source = null;
            }

            if (destination != null)
            {
                destination.Release();
                destination = null;
            }
        }

        /// <summary>
        /// Update materials whenever the mesh is modified.
        /// </summary>
        public override void ModifyMesh(VertexHelper vh)
        {
            UpdateMaterialsProperties();
        }

        /// <summary>
        /// Iterates over all materials and graphics and applies the latest blur properties.
        /// </summary>
        public void UpdateMaterialsProperties()
        {
            if (canvas == null)
            {
                canvas = GetComponentInParent<Canvas>();
                rectNameID = Shader.PropertyToID("_BlurBackgroundRect");
                textureID = Shader.PropertyToID("_blurTexture");
            }

            if (canvas != null)
            {
                var rectTransform = transform as RectTransform;
                Vector3 minCorner = TransformToCanvas(rectTransform.rect.min);
                Vector3 maxCorner = TransformToCanvas(rectTransform.rect.max);
                Vector4 rect = new Vector4(minCorner.x, minCorner.y, maxCorner.x, maxCorner.y);

                if (materials != null)
                {
                    foreach (Material material in materials)
                    {
                        if (material != null)
                        {
                            material.SetVector(rectNameID, rect);
                            material.SetTexture(textureID, source);
                        }
                    }
                }

                if (graphics != null)
                {
                    foreach (Graphic graphic in graphics)
                    {
                        if (graphic != null && graphic.materialForRendering != null)
                        {
                            graphic.materialForRendering.SetVector(rectNameID, rect);
                            graphic.materialForRendering.SetTexture(textureID, source);
                        }
                    }
                }
            }
        }

        /// <summary>
        /// Blurs the texture used by the local Image or RawImage component based on settings in the AcrylicLayerManager.
        /// </summary>
        public bool BlurImageTexture()
        {
            // Find the texture to blur on local components.
            Texture textureToBlur = SourceTexture;

            if (textureToBlur == null)
            {
                Debug.LogWarningFormat("Failed to find a texture to blur on {0} Image or RawImage components.", gameObject.name);
                return false;
            }

            // Cache a local render target so that we aren't constantly creating new ones.
            int width = textureToBlur.width;
            int height = textureToBlur.height;

            if (source == null)
            {
                source = new RenderTexture(width, height, 0, RenderTextureFormat.ARGB32);
                source.name = gameObject.name;
            }
            else if (source.width != width || source.height != height)
            {
                source.Release();
                source.width = width;
                source.height = height;
                source.Create();
            }

            // Blit the texture into the source render texture.
            // Note, using Blit rather than CopyTexture because the source texture is often compressed.
            UnityEngine.Graphics.Blit(textureToBlur, source);

            // Acquire the AcrylicLayerManager to copy settings from.
            if (AcrylicLayerManager.Instance == null)
            {
                Debug.LogWarning("An AcrylicLayerManager does not exist. The image texture will not be blurred.");
                return false;
            }

            if (AcrylicLayerManager.Instance.Layers.Count < layerIndex)
            {
                Debug.LogWarningFormat("The AcrylicLayerManager does not contain enough layers. Request layer {0} but contains {1} layers. The image texture will not be blurred.", 
                                       layerIndex, 
                                       AcrylicLayerManager.Instance.Layers.Count);
                return false;
            }

            AcrylicLayer layer = new AcrylicLayer(null, 
                                                  AcrylicLayerManager.Instance.Layers[layerIndex], 
                                                  0, 
                                                  0, 
                                                  AcrylicLayerManager.Instance.FilterMethod == AcrylicLayerManager.BlurMethod.Dual, 
                                                  AcrylicLayerManager.Instance.KawaseFilterMaterial, 
                                                  AcrylicLayerManager.Instance.DualFilterMaterial);

            layer.ApplyBlur(ref source, ref destination);

            UpdateMaterialsProperties();

            hasBlurred = true;

            return true;
        }

        private Vector3 TransformToCanvas(Vector3 pos)
        {
            Vector3 posWorld = transform.TransformPoint(pos);
            return canvas.transform.InverseTransformPoint(posWorld);
        }
    }
}
#endif
