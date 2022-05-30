---
title: Add Character (Girl)
---

# Add Character (Girl)

For this workshop, we'll use an animated character from <a href="https://www.mixamo.com/">Mixamo</a>. You can leverage Mixamo's pre-made characters and animations for your Babylon.js scenes. The character we'll use has the following animations:

- Idle
- Walking
- Backwards
- Dance

Once an animated character is loaded, the animations are mapped to keyboard inputs so that you can control the character using your **WASD** and **B** keys.

Use the code snippets below to add the **Elizabeth** animated character to the landmark scene.

## Keyboard Events

The code below enables keyboard input. Add this snippet after the code for the **Southern University flag**.

```javascript
    /**** Keyboard Events *****/
    var inputMap = {};
    scene.actionManager = new BABYLON.ActionManager(scene);
    scene.actionManager.registerAction(new BABYLON.ExecuteCodeAction(BABYLON.ActionManager.OnKeyDownTrigger, function (evt) {
        inputMap[evt.sourceEvent.key] = evt.sourceEvent.type == "keydown";
    }));
    scene.actionManager.registerAction(new BABYLON.ExecuteCodeAction(BABYLON.ActionManager.OnKeyUpTrigger, function (evt) {
        inputMap[evt.sourceEvent.key] = evt.sourceEvent.type == "keydown";
    }));
```

## Import Character

The code below imports the 3D model for the **Elizabeth** character. Add this snippet after the code for the **Keyboard Events**.

```javascript
    /**** Animated Character *****/
    BABYLON.SceneLoader.ImportMesh("", "https://dl.dropbox.com/s/ycwztvffb1u0lg1/", "elizabeth.glb", scene, function (newMeshes, particleSystems, skeletons, animationGroups) {
        var character = newMeshes[0];

        // Position the model
        character.position.z = -4;

        //Lock camera on the character 
        camera.target = character;

        //Character variables 
        var characterSpeed = 0.05;
        var characterSpeedBackwards = 0.01;
        var characterRotationSpeed = 0.02;

        var animating = true;

        const walkAnim = scene.getAnimationGroupByName("Walking");
        const walkBackAnim = scene.getAnimationGroupByName("Backwards");
        const idleAnim = scene.getAnimationGroupByName("Idle");
        const danceAnim = scene.getAnimationGroupByName("Dance");
    })
```

## Animations

The code below adds the animations for the character. Add this snippet before the final `})`.

```javascript
        //Rendering loop (executed for everyframe)
        scene.onBeforeRenderObservable.add(() => {
            var keydown = false;
            //Manage the movements of the character (e.g. position, direction)
            if (inputMap["w"]) {
                character.moveWithCollisions(character.forward.scaleInPlace(characterSpeed));
                keydown = true;
            }
            if (inputMap["s"]) {
                character.moveWithCollisions(character.forward.scaleInPlace(-characterSpeedBackwards));
                keydown = true;
            }
            if (inputMap["a"]) {
                character.rotate(BABYLON.Vector3.Up(), -characterRotationSpeed);
                keydown = true;
            }
            if (inputMap["d"]) {
                character.rotate(BABYLON.Vector3.Up(), characterRotationSpeed);
                keydown = true;
            }
            if (inputMap["b"]) {
                keydown = true;
            }

            //Manage animations to be played  
            if (keydown) {
                if (!animating) {
                    animating = true;
                    if (inputMap["s"]) {
                        //Walk backwards
                        walkBackAnim.start(true, 1.0, walkBackAnim.from, walkBackAnim.to, false);
                    }
                    else if
                        (inputMap["b"]) {
                        //Dance
                        danceAnim.start(true, 1.0, danceAnim.from, danceAnim.to, false);
                    }
                    else {
                        //Walk
                        walkAnim.start(true, 1.0, walkAnim.from, walkAnim.to, false);
                    }
                }
            }
            else {

                if (animating) {
                    //Default animation is idle when no key is down     
                    idleAnim.start(true, 1.0, idleAnim.from, idleAnim.to, false);

                    //Stop all animations besides Idle Anim when no key is down
                    danceAnim.stop();
                    walkAnim.stop();
                    walkBackAnim.stop();

                    //Ensure animation are played only once per rendering loop
                    animating = false;
                }
            }
        });
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

    /**** Keyboard Events *****/
    var inputMap = {};
    scene.actionManager = new BABYLON.ActionManager(scene);
    scene.actionManager.registerAction(new BABYLON.ExecuteCodeAction(BABYLON.ActionManager.OnKeyDownTrigger, function (evt) {
        inputMap[evt.sourceEvent.key] = evt.sourceEvent.type == "keydown";
    }));
    scene.actionManager.registerAction(new BABYLON.ExecuteCodeAction(BABYLON.ActionManager.OnKeyUpTrigger, function (evt) {
        inputMap[evt.sourceEvent.key] = evt.sourceEvent.type == "keydown";
    }));

    /**** Animated Character *****/
    BABYLON.SceneLoader.ImportMesh("", "https://dl.dropbox.com/s/ycwztvffb1u0lg1/", "elizabeth.glb", scene, function (newMeshes, particleSystems, skeletons, animationGroups) {
        var character = newMeshes[0];

        // Position the model
        character.position.z = -4;

        //Lock camera on the character 
        camera.target = character;

        //Character variables 
        var characterSpeed = 0.05;
        var characterSpeedBackwards = 0.01;
        var characterRotationSpeed = 0.02;

        var animating = true;

        const walkAnim = scene.getAnimationGroupByName("Walking");
        const walkBackAnim = scene.getAnimationGroupByName("Backwards");
        const idleAnim = scene.getAnimationGroupByName("Idle");
        const danceAnim = scene.getAnimationGroupByName("Dance");

        //Rendering loop (executed for everyframe)
        scene.onBeforeRenderObservable.add(() => {
            var keydown = false;
            //Manage the movements of the character (e.g. position, direction)
            if (inputMap["w"]) {
                character.moveWithCollisions(character.forward.scaleInPlace(characterSpeed));
                keydown = true;
            }
            if (inputMap["s"]) {
                character.moveWithCollisions(character.forward.scaleInPlace(-characterSpeedBackwards));
                keydown = true;
            }
            if (inputMap["a"]) {
                character.rotate(BABYLON.Vector3.Up(), -characterRotationSpeed);
                keydown = true;
            }
            if (inputMap["d"]) {
                character.rotate(BABYLON.Vector3.Up(), characterRotationSpeed);
                keydown = true;
            }
            if (inputMap["b"]) {
                keydown = true;
            }

            //Manage animations to be played  
            if (keydown) {
                if (!animating) {
                    animating = true;
                    if (inputMap["s"]) {
                        //Walk backwards
                        walkBackAnim.start(true, 1.0, walkBackAnim.from, walkBackAnim.to, false);
                    }
                    else if
                        (inputMap["b"]) {
                        //Dance
                        danceAnim.start(true, 1.0, danceAnim.from, danceAnim.to, false);
                    }
                    else {
                        //Walk
                        walkAnim.start(true, 1.0, walkAnim.from, walkAnim.to, false);
                    }
                }
            }
            else {

                if (animating) {
                    //Default animation is idle when no key is down     
                    idleAnim.start(true, 1.0, idleAnim.from, idleAnim.to, false);

                    //Stop all animations besides Idle Anim when no key is down
                    danceAnim.stop();
                    walkAnim.stop();
                    walkBackAnim.stop();

                    //Ensure animation are played only once per rendering loop
                    animating = false;
                }
            }
        });
    })

    return scene;
};
```