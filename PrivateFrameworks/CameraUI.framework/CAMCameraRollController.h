/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCameraRollController : NSObject <PLCameraPreviewWellImageChangeObserver, PUBrowsingViewModelChangeObserver, PUOneUpPresentationHelperAssetDisplayDelegate, PUOneUpPresentationHelperDelegate, PXPhotosDataSourceChangeObserver, UIInteractionProgressObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private> {
    NSMutableDictionary * __HDRUUIDToIgnoredEV0UUIDs;
    bool  __allowUpdating;
    bool  __deferringStagedMediaLoading;
    bool  __didSetupMechanismsForStoppingCaptureSession;
    bool  __didStopCaptureSession;
    NSMutableSet * __ignoredEV0UUIDs;
    NSObject<OS_dispatch_source> * __memoryWarningSource;
    bool  __oneUpFullyPresented;
    PUOneUpPresentationHelper * __oneUpPresentationHelper;
    bool  __oneUpVisible;
    PUPhotoKitDataSourceManager * __photoKitDataSourceManager;
    PXPhotosDataSource * __photosDataSource;
    NSMutableSet * __sessionAssetUUIDs;
    PXPhotosDataSource * __stagedDataSource;
    bool  __transientAssetsAreValid;
    CAMTransientDataSource * __transientDataSource;
    CAMTransientImageManager * __transientImageManager;
    bool  __updateIsScheduled;
    <CAMCameraRollControllerImageWellDelegate> * _imageWellDelegate;
    bool  _prefersPresentingStatusbarHidden;
    <CAMCameraRollControllerPresentationDelegate> * _presentationDelegate;
    struct { 
        bool respondsToSourceAssetRect; 
        bool respondsToShouldHideSourceAsset; 
        bool respondsToPreviewGestureDidBecomeAvailable; 
        bool respondsToPreviewSourceRect; 
        bool respondsToImageForReveal; 
        bool respondsToRevealWillBegin; 
        bool respondsToRevealDidEnd; 
        bool respondsToWillPresentCameraRoll; 
        bool respondsToPrefersPresentingStatusbarHiddenDidChange; 
    }  _presentationDelegateFlags;
    UIGestureRecognizer * _previewGestureRecognizer;
    <CAMCameraRollControllerSessionDelegate> * _sessionDelegate;
    unsigned short  _sessionIdentifier;
    bool  _shouldPauseAudioSessionUpdatesForCapture;
}

