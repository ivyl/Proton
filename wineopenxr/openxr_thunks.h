/* Automatically generated from OpenXR xr.xml; DO NOT EDIT!
 *
 * This file is generated from OpenXR xr.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright (c) 2017-2021, The Khronos Group Inc.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * ------------------------------------------------------------------------
 *
 * This file, xr.xml, is the OpenXR API Registry. It is a critically important
 * and normative part of the OpenXR Specification, including a canonical
 * machine-readable definition of the API, parameter and member validation
 * language incorporated into the Specification and reference pages, and other
 * material which is registered by Khronos, such as tags used by extension and
 * layer authors. The only authoritative version of xr.xml is the one
 * maintained in the default branch of the Khronos OpenXR GitHub project.
 *
 */

#ifndef __WINE_OPENXR_THUNKS_H
#define __WINE_OPENXR_THUNKS_H

#define WINE_XR_VERSION XR_API_VERSION_1_0

/* Functions for which we have custom implementations outside of the thunks. */
XrResult WINAPI wine_xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance, XrTime time, LARGE_INTEGER *performanceCounter) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance, const LARGE_INTEGER *performanceCounter, XrTime *time) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrCreateHandTrackerEXT(XrSession session, const XrHandTrackerCreateInfoEXT *createInfo, XrHandTrackerEXT *handTracker) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrCreateInstance(const XrInstanceCreateInfo *createInfo, XrInstance *instance);
XrResult WINAPI wine_xrCreateSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneCreateInfoMSFT *createInfo, XrSceneMSFT *scene) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrCreateSceneObserverMSFT(XrSession session, const XrSceneObserverCreateInfoMSFT *createInfo, XrSceneObserverMSFT *sceneObserver) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrCreateSession(XrInstance instance, const XrSessionCreateInfo *createInfo, XrSession *session);
XrResult WINAPI wine_xrCreateSpatialAnchorMSFT(XrSession session, const XrSpatialAnchorCreateInfoMSFT *createInfo, XrSpatialAnchorMSFT *anchor) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrCreateSwapchain(XrSession session, const XrSwapchainCreateInfo *createInfo, XrSwapchain *swapchain);
XrResult WINAPI wine_xrCreateVulkanDeviceKHR(XrInstance instance, const XrVulkanDeviceCreateInfoKHR *createInfo, VkDevice *vulkanDevice, VkResult *vulkanResult) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrCreateVulkanInstanceKHR(XrInstance instance, const XrVulkanInstanceCreateInfoKHR *createInfo, VkInstance *vulkanInstance, VkResult *vulkanResult) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrDestroyHandTrackerEXT(XrHandTrackerEXT handTracker) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrDestroyInstance(XrInstance instance);
XrResult WINAPI wine_xrDestroySceneMSFT(XrSceneMSFT scene) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrDestroySceneObserverMSFT(XrSceneObserverMSFT sceneObserver) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrDestroySession(XrSession session);
XrResult WINAPI wine_xrDestroySpatialAnchorMSFT(XrSpatialAnchorMSFT anchor) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrDestroySwapchain(XrSwapchain swapchain);
XrResult WINAPI wine_xrEndFrame(XrSession session, const XrFrameEndInfo *frameEndInfo);
XrResult WINAPI wine_xrEnumerateInstanceExtensionProperties(const char *layerName, uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrExtensionProperties *properties);
XrResult WINAPI wine_xrEnumerateSwapchainFormats(XrSession session, uint32_t formatCapacityInput, uint32_t *formatCountOutput, int64_t *formats);
XrResult WINAPI wine_xrEnumerateSwapchainImages(XrSwapchain swapchain, uint32_t imageCapacityInput, uint32_t *imageCountOutput, XrSwapchainImageBaseHeader *images);
XrResult WINAPI wine_xrGetD3D11GraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D11KHR *graphicsRequirements) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrGetD3D12GraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D12KHR *graphicsRequirements) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrGetInstanceProcAddr(XrInstance instance, const char *name, PFN_xrVoidFunction *function);
XrResult WINAPI wine_xrGetSystem(XrInstance instance, const XrSystemGetInfo *getInfo, XrSystemId *systemId);
XrResult WINAPI wine_xrGetVulkanDeviceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrGetVulkanGraphicsDevice2KHR(XrInstance instance, const XrVulkanGraphicsDeviceGetInfoKHR *getInfo, VkPhysicalDevice *vulkanPhysicalDevice) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrGetVulkanGraphicsDeviceKHR(XrInstance instance, XrSystemId systemId, VkInstance vkInstance, VkPhysicalDevice *vkPhysicalDevice) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrGetVulkanInstanceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer) DECLSPEC_HIDDEN;
XrResult WINAPI wine_xrPollEvent(XrInstance instance, XrEventDataBuffer *eventData);

