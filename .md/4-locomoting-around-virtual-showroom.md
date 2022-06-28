---
title: Locomotion and hand menus
---
### [Previous Section: Configure Your Virtual Showroom With Interactivity](3-configure-virtual-showroom.md)

# Locomotion and Hand Menus

Locomotion is a movement that transports the users to their desired location. To incorporate locomotion in your project, follow the steps outlined below.

1. In the **Hierarchy window**, select the **MRTK XR Rig**. Then, in the **Inspector window** click on the **Add component** button to add the following:

    - **Teleportation Provider**
    - **Snap Turn Provider**
    - **Locomotion System**
    - **Teleport Height**

    ![A screenshot adding components](img/components.png)

2. In the **Inspector window**, select **Teleportation Provider** script, then to the **System** field drag and drop the **MRTK XR Rig**.

    ![A screenshot adding MRTK XR Rig to Teleportation Provider](img/select-teleportation-provider.png)

3. Select the **Snap Turn Provider** script and to the System field drag and drop the **MRTK XR Rig**, as shown in the image.  

    ![A screenshot adding MRTK XR Rig to Snap Turn Provider](img/select-snap-turn-provider.png)

4. Now click on **Locomotion System**, drag and drop the **MRTK XR Rig** to the **XR Origin** field.

    ![A screenshot adding MRTK XR Rig to Locomotion System](img/select-locomotion-system.png)

5. Select the **floor** GameObject, and in the **Inspector Window** add the following components:

    - Add a **Box Collider** to detect the floor for teleportation.

        ![A screenshot adding box collider to the floor game object.](img/add-box-collider-teleport.png)

    - Add a **Teleportation Area** script

        ![A screenshot adding teleportation area to the floor game object.](img/add-teleportion-area.png)

When testing the app later, to teleport, point the ray from your hands or controllers to the desired location that you would like to teleport to and perform the select gesture or trigger.

## Hand Menu and UI Slate

**Hand Menus**: MRTK3 offers built-in functionality to create custom hand menus. Hand menus provide users with convenient access to menu items whenever the hand palm is visible.

**Slate**: The Slate prefab offers a thin window for displaying 2D content such as text and images. It also includes a grabbable title bar and the ability to close the window.

This section walks you through implementation of both the hand menu and the slate.

1. From your project window, navigate to **Assets**>**MR_RetailShowroom**> **Prefab** and add the **HandMenu** prefab to the hierarchy window. From the same folder, add the **Feature Slate** prefab as a child of the **HandMenu** gameobject.

    ![A screenshot adding handmenu to the project.](img/hand-menu.png)

2. You may customize the slate by adding a **title** to **Feature Slate**>**TitleBar**>**Title** and editing the text in the **TextMeshPro-Text component** . You can also edit the text content in the Feature list by editing the TextMeshPro-Text component in **Feature Slate**>**TitleBar**>**Feature list**. Feel free to copy the text below for the Feature list content.

    *Object Manipulator*

    *The Object Manipulator makes an object movable, scalable, and rotatable using one or two hands.*
  
    *Solvers*

    *Solvers are components that facilitate the means of calculating an object's position & orientation according to a predefined algorithm. Solvers offer a range of behaviors to attach objects to other objects or systems.*
  
    *Locomotion*
  
    *The locomotion system allows users to move and rotate in their environment using controller or hand inputs.*

    *Hand Menu*

    *MRTK3 offers built-in functionality to create custom hand menus. Hand menus provide users with convenient access to menu items whenever the hand palm is visible.*

    *UX Slate*
  
    *The Slate prefab offers a thin window for displaying 2D content such as text and images. It also includes a grabbable title bar and the ability to close the window.*

    *UX Buttons*

    *UX Buttons feature publicly exposed On Click function which drives the user in a specific direction allowing interactions to be performed without an actual scripting involved.*

    *Bounds Control*

    *To indicate that the hologram can be interacted with, a bounds control will display a box around it. Scaling, rotating, and translating the object is possible using the handles on the corners and edges of the box.*

    ![A screenshot adding title and contents](img/feature-slate.png)

3. Note that the HandMenu prefab contains a child object called **MenuContent**. This gameobject is visible in your scene as a blue button with an info icon. Double click the MenuContent gameobject to view this button in your scene window.

    ![A screenshot customizing hand menu](img/customize-hand-menu.png)

4. In the **Hierarchy window**, select **Menu Content** > **ButtonsRow1** > **Buttons** > **Info**, then in the inspector window, expand **Pressable Button.OnClick()** event as follows:

    - Click on the + icon to add the field and then, drag the **Feature Slate** from the hierarchy to the None (Object) field

    - From the **No Function** dropdown list, select **GameObject** > **SetActive ()** to set this function as the action to be run when the event is triggered

    - Ensure that the **checkbox** is selected.

        ![A screenshot configuring info button](img/button-info.png)

    >[!Note]
    > Step 5 and Step 6 may already be preconfigured in your project.

5. Next select **HandMenu** in the hierarchy, then in the **Inspector window**, configure the **Hand constraint** as follows:

    - Click the + icon in the **On First Hand Detected ()** to add an event

    - Assign the **MenuContent** object to the None (Object) field.

    - From the **No Function** dropdown list, select **GameObject** > **SetActive ()** to set this function as the action to be run when the event is triggered

    - Verify that the argument checkbox is **checked**.

        ![A screenshot configuring the On First Hand Detected ()](img/on-first-hand-detected.png)

6. Configure the **On Last Hand Lost ()** as follows:

    - Click the + icon twice in the **On Last Hand Lost ()** to add two events.

    - Assign the **MenuContent**, **FeatureSlate**,object to the **None (Object)** fields respectively as shown in the figure.

    - From the **No Function** dropdown list, select **GameObject** > **SetActive ()** for all the events to set this function as the action to be run when the event is triggered

    - Verify that the argument checkbox is **unchecked**.

        ![A screenshot configuring the On last Hand lost ()](img/on-last-hand-lost.png)
---
## [Next Section: Build and Deploy to HoloLens or Meta Quest](5-build-deploy.md)
