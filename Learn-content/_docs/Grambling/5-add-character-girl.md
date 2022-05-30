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

The code below enables keyboard input. Add this snippet after the code for the **Shrubs**.

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

The code below imports the 3D model for the character. Add this snippet after the code for the **Keyboard Events**.

```javascript
    /**** Animated Character *****/
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/ycwztvffb1u0lg1/", "elizabeth.glb", scene).then((result) => {
        var character = result.meshes[0];

        // Position the model
        character.position.z = -2;
        character.position.y = .1;

        //Lock camera on the character 
        camera.target = character;

        //Character variables 
        var characterSpeed = 0.008;
        var characterSpeedBackwards = 0.008;
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
        //Rendering loop (executed for every frame)
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

    // An additional light is used to illuminate the Grambling State University sign
    var light2 = new BABYLON.DirectionalLight("DirectionalLight", new BABYLON.Vector3(0, -5, 40), scene);

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

    /***** Sidewalk *****/
    const sidewalk = BABYLON.MeshBuilder.CreateBox("sidewalk", {height: .02, width: 6.5, depth: 6.5});
    sidewalk.position.z = -2;
    sidewalk.position.y = .05;
    sidewalkMat = new BABYLON.StandardMaterial("groundMat");
    sidewalkMat.diffuseColor = new BABYLON.Color3(0.95, 0.85, 0.76, 0.81);
    sidewalk.material = sidewalkMat;

    /***** Mulch *****/
    const mulch = BABYLON.MeshBuilder.CreateBox("mulch", {height: .02, width: 4, depth: 2});
    mulch.position.z = -3;
    mulch.position.y = .08;
    mulchMat = new BABYLON.StandardMaterial("mulchMat", scene);
    mulchMat.diffuseTexture = new BABYLON.Texture("textures/rock.png", scene);
    mulchMat.diffuseTexture.uScale = 5.0; //Repeat 5 times on the Vertical Axes
    mulchMat.diffuseTexture.vScale = 5.0; //Repeat 5 times on the Horizontal Axes
    mulchMat.backFaceCulling = false; //Always show the front and the back of an element
    mulch.material = mulchMat;

    /***** Grambling State University Structure *****/
    const grambling = BABYLON.SceneLoader.ImportMesh("", "https://dl.dropbox.com/s/kxs2k36f8im6yvf/", "grambling.glb", scene, function (newMeshes) {
        var grambling = newMeshes[0];
        grambling.scaling.scaleInPlace(.35);
        grambling.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(180));
        grambling.position.y = .04;
        grambling.position.z = .5;

    });

    /***** Tiger *****/
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/uie4mrvlmfqerdb/", "tiger.glb", scene).then((result) => {
        var tiger = result.meshes[0];
        tiger.scaling = new BABYLON.Vector3(0.8, 0.8, 0.8);
        tiger.position = new BABYLON.Vector3(0, .1, -3);

        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
    });

    /***** American Flag *****/
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/h2ga135e6kbomqk/", "american-flag.glb", scene).then((result) => {
        var americanFlag = result.meshes[0];
        americanFlag.scaling = new BABYLON.Vector3(0.025, 0.025, 0.025);
        americanFlag.rotate(BABYLON.Axis.Y, BABYLON.Tools.ToRadians(-45))
        americanFlag.position = new BABYLON.Vector3(6, 0, -1);
                
        scene.beginAnimation(result.skeletons[0], 0, 100, true, 1.0);
     });

    /***** Shrubs *****/
    const shrub = BABYLON.SceneLoader.ImportMesh("", "https://dl.dropbox.com/s/p23az0pcb5wxqi7/", "shrub.glb", scene, function (newMeshes) {
        var shrub = newMeshes[0];
        shrub.position.x = -4;
        shrub.position.z = -1.5;

        const shrub2 = shrub.clone("shrub2");
        shrub2.position.x = -5; 
        shrub2.position.z = -1.5;

        const shrub3 = shrub.clone("shrub3");
        shrub3.position.x = -4;
        shrub3.position.z = -2.5; 

        const shrub4 = shrub.clone("shrub4");
        shrub4.position.x = -5; 
        shrub4.position.z = -2.5;

        const shrub5 = shrub.clone("shrub5");
        shrub5.position.x = -4; 
        shrub5.position.z = -3.5;

        const shrub6 = shrub.clone("shrub6");
        shrub6.position.x = -5; 
        shrub6.position.z = -3.5;

        const shrub7 = shrub.clone("shrub7");
        shrub7.position.x = 5; 
        shrub7.position.z = -1.5;

        const shrub8 = shrub.clone("shrub8");
        shrub8.position.x = 4;
        shrub8.position.z = -1.5; 

        const shrub9 = shrub.clone("shrub9");
        shrub9.position.x = 5; 
        shrub9.position.z = -2.5;

        const shrub10 = shrub.clone("shrub10");
        shrub10.position.x = 4; 
        shrub10.position.z = -2.5;

        const shrub11 = shrub.clone("shrub11");
        shrub11.position.x = 5; 
        shrub11.position.z = -3.5;

        const shrub12 = shrub.clone("shrub12");
        shrub12.position.x = 4; 
        shrub12.position.z = -3.5;

        const shrub13 = shrub.clone("shrub13");
        shrub13.position.x = -1; 
        shrub13.position.z = -2;

        const shrub14 = shrub.clone("shrub14");
        shrub14.position.x = -1.8; 
        shrub14.position.z = -2;

        const shrub15 = shrub.clone("shrub15");
        shrub15.position.x = 1; 
        shrub15.position.z = -2;

        const shrub16 = shrub.clone("shrub16");
        shrub16.position.x = 1.8; 
        shrub16.position.z = -2;
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
    BABYLON.SceneLoader.ImportMeshAsync("", "https://dl.dropbox.com/s/ycwztvffb1u0lg1/", "elizabeth.glb", scene).then((result) => {
        var character = result.meshes[0];

        // Position the model
        character.position.z = -2;
        character.position.y = .1;

        //Lock camera on the character 
        camera.target = character;

        //Character variables 
        var characterSpeed = 0.008;
        var characterSpeedBackwards = 0.008;
        var characterRotationSpeed = 0.02;

        var animating = true;

        const walkAnim = scene.getAnimationGroupByName("Walking");
        const walkBackAnim = scene.getAnimationGroupByName("Backwards");
        const idleAnim = scene.getAnimationGroupByName("Idle");
        const danceAnim = scene.getAnimationGroupByName("Dance");

        //Rendering loop (executed for every frame)
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