/* Private thunks */

typedef struct XrSceneMeshBuffersGetInfoMSFT_host
{
    XrStructureType type;
    const void *next;
    uint64_t meshBufferId;
} XrSceneMeshBuffersGetInfoMSFT_host;



XrResult convert_XrInstanceCreateInfo_struct_chain(const void *next, XrInstanceCreateInfo *out_struct) DECLSPEC_HIDDEN;
void free_XrInstanceCreateInfo_struct_chain(XrInstanceCreateInfo *s) DECLSPEC_HIDDEN;

/* For use by xrInstance and children */
struct openxr_instance_funcs
{
    XrResult (*p_xrAcquireSwapchainImage)(XrSwapchain, const XrSwapchainImageAcquireInfo *, uint32_t *);
    XrResult (*p_xrApplyHapticFeedback)(XrSession, const XrHapticActionInfo *, const XrHapticBaseHeader *);
    XrResult (*p_xrAttachSessionActionSets)(XrSession, const XrSessionActionSetsAttachInfo *);
    XrResult (*p_xrBeginFrame)(XrSession, const XrFrameBeginInfo *);
    XrResult (*p_xrBeginSession)(XrSession, const XrSessionBeginInfo *);
    XrResult (*p_xrComputeNewSceneMSFT)(XrSceneObserverMSFT, const XrNewSceneComputeInfoMSFT *);
    XrResult (*p_xrCreateAction)(XrActionSet, const XrActionCreateInfo *, XrAction *);
    XrResult (*p_xrCreateActionSet)(XrInstance, const XrActionSetCreateInfo *, XrActionSet *);
    XrResult (*p_xrCreateActionSpace)(XrSession, const XrActionSpaceCreateInfo *, XrSpace *);
    XrResult (*p_xrCreateHandMeshSpaceMSFT)(XrHandTrackerEXT, const XrHandMeshSpaceCreateInfoMSFT *, XrSpace *);
    XrResult (*p_xrCreateHandTrackerEXT)(XrSession, const XrHandTrackerCreateInfoEXT *, XrHandTrackerEXT *);
    XrResult (*p_xrCreateReferenceSpace)(XrSession, const XrReferenceSpaceCreateInfo *, XrSpace *);
    XrResult (*p_xrCreateSceneMSFT)(XrSceneObserverMSFT, const XrSceneCreateInfoMSFT *, XrSceneMSFT *);
    XrResult (*p_xrCreateSceneObserverMSFT)(XrSession, const XrSceneObserverCreateInfoMSFT *, XrSceneObserverMSFT *);
    XrResult (*p_xrCreateSession)(XrInstance, const XrSessionCreateInfo *, XrSession *);
    XrResult (*p_xrCreateSpatialAnchorMSFT)(XrSession, const XrSpatialAnchorCreateInfoMSFT *, XrSpatialAnchorMSFT *);
    XrResult (*p_xrCreateSpatialAnchorSpaceMSFT)(XrSession, const XrSpatialAnchorSpaceCreateInfoMSFT *, XrSpace *);
    XrResult (*p_xrCreateSpatialGraphNodeSpaceMSFT)(XrSession, const XrSpatialGraphNodeSpaceCreateInfoMSFT *, XrSpace *);
    XrResult (*p_xrCreateSwapchain)(XrSession, const XrSwapchainCreateInfo *, XrSwapchain *);
    XrResult (*p_xrCreateVulkanDeviceKHR)(XrInstance, const XrVulkanDeviceCreateInfoKHR *, VkDevice *, VkResult *);
    XrResult (*p_xrCreateVulkanInstanceKHR)(XrInstance, const XrVulkanInstanceCreateInfoKHR *, VkInstance *, VkResult *);
    XrResult (*p_xrDeserializeSceneMSFT)(XrSceneObserverMSFT, const XrSceneDeserializeInfoMSFT *);
    XrResult (*p_xrDestroyAction)(XrAction);
    XrResult (*p_xrDestroyActionSet)(XrActionSet);
    XrResult (*p_xrDestroyHandTrackerEXT)(XrHandTrackerEXT);
    XrResult (*p_xrDestroySceneMSFT)(XrSceneMSFT);
    XrResult (*p_xrDestroySceneObserverMSFT)(XrSceneObserverMSFT);
    XrResult (*p_xrDestroySession)(XrSession);
    XrResult (*p_xrDestroySpace)(XrSpace);
    XrResult (*p_xrDestroySpatialAnchorMSFT)(XrSpatialAnchorMSFT);
    XrResult (*p_xrDestroySwapchain)(XrSwapchain);
    XrResult (*p_xrEndFrame)(XrSession, const XrFrameEndInfo *);
    XrResult (*p_xrEndSession)(XrSession);
    XrResult (*p_xrEnumerateApiLayerProperties)(uint32_t, uint32_t *, XrApiLayerProperties *);
    XrResult (*p_xrEnumerateBoundSourcesForAction)(XrSession, const XrBoundSourcesForActionEnumerateInfo *, uint32_t, uint32_t *, XrPath *);
    XrResult (*p_xrEnumerateColorSpacesFB)(XrSession, uint32_t, uint32_t *, XrColorSpaceFB *);
    XrResult (*p_xrEnumerateDisplayRefreshRatesFB)(XrSession, uint32_t, uint32_t *, float *);
    XrResult (*p_xrEnumerateEnvironmentBlendModes)(XrInstance, XrSystemId, XrViewConfigurationType, uint32_t, uint32_t *, XrEnvironmentBlendMode *);
    XrResult (*p_xrEnumerateReferenceSpaces)(XrSession, uint32_t, uint32_t *, XrReferenceSpaceType *);
    XrResult (*p_xrEnumerateReprojectionModesMSFT)(XrInstance, XrSystemId, XrViewConfigurationType, uint32_t, uint32_t *, XrReprojectionModeMSFT *);
    XrResult (*p_xrEnumerateSceneComputeFeaturesMSFT)(XrInstance, XrSystemId, uint32_t, uint32_t *, XrSceneComputeFeatureMSFT *);
    XrResult (*p_xrEnumerateSwapchainFormats)(XrSession, uint32_t, uint32_t *, int64_t *);
    XrResult (*p_xrEnumerateSwapchainImages)(XrSwapchain, uint32_t, uint32_t *, XrSwapchainImageBaseHeader *);
    XrResult (*p_xrEnumerateViewConfigurationViews)(XrInstance, XrSystemId, XrViewConfigurationType, uint32_t, uint32_t *, XrViewConfigurationView *);
    XrResult (*p_xrEnumerateViewConfigurations)(XrInstance, XrSystemId, uint32_t, uint32_t *, XrViewConfigurationType *);
    XrResult (*p_xrGetActionStateBoolean)(XrSession, const XrActionStateGetInfo *, XrActionStateBoolean *);
    XrResult (*p_xrGetActionStateFloat)(XrSession, const XrActionStateGetInfo *, XrActionStateFloat *);
    XrResult (*p_xrGetActionStatePose)(XrSession, const XrActionStateGetInfo *, XrActionStatePose *);
    XrResult (*p_xrGetActionStateVector2f)(XrSession, const XrActionStateGetInfo *, XrActionStateVector2f *);
    XrResult (*p_xrGetAudioInputDeviceGuidOculus)(XrInstance, wchar_t[]);
    XrResult (*p_xrGetAudioOutputDeviceGuidOculus)(XrInstance, wchar_t[]);
    XrResult (*p_xrGetControllerModelKeyMSFT)(XrSession, XrPath, XrControllerModelKeyStateMSFT *);
    XrResult (*p_xrGetControllerModelPropertiesMSFT)(XrSession, XrControllerModelKeyMSFT, XrControllerModelPropertiesMSFT *);
    XrResult (*p_xrGetControllerModelStateMSFT)(XrSession, XrControllerModelKeyMSFT, XrControllerModelStateMSFT *);
    XrResult (*p_xrGetCurrentInteractionProfile)(XrSession, XrPath, XrInteractionProfileState *);
    XrResult (*p_xrGetDisplayRefreshRateFB)(XrSession, float *);
    XrResult (*p_xrGetInputSourceLocalizedName)(XrSession, const XrInputSourceLocalizedNameGetInfo *, uint32_t, uint32_t *, char *);
    XrResult (*p_xrGetInstanceProperties)(XrInstance, XrInstanceProperties *);
    XrResult (*p_xrGetOpenGLGraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsOpenGLKHR *);
    XrResult (*p_xrGetReferenceSpaceBoundsRect)(XrSession, XrReferenceSpaceType, XrExtent2Df *);
    XrResult (*p_xrGetSceneComponentsMSFT)(XrSceneMSFT, const XrSceneComponentsGetInfoMSFT *, XrSceneComponentsMSFT *);
    XrResult (*p_xrGetSceneComputeStateMSFT)(XrSceneObserverMSFT, XrSceneComputeStateMSFT *);
#if defined(USE_STRUCT_CONVERSION)
    XrResult (*p_xrGetSceneMeshBuffersMSFT)(XrSceneMSFT, const XrSceneMeshBuffersGetInfoMSFT_host *, XrSceneMeshBuffersMSFT *);
#else
    XrResult (*p_xrGetSceneMeshBuffersMSFT)(XrSceneMSFT, const XrSceneMeshBuffersGetInfoMSFT *, XrSceneMeshBuffersMSFT *);
#endif
    XrResult (*p_xrGetSerializedSceneFragmentDataMSFT)(XrSceneMSFT, const XrSerializedSceneFragmentDataGetInfoMSFT *, uint32_t, uint32_t *, uint8_t *);
    XrResult (*p_xrGetSwapchainStateFB)(XrSwapchain, XrSwapchainStateBaseHeaderFB *);
    XrResult (*p_xrGetSystem)(XrInstance, const XrSystemGetInfo *, XrSystemId *);
    XrResult (*p_xrGetSystemProperties)(XrInstance, XrSystemId, XrSystemProperties *);
    XrResult (*p_xrGetViewConfigurationProperties)(XrInstance, XrSystemId, XrViewConfigurationType, XrViewConfigurationProperties *);
    XrResult (*p_xrGetVisibilityMaskKHR)(XrSession, XrViewConfigurationType, uint32_t, XrVisibilityMaskTypeKHR, XrVisibilityMaskKHR *);
    XrResult (*p_xrGetVulkanDeviceExtensionsKHR)(XrInstance, XrSystemId, uint32_t, uint32_t *, char *);
    XrResult (*p_xrGetVulkanGraphicsDevice2KHR)(XrInstance, const XrVulkanGraphicsDeviceGetInfoKHR *, VkPhysicalDevice *);
    XrResult (*p_xrGetVulkanGraphicsDeviceKHR)(XrInstance, XrSystemId, VkInstance, VkPhysicalDevice *);
    XrResult (*p_xrGetVulkanGraphicsRequirements2KHR)(XrInstance, XrSystemId, XrGraphicsRequirementsVulkanKHR *);
    XrResult (*p_xrGetVulkanGraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsVulkanKHR *);
    XrResult (*p_xrGetVulkanInstanceExtensionsKHR)(XrInstance, XrSystemId, uint32_t, uint32_t *, char *);
    XrResult (*p_xrLoadControllerModelMSFT)(XrSession, XrControllerModelKeyMSFT, uint32_t, uint32_t *, uint8_t *);
    XrResult (*p_xrLocateHandJointsEXT)(XrHandTrackerEXT, const XrHandJointsLocateInfoEXT *, XrHandJointLocationsEXT *);
    XrResult (*p_xrLocateSceneComponentsMSFT)(XrSceneMSFT, const XrSceneComponentsLocateInfoMSFT *, XrSceneComponentLocationsMSFT *);
    XrResult (*p_xrLocateSpace)(XrSpace, XrSpace, XrTime, XrSpaceLocation *);
    XrResult (*p_xrLocateViews)(XrSession, const XrViewLocateInfo *, XrViewState *, uint32_t, uint32_t *, XrView *);
    XrResult (*p_xrPathToString)(XrInstance, XrPath, uint32_t, uint32_t *, char *);
    XrResult (*p_xrPerfSettingsSetPerformanceLevelEXT)(XrSession, XrPerfSettingsDomainEXT, XrPerfSettingsLevelEXT);
    XrResult (*p_xrPollEvent)(XrInstance, XrEventDataBuffer *);
    XrResult (*p_xrReleaseSwapchainImage)(XrSwapchain, const XrSwapchainImageReleaseInfo *);
    XrResult (*p_xrRequestDisplayRefreshRateFB)(XrSession, float);
    XrResult (*p_xrRequestExitSession)(XrSession);
    XrResult (*p_xrResultToString)(XrInstance, XrResult, char[]);
    XrResult (*p_xrSetColorSpaceFB)(XrSession, const XrColorSpaceFB);
    XrResult (*p_xrSetEnvironmentDepthEstimationVARJO)(XrSession, XrBool32);
    XrResult (*p_xrSetInputDeviceActiveEXT)(XrSession, XrPath, XrPath, XrBool32);
    XrResult (*p_xrSetInputDeviceLocationEXT)(XrSession, XrPath, XrPath, XrSpace, XrPosef);
    XrResult (*p_xrSetInputDeviceStateBoolEXT)(XrSession, XrPath, XrPath, XrBool32);
    XrResult (*p_xrSetInputDeviceStateFloatEXT)(XrSession, XrPath, XrPath, float);
    XrResult (*p_xrSetInputDeviceStateVector2fEXT)(XrSession, XrPath, XrPath, XrVector2f);
    XrResult (*p_xrStopHapticFeedback)(XrSession, const XrHapticActionInfo *);
    XrResult (*p_xrStringToPath)(XrInstance, const char *, XrPath *);
    XrResult (*p_xrStructureTypeToString)(XrInstance, XrStructureType, char[]);
    XrResult (*p_xrSuggestInteractionProfileBindings)(XrInstance, const XrInteractionProfileSuggestedBinding *);
    XrResult (*p_xrSyncActions)(XrSession, const XrActionsSyncInfo *);
    XrResult (*p_xrThermalGetTemperatureTrendEXT)(XrSession, XrPerfSettingsDomainEXT, XrPerfSettingsNotificationLevelEXT *, float *, float *);
    XrResult (*p_xrUpdateHandMeshMSFT)(XrHandTrackerEXT, const XrHandMeshUpdateInfoMSFT *, XrHandMeshMSFT *);
    XrResult (*p_xrUpdateSwapchainFB)(XrSwapchain, const XrSwapchainStateBaseHeaderFB *);
    XrResult (*p_xrWaitFrame)(XrSession, const XrFrameWaitInfo *, XrFrameState *);
    XrResult (*p_xrWaitSwapchainImage)(XrSwapchain, const XrSwapchainImageWaitInfo *);
};

