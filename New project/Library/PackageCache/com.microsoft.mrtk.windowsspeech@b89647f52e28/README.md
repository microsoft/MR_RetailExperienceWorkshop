# Mixed Reality Toolkit Speech Package

Author: Max Wang (wangmax)

## How to use

Note: this guide provides steps to enable speech subsystem in a new MRTK project (with other basic non-speech related setup in place). If you are using our sample project you may notice some steps have been performed for you.

### 1. Enable the speech subsystem

Go to Project Settings -> Mixed Reality Toolkit -> Available MRTK Subsystems and enable the speech subsystem you would like to use. At this time MRTK only ships the MRTK Azure PhraseRecognition Subsystem.

### 2. Configure the profile correctly (for certain subsystems)

For certain subsystems (e.g. the MRTK Azure PhraseRecognition Subsystem) a profile is required in order for it to perform normally. First check if the Configuration slot is empty. If so create a new profile by Assets -> Create -> MRTK -> Subsystems -> (as an example) MRTK Azure PhraseRecognition Subsystem Config and then drag the created config onto the slot. After making sure the config slot is populated, change the settings for your specific project. For the MRTK Azure PhraseRecognition Subsystem, you need to input a subscription key along with a service region for the Azure service. Visit https://docs.microsoft.com/azure/cognitive-services/speech-service/overview#create-the-azure-resource for more information.

### 3. Ensure the MRTK Speech GameObject is active

Ensure the relevant script(s) is active by confirming MRTK XR Rig -> MRTK Speech is active.

### 4. Ensure the proper capabilities are set in Player Settings

(Using UWP Platform as an example) Go to Project Settings -> Player -> Publishing Settings -> Capabilities and ensure the InternetClient, InternetClientServer and Microphone Capabilities are set.

### 5. Running the scene on device/in editor

The project should be ready to run on device or in editor. Note the interactables (e.g. buttons) need to be set up to accept voice command in order for the speech subsystem to work with them. Please see the inspector of interactables and SpeechInteractor (MRTK XR Rig -> MRTK Speech) for more adjustable settings.
