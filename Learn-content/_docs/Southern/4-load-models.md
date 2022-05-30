---
title: Load Models
---

# Load Models

There are a large variety of meshes that you can create. Babylon.js provides 2D shapes such as horizontal planes (ground), vertical planes and regular polygons along with 3D shapes such as cuboids, spheres, ellipsoids and toruses. However, sometimes you may want to load your own assets into the playground. You could do so by loading them from one of the following:

- [GitHub.com](https://www.github.com)
- [Gitlab.com](https://www.gitlab.com)
- [Dropbox.com](https://www.dropbox.com)
- [Imgur.com](https://www.imgur.com)

Accessing the assets varies by hosting site. For this workshop, you'll load assets from Dropbox.

Once the assets are loaded, use the `position` property to place the asset at your desired location. `Position` is a vector object with properties x, y, and z.

Use the code snippets below to load external assets for the landmark scene.

## Southern Sign

The code below loads the Southern sign. Add this snippet after the code for the **Ground**.

```javascript
    /***** Southern Sign *****/      
    const southernName = BABYLON.SceneLoader.ImportMesh("", "https://dl.dropbox.com/s/epdlymyvyq0rwn3/", "southern.glb", scene, function (newMeshes) {
        var southernName = newMeshes[0];
        southernName.scaling.scaleInPlace(1);
        southernName.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(180));
        southernName.position.y = .01;
        southernName.position.z = -2;

    });
```

## Trees

The code below loads trees. Add this snippet after the code for the **Southern Sign**.

```javascript
    /***** Trees *****/    
    const tree = BABYLON.SceneLoader.ImportMesh("", "https://dl.dropbox.com/s/l0ir989f1i82311/", "tree.glb", scene, function (newMeshes) {
        var tree = newMeshes[0];
        tree.scaling.scaleInPlace(10);
        tree.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(180));
        tree.position.y = .05;
        tree.position.z = 1.5;
    });
```

The code below creates clones for the tree. Add this snippet within the snippet for the **Tree** (before the final `});`.

```javascript
        const tree2 = tree.clone("tree2");
        tree2.position.x = -3; 
        tree2.position.z = 1.5;

        const tree3 = tree.clone("tree3");
        tree3.position.x = -5;
        tree3.position.z = 1.5; 

        const tree4 = tree.clone("tree4");
        tree4.position.x = 3; 
        tree4.position.z = 1.5;

        const tree5 = tree.clone("tree5");
        tree5.position.x = 5; 
        tree5.position.z = 1.5;
```

## Flags

The code below loads the American flag. Add this snippet after the code for the **Trees**.

```javascript
    /***** American Flag *****/    
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/h2ga135e6kbomqk/", "american-flag.glb", scene).then((result) => {
        var americanFlag = result.meshes[0];
        americanFlag.scaling = new BABYLON.Vector3(0.025, 0.025, 0.025);
        americanFlag.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(-45))
        americanFlag.position = new BABYLON.Vector3(0, 0, -.08);

        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
    });
```

The code below loads the SU flag. Add this snippet after the code for the **American flag**.

```javascript
    /***** SU Flag *****/   
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/yf48ii0opblp601/", "southern-flag-blue.glb", scene).then((result) => {
        var southernFlag = result.meshes[0];
        southernFlag.scaling = new BABYLON.Vector3(1, 1, 1);
        southernFlag.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(-45))
        southernFlag.position = new BABYLON.Vector3(-1, 0, -.08);

                
        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
    });
```

The code below loads the Southern University flag. Add this snippet after the code for the **SU flag**.

```javascript
    /***** Southern University Flag *****/   
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/lnkuus9x53cde72/", "southern-flag-white.glb", scene).then((result) => {
        var southernFlagWhite = result.meshes[0];
        southernFlagWhite.scaling = new BABYLON.Vector3(1.08, 1.08, 1.08);
        southernFlagWhite.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(-45))
        southernFlagWhite.position = new BABYLON.Vector3(1, 0, -.08);

                
        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
    });
```

## Jaguar

The code below loads the jaguar. Add this snippet after the code for the **Southern University Flag**.

    /***** Jaguar *****/   
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/scv2zprv0onod5w/", "jaguar.glb", scene).then((result) => {
        var jaguar = result.meshes[0];
        jaguar.scaling = new BABYLON.Vector3(1.08, 1.08, 1.08);
        jaguar.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(45))
        jaguar.position = new BABYLON.Vector3(2, 0, -.08);

                
        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
    });

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

    /***** Southern Sign *****/      
    const southernName = BABYLON.SceneLoader.ImportMesh("", "https://dl.dropbox.com/s/epdlymyvyq0rwn3/", "southern.glb", scene, function (newMeshes) {
        var southernName = newMeshes[0];
        southernName.scaling.scaleInPlace(1);
        southernName.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(180));
        southernName.position.y = .01;
        southernName.position.z = -2;

    });

    /***** Trees *****/    
    const tree = BABYLON.SceneLoader.ImportMesh("", "https://dl.dropbox.com/s/l0ir989f1i82311/", "tree.glb", scene, function (newMeshes) {
        var tree = newMeshes[0];
        tree.scaling.scaleInPlace(10);
        tree.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(180));
        tree.position.y = .05;
        tree.position.z = 1.5;

        const tree2 = tree.clone("tree2");
        tree2.position.x = -3; 
        tree2.position.z = 1.5;

        const tree3 = tree.clone("tree3");
        tree3.position.x = -5;
        tree3.position.z = 1.5; 

        const tree4 = tree.clone("tree4");
        tree4.position.x = 3; 
        tree4.position.z = 1.5;

        const tree5 = tree.clone("tree5");
        tree5.position.x = 5; 
        tree5.position.z = 1.5;
    });

    /***** American Flag *****/    
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/h2ga135e6kbomqk/", "american-flag.glb", scene).then((result) => {
        var americanFlag = result.meshes[0];
        americanFlag.scaling = new BABYLON.Vector3(0.025, 0.025, 0.025);
        americanFlag.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(-45))
        americanFlag.position = new BABYLON.Vector3(0, 0, -.08);

        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
    });

    /***** SU Flag *****/   
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/yf48ii0opblp601/", "southern-flag-blue.glb", scene).then((result) => {
        var southernFlag = result.meshes[0];
        southernFlag.scaling = new BABYLON.Vector3(1, 1, 1);
        southernFlag.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(-45))
        southernFlag.position = new BABYLON.Vector3(-1, 0, -.08);

                
        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
    });

    /***** Southern University Flag *****/   
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/lnkuus9x53cde72/", "southern-flag-white.glb", scene).then((result) => {
        var southernFlagWhite = result.meshes[0];
        southernFlagWhite.scaling = new BABYLON.Vector3(1.08, 1.08, 1.08);
        southernFlagWhite.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(-45))
        southernFlagWhite.position = new BABYLON.Vector3(1, 0, -.08);

                
        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
    });

    /***** Jaguar *****/   
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/scv2zprv0onod5w/", "jaguar.glb", scene).then((result) => {
        var jaguar = result.meshes[0];
        jaguar.scaling = new BABYLON.Vector3(1.08, 1.08, 1.08);
        jaguar.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(45))
        jaguar.position = new BABYLON.Vector3(2, 0, -.08);

                
        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
    });

    return scene;
};
```