#define ALL_XR_INSTANCE_FUNCS() \
    USE_XR_FUNC(xrAcquireSwapchainImage) \
    USE_XR_FUNC(xrApplyHapticFeedback) \
    USE_XR_FUNC(xrAttachSessionActionSets) \
    USE_XR_FUNC(xrBeginFrame) \
    USE_XR_FUNC(xrBeginSession) \
    USE_XR_FUNC(xrComputeNewSceneMSFT) \
    USE_XR_FUNC(xrCreateAction) \
    USE_XR_FUNC(xrCreateActionSet) \
    USE_XR_FUNC(xrCreateActionSpace) \
    USE_XR_FUNC(xrCreateHandMeshSpaceMSFT) \
    USE_XR_FUNC(xrCreateHandTrackerEXT) \
    USE_XR_FUNC(xrCreateReferenceSpace) \
    USE_XR_FUNC(xrCreateSceneMSFT) \
    USE_XR_FUNC(xrCreateSceneObserverMSFT) \
    USE_XR_FUNC(xrCreateSession) \
    USE_XR_FUNC(xrCreateSpatialAnchorMSFT) \
    USE_XR_FUNC(xrCreateSpatialAnchorSpaceMSFT) \
    USE_XR_FUNC(xrCreateSpatialGraphNodeSpaceMSFT) \
    USE_XR_FUNC(xrCreateSwapchain) \
    USE_XR_FUNC(xrCreateVulkanDeviceKHR) \
    USE_XR_FUNC(xrCreateVulkanInstanceKHR) \
    USE_XR_FUNC(xrDeserializeSceneMSFT) \
    USE_XR_FUNC(xrDestroyAction) \
    USE_XR_FUNC(xrDestroyActionSet) \
    USE_XR_FUNC(xrDestroyHandTrackerEXT) \
    USE_XR_FUNC(xrDestroySceneMSFT) \
    USE_XR_FUNC(xrDestroySceneObserverMSFT) \
    USE_XR_FUNC(xrDestroySession) \
    USE_XR_FUNC(xrDestroySpace) \
    USE_XR_FUNC(xrDestroySpatialAnchorMSFT) \
    USE_XR_FUNC(xrDestroySwapchain) \
    USE_XR_FUNC(xrEndFrame) \
    USE_XR_FUNC(xrEndSession) \
    USE_XR_FUNC(xrEnumerateApiLayerProperties) \
    USE_XR_FUNC(xrEnumerateBoundSourcesForAction) \
    USE_XR_FUNC(xrEnumerateColorSpacesFB) \
    USE_XR_FUNC(xrEnumerateDisplayRefreshRatesFB) \
    USE_XR_FUNC(xrEnumerateEnvironmentBlendModes) \
    USE_XR_FUNC(xrEnumerateReferenceSpaces) \
    USE_XR_FUNC(xrEnumerateReprojectionModesMSFT) \
    USE_XR_FUNC(xrEnumerateSceneComputeFeaturesMSFT) \
    USE_XR_FUNC(xrEnumerateSwapchainFormats) \
    USE_XR_FUNC(xrEnumerateSwapchainImages) \
    USE_XR_FUNC(xrEnumerateViewConfigurationViews) \
    USE_XR_FUNC(xrEnumerateViewConfigurations) \
    USE_XR_FUNC(xrGetActionStateBoolean) \
    USE_XR_FUNC(xrGetActionStateFloat) \
    USE_XR_FUNC(xrGetActionStatePose) \
    USE_XR_FUNC(xrGetActionStateVector2f) \
    USE_XR_FUNC(xrGetAudioInputDeviceGuidOculus) \
    USE_XR_FUNC(xrGetAudioOutputDeviceGuidOculus) \
    USE_XR_FUNC(xrGetControllerModelKeyMSFT) \
    USE_XR_FUNC(xrGetControllerModelPropertiesMSFT) \
    USE_XR_FUNC(xrGetControllerModelStateMSFT) \
    USE_XR_FUNC(xrGetCurrentInteractionProfile) \
    USE_XR_FUNC(xrGetDisplayRefreshRateFB) \
    USE_XR_FUNC(xrGetInputSourceLocalizedName) \
    USE_XR_FUNC(xrGetInstanceProperties) \
    USE_XR_FUNC(xrGetOpenGLGraphicsRequirementsKHR) \
    USE_XR_FUNC(xrGetReferenceSpaceBoundsRect) \
    USE_XR_FUNC(xrGetSceneComponentsMSFT) \
    USE_XR_FUNC(xrGetSceneComputeStateMSFT) \
    USE_XR_FUNC(xrGetSceneMeshBuffersMSFT) \
    USE_XR_FUNC(xrGetSerializedSceneFragmentDataMSFT) \
    USE_XR_FUNC(xrGetSwapchainStateFB) \
    USE_XR_FUNC(xrGetSystem) \
    USE_XR_FUNC(xrGetSystemProperties) \
    USE_XR_FUNC(xrGetViewConfigurationProperties) \
    USE_XR_FUNC(xrGetVisibilityMaskKHR) \
    USE_XR_FUNC(xrGetVulkanDeviceExtensionsKHR) \
    USE_XR_FUNC(xrGetVulkanGraphicsDevice2KHR) \
    USE_XR_FUNC(xrGetVulkanGraphicsDeviceKHR) \
    USE_XR_FUNC(xrGetVulkanGraphicsRequirements2KHR) \
    USE_XR_FUNC(xrGetVulkanGraphicsRequirementsKHR) \
    USE_XR_FUNC(xrGetVulkanInstanceExtensionsKHR) \
    USE_XR_FUNC(xrLoadControllerModelMSFT) \
    USE_XR_FUNC(xrLocateHandJointsEXT) \
    USE_XR_FUNC(xrLocateSceneComponentsMSFT) \
    USE_XR_FUNC(xrLocateSpace) \
    USE_XR_FUNC(xrLocateViews) \
    USE_XR_FUNC(xrPathToString) \
    USE_XR_FUNC(xrPerfSettingsSetPerformanceLevelEXT) \
    USE_XR_FUNC(xrPollEvent) \
    USE_XR_FUNC(xrReleaseSwapchainImage) \
    USE_XR_FUNC(xrRequestDisplayRefreshRateFB) \
    USE_XR_FUNC(xrRequestExitSession) \
    USE_XR_FUNC(xrResultToString) \
    USE_XR_FUNC(xrSetColorSpaceFB) \
    USE_XR_FUNC(xrSetEnvironmentDepthEstimationVARJO) \
    USE_XR_FUNC(xrSetInputDeviceActiveEXT) \
    USE_XR_FUNC(xrSetInputDeviceLocationEXT) \
    USE_XR_FUNC(xrSetInputDeviceStateBoolEXT) \
    USE_XR_FUNC(xrSetInputDeviceStateFloatEXT) \
    USE_XR_FUNC(xrSetInputDeviceStateVector2fEXT) \
    USE_XR_FUNC(xrStopHapticFeedback) \
    USE_XR_FUNC(xrStringToPath) \
    USE_XR_FUNC(xrStructureTypeToString) \
    USE_XR_FUNC(xrSuggestInteractionProfileBindings) \
    USE_XR_FUNC(xrSyncActions) \
    USE_XR_FUNC(xrThermalGetTemperatureTrendEXT) \
    USE_XR_FUNC(xrUpdateHandMeshMSFT) \
    USE_XR_FUNC(xrUpdateSwapchainFB) \
    USE_XR_FUNC(xrWaitFrame) \
    USE_XR_FUNC(xrWaitSwapchainImage)

#endif /* __WINE_OPENXR_THUNKS_H */
