---
title: Add Materials and Textures
---

# Add Materials and Textures

Materials give your meshes color and texture. One material in Babylon.js can be used to cover as many meshes as you wish. They can be displayed as a wire-frame, scaled and offset across a mesh, have degrees of transparency and be blended. You can apply multiple materials on one mesh and use a dynamic texture as a material that you can draw and write on in real time.

Use the code snippets below to create a material and texture for the sky and ground within the scene.

## Sky

The code below creates a skybox for the scene. Add this snippet after the code for the **Light**.

```javascript
    /***** Sky *****/
    var skybox = BABYLON.Mesh.CreateBox("skyBox", 1000.0, scene);

```

The code below creates a sky material. Add this snippet after the code for the **Sky**.

```javascript
    var skyboxMaterial = new BABYLON.SkyMaterial("skyMaterial", scene);
    skyboxMaterial.backFaceCulling = false;
    skybox.material = skyboxMaterial;
    skyboxMaterial.azimuth = 0.25;
    skyboxMaterial.useSunPosition = true; // Do not set sun position from azimuth and inclination
    skyboxMaterial.sunPosition = new BABYLON.Vector3(0, 100, 0);
    skyboxMaterial.inclination = 0.5;
    skyboxMaterial.luminance = 1;
```

## Ground Material & Texture

The code below creates a material and texture for the ground. Add this snippet after the code for the **Ground**.

```javascript
    groundMat = new BABYLON.StandardMaterial("groundMat", scene);
    groundMat.diffuseTexture = new BABYLON.Texture("textures/grass.jpg", scene);
    groundMat.diffuseTexture.uScale = 5.0; //Repeat 5 times on the Vertical Axes
    groundMat.diffuseTexture.vScale = 5.0; //Repeat 5 times on the Horizontal Axes
    groundMat.backFaceCulling = false; //Always show the front and the back of an element
    ground.material = groundMat;
```

## Complete Code

Provided below is the complete code for this step of the workshop.

```javascript
var createScene = function () {
    /**** Create a Basic Babylon.js Scene *****/
    var scene = new BABYLON.Scene(engine);

    /**** Camera *****/
    var camera = new BABYLON.ArcRotateCamera("camera", -Math.PI / 2, Math.PI / 2.5, 10, new BABYLON.Vector3(0, 0, 0));
    scene.activeCamera = camera;
    scene.activeCamera.attachControl(canvas, true);
    camera.lowerRadiusLimit = 2;
    camera.upperRadiusLimit = 30;
    camera.wheelDeltaPercentage = 0.01;

    /***** Light *****/
    var light = new BABYLON.HemisphericLight("light", new BABYLON.Vector3(0, 1, -1), scene);

    /***** Sky *****/
    var skybox = BABYLON.Mesh.CreateBox("skyBox", 1000.0, scene);

    var skyboxMaterial = new BABYLON.SkyMaterial("skyMaterial", scene);
    skyboxMaterial.backFaceCulling = false;
    skybox.material = skyboxMaterial;
    skyboxMaterial.azimuth = 0.25;
    skyboxMaterial.useSunPosition = true; // Do not set sun position from azimuth and inclination
    skyboxMaterial.sunPosition = new BABYLON.Vector3(0, 100, 0);
    skyboxMaterial.inclination = 0.5;
    skyboxMaterial.luminance = 1;

    /***** Ground *****/
    var ground = BABYLON.MeshBuilder.CreateGround("ground", {width: 20, height: 12}, scene);

    groundMat = new BABYLON.StandardMaterial("groundMat", scene);
    groundMat.diffuseTexture = new BABYLON.Texture("textures/grass.jpg", scene);
    groundMat.diffuseTexture.uScale = 5.0; //Repeat 5 times on the Vertical Axes
    groundMat.diffuseTexture.vScale = 5.0; //Repeat 5 times on the Horizontal Axes
    groundMat.backFaceCulling = false; //Always show the front and the back of an element
    ground.material = groundMat;

    return scene;
};
```