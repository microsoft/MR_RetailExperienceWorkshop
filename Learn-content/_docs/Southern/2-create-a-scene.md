---
title: Create a Scene
---

# Create a Scene

Whether you are creating a whole world or just placing one model into a web page you need a scene to contain the world or model, a camera to view it, a light to illuminate it, and at least one viewable object as a model.

Use the code snippets below to create the scene for the landmark. Before you begin, delete the code that's currently in the sandbox.

## Basic Scene Syntax

The code below reflects the basic syntax needed to create a Babylon.js scene. All code added from this step forward will be added before `return scene;`.

```javascript
var createScene = function () {
    /**** Create a Basic Babylon.js Scene *****/
    var scene = new BABYLON.Scene(engine);

    return scene;
};
```

## Camera

The code below creates an Arc Rotate Camera for the scene. Add this snippet after the code for the **Basic Scene Syntax**.

```javascript
    /**** Camera *****/
    var camera = new BABYLON.ArcRotateCamera("camera", -Math.PI / 2, Math.PI / 2.5, 10, new BABYLON.Vector3(0, 0, 0));
    scene.activeCamera = camera;
    scene.activeCamera.attachControl(canvas, true);
    camera.lowerRadiusLimit = 2;
    camera.upperRadiusLimit = 30;
    camera.wheelDeltaPercentage = 0.01;
```

## Light

The code below creates a hemispheric light for the scene. Add this snippet after the code for the **Camera**.

```javascript
    /***** Light *****/
    var light = new BABYLON.HemisphericLight("light", new BABYLON.Vector3(0, 1, -1), scene);
```

## Ground

The code below creates a ground for the scene. Add this snippet after the code for the **Light**.

```javascript
    /***** Ground *****/
    var ground = BABYLON.MeshBuilder.CreateGround("ground", {width: 20, height: 12}, scene);
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

    /***** Ground *****/
    var ground = BABYLON.MeshBuilder.CreateGround("ground", {width: 20, height: 12}, scene);

    return scene;
};
```