@property (nonatomic, readonly) NSMutableDictionary *_HDRUUIDToIgnoredEV0UUIDs;
@property (setter=_setAllowUpdating:, nonatomic) bool _allowUpdating;
@property (getter=_isDeferringStagedMediaLoading, setter=_setDeferringStagedMediaLoading:, nonatomic) bool _deferringStagedMediaLoading;
@property (setter=_setDidSetupMechanismsForStoppingCaptureSession:, nonatomic) bool _didSetupMechanismsForStoppingCaptureSession;
@property (setter=_setDidStopCaptureSession:, nonatomic) bool _didStopCaptureSession;
@property (nonatomic, readonly) NSMutableSet *_ignoredEV0UUIDs;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *_memoryWarningSource;
@property (getter=_isOneUpFullyPresented, setter=_setOneUpFullyPresented:, nonatomic) bool _oneUpFullyPresented;
@property (nonatomic, readonly) PUOneUpPresentationHelper *_oneUpPresentationHelper;
@property (getter=_isOneUpVisible, setter=_setOneUpVisible:, nonatomic) bool _oneUpVisible;
@property (nonatomic, readonly) PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
@property (setter=_setPhotosDataSource:, nonatomic, retain) PXPhotosDataSource *_photosDataSource;
@property (nonatomic, readonly) NSMutableSet *_sessionAssetUUIDs;
@property (setter=_setStagedDataSource:, nonatomic, retain) PXPhotosDataSource *_stagedDataSource;
@property (setter=_setTransientAssetsAreValid:, nonatomic) bool _transientAssetsAreValid;
@property (nonatomic, readonly) CAMTransientDataSource *_transientDataSource;
@property (nonatomic, readonly) CAMTransientImageManager *_transientImageManager;
@property (setter=_setUpdateIsScheduled:, nonatomic) bool _updateIsScheduled;
@property (nonatomic, readonly) bool canPresentCameraRollViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CAMCameraRollControllerImageWellDelegate> *imageWellDelegate;
@property (setter=_setPrefersPresentingStatusbarHidden:, nonatomic) bool prefersPresentingStatusbarHidden;
@property (nonatomic) <CAMCameraRollControllerPresentationDelegate> *presentationDelegate;
@property (setter=_setPreviewGestureRecognizer:, nonatomic, retain) UIGestureRecognizer *previewGestureRecognizer;
@property (nonatomic) <CAMCameraRollControllerSessionDelegate> *sessionDelegate;
@property (setter=_setSessionIdentifier:, nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) bool shouldPauseAudioSessionUpdatesForCapture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_HDRUUIDToIgnoredEV0UUIDs;
- (bool)_allowUpdating;
- (void)_cancelDelayedStopCaptureSession;
- (bool)_didSetupMechanismsForStoppingCaptureSession;
- (bool)_didStopCaptureSession;
- (void)_ensureCameraRollViewController;
- (id)_ignoredEV0UUIDs;
- (void)_invalidateTransientAssets;
- (bool)_isDeferringStagedMediaLoading;
- (bool)_isOneUpFullyPresented;
- (bool)_isOneUpVisible;
- (bool)_isPasscodeLocked;
- (id)_memoryWarningSource;
- (id)_oneUpPresentationHelper;
- (void)_performPreload;
- (id)_photoKitDataSourceManager;
- (id)_photosDataSource;
- (void)_registerBrowsingViewModelChangeObserver;
- (void)_scheduleStopCaptureSessionAfterDelay:(double)arg1;
- (void)_scheduleUpdateIfOneUpIsActive;
- (id)_sessionAssetUUIDs;
- (void)_setAllowUpdating:(bool)arg1;
- (void)_setDeferringStagedMediaLoading:(bool)arg1;
- (void)_setDidSetupMechanismsForStoppingCaptureSession:(bool)arg1;
- (void)_setDidStopCaptureSession:(bool)arg1;
- (void)_setOneUpFullyPresented:(bool)arg1;
- (void)_setOneUpVisible:(bool)arg1;
- (void)_setPhotosDataSource:(id)arg1;
- (void)_setPrefersPresentingStatusbarHidden:(bool)arg1;
- (void)_setPreviewGestureRecognizer:(id)arg1;
- (void)_setSessionIdentifier:(unsigned short)arg1;
- (void)_setStagedDataSource:(id)arg1;
- (void)_setTransientAssetsAreValid:(bool)arg1;
- (void)_setUpdateIsScheduled:(bool)arg1;
- (void)_setupMechanismsForStoppingCaptureSessionIfNecessary;
- (void)_setupMemoryWarningNotificationsIfNecessary;
- (bool)_shouldStopCaptureSessionForIrisPlayerOfAssetViewModel:(id)arg1;
- (bool)_shouldStopCaptureSessionForVideoPlayerOfAssetViewModel:(id)arg1;
- (id)_stagedDataSource;
- (void)_startNewSession;
- (void)_stopCaptureSessionIfNecessary;
- (void)_stopCaptureSessionIfNecessaryForViewModel:(id)arg1 didChange:(id)arg2;
- (void)_stopCaptureSessionIfNecessaryForViewModelCurrentState;
- (void)_stopCaptureSessionIfNecessaryFromTimeout;
- (void)_tearDownMemoryWarningNotifications;
- (void)_teardownMechanismsForStoppingCaptureSession;
- (bool)_transientAssetsAreValid;
- (id)_transientDataSource;
- (id)_transientImageManager;
- (void)_unregisterBrowsingViewModelChangeObserver;
- (void)_update;
- (bool)_updateIsScheduled;
- (void)_updateTransientDataSourceIfNeeded;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)beginAllowingStagedMediaLoading;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (bool)canPresentCameraRollViewController;
- (void)clearIgnoredImageWellUUIDs;
- (void)dealloc;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)didPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2;
- (bool)dismissCameraRollViewControllerForced:(bool)arg1 animated:(bool)arg2;
- (void)handlePresentingPanGestureRecognizer:(id)arg1;
- (void)ignoreImageWellChangeNotificationForEV0UUID:(id)arg1 withHDRUUID:(id)arg2;
- (id)imageWellDelegate;
- (id)init;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (bool)isCameraRollViewControllerPresented;
- (bool)isCaptureSessionCurrent:(unsigned short)arg1;
- (void)oneUpPresentationHelper:(id)arg1 previewScrubberDidBecomeAvailable:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
- (long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1;
- (bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (id)persistedThumbnailImage;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)ppt_preload;
- (bool)prefersPresentingStatusbarHidden;
- (void)preload;
- (void)presentCameraRollViewControllerAnimated:(bool)arg1 interactive:(bool)arg2 deferringStagedMediaLoading:(bool)arg3;
- (id)presentationDelegate;
- (void)presentingViewControllerViewDidAppear:(bool)arg1;
- (void)presentingViewControllerViewDidDisappear:(bool)arg1;
- (void)presentingViewControllerViewWillAppear:(bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(bool)arg1;
- (id)previewGestureRecognizer;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint { double x1; double x2; })arg1 inSourceView:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)processPendingBursts;
- (void)processTransientAssetUpdate:(id)arg1 preventingInsertion:(bool)arg2;
- (void)processTransientPairedVideoUpdate:(id)arg1 filterType:(long long)arg2;
- (void)resetNavigation;
- (id)sessionDelegate;
- (unsigned short)sessionIdentifier;
- (void)setImageWellDelegate:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setShouldPauseAudioSessionUpdatesForCapture:(bool)arg1;
- (bool)shouldPauseAudioSessionUpdatesForCapture;
- (bool)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)willPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;

@end
