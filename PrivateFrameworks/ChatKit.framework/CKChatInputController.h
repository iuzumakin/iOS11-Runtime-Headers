/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatInputController : NSObject <CKBrowserAppManagerViewControllerDelegate, CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerSendDelegate, CKBrowserViewControllerStoreSendDelegate, CKDeviceOrientationManagerDelegate, CKFullScreenAppViewControllerDelegate, CKHandwritingPresentationControllerDelegate, CKHandwritingViewControllerSendDelegate, CKMessageEntryViewInputDelegate, CKPhotoBrowserViewControllerSendDelegate, CKPluginEntryViewControllerDelegate, DDMoneyActionDelegate, UITextInputPayloadDelegate> {
    bool  __isRunningPPT;
    IMBalloonPlugin * _browserPlugin;
    IMBalloonPluginDataSource * _browserPluginDataSource;
    CKBrowserSwitcherViewController * _browserSwitcher;
    CKKeyboardContentViewController * _currentInputViewController;
    <CKChatInputControllerDelegate> * _delegate;
    IMScheduledUpdater * _dismissEntryViewShelfUpdater;
    CKMessageEntryView * _entryView;
    CKHandwritingPresentationController * _handwritingPresentationController;
    bool  _inCollapseOrExpandAnimation;
    bool  _inputViewVisible;
    id /* block */  _insertPayloadCompletionHandler;
    bool  _keyboardIsHiding;
    long long  _lastSeenOrientation;
    UIViewController<CKBrowserViewControllerProtocol> * _modalBrowserViewController;
    CKDeviceOrientationManager * _orientationManager;
    CKScheduledUpdater * _orientationUpdater;
    UINavigationController * _presentedBrowserNavigationController;
    bool  _shouldRestoreAppSwitcher;
    bool  _shouldSuppressStatusBarForHandwriting;
    UIViewController * _statusBarStyleViewController;
    CKKeyboardContentViewController * _switcherInputViewController;
    NSDate * _switcherLastTouchDate;
}

@property (nonatomic) bool _isRunningPPT;
@property (nonatomic, readonly) bool appManagerIsDisplayed;
@property (nonatomic, readonly) bool appStoreIsDisplayed;
@property (nonatomic, retain) IMBalloonPlugin *browserPlugin;
@property (nonatomic, retain) IMBalloonPluginDataSource *browserPluginDataSource;
@property (nonatomic, readonly) bool browserShouldAutorotate;
@property (nonatomic, readonly) unsigned long long browserSupportedInterfaceOrientations;
@property (nonatomic, retain) CKBrowserSwitcherViewController *browserSwitcher;
@property (nonatomic, retain) CKKeyboardContentViewController *currentInputViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKChatInputControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IMScheduledUpdater *dismissEntryViewShelfUpdater;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (nonatomic, retain) CKHandwritingPresentationController *handwritingPresentationController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inCollapseOrExpandAnimation;
@property (getter=isInputViewVisible, nonatomic) bool inputViewVisible;
@property (nonatomic, copy) id /* block */ insertPayloadCompletionHandler;
@property (nonatomic) bool keyboardIsHiding;
@property (nonatomic) long long lastSeenOrientation;
@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *modalBrowserViewController;
@property (nonatomic, retain) CKDeviceOrientationManager *orientationManager;
@property (nonatomic, retain) CKScheduledUpdater *orientationUpdater;
@property (nonatomic, retain) UINavigationController *presentedBrowserNavigationController;
@property (nonatomic, readonly) bool presentsHandwritingOnRotation;
@property (nonatomic) bool shouldRestoreAppSwitcher;
@property (nonatomic) bool shouldSuppressStatusBarForHandwriting;
@property (nonatomic, retain) UIViewController *statusBarStyleViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKKeyboardContentViewController *switcherInputViewController;
@property (nonatomic, retain) NSDate *switcherLastTouchDate;

- (void).cxx_destruct;
- (id)_adamIDFromPluginPayloadData:(id)arg1;
- (id)_browserViewControllerForInterfaceOrientationMethods;
- (bool)_currentPluginIsDT;
- (bool)_currentPluginIsPhotos;
- (void)_deferredCommitPayload:(id)arg1;
- (void)_deferredCommitSticker:(id)arg1;
- (void)_deferredDismissToKeyboardAndFocusEntryView:(id)arg1;
- (void)_deferredRequestPresentationStyleExpanded:(id)arg1;
- (void)_dismissBrowserViewControllerAndReloadInputViews:(bool)arg1;
- (void)_dismissCompactSwitcherOverKeyboardWithCompletion:(id /* block */)arg1;
- (id)_entryViewSnapshotWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_handleOrientation;
- (bool)_isRunningPPT;
- (void)_launchAppExtensionForDebugging;
- (void)_loadPhotosBrowser;
- (void)_loadPhotosBrowserCollapsingEntryField:(bool)arg1;
- (void)_openContainingBundleID:(id)arg1 applicationService:(id)arg2 withURL:(id)arg3 pluginID:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_presentCompactSwitcherOverKeyboardWithCompletion:(id /* block */)arg1;
- (void)_presentPluginWithBundleID:(id)arg1 sendingTextInputPayload:(id)arg2 withPayloadID:(id)arg3;
- (void)_reconfigurePluginDataSourceWithBalloonControllerIfNecessary;
- (void)_setupObserverForLaunchAppExtensionForDebugging;
- (bool)_shouldSendTypingIndicatorDataForPluginIdentifier:(id)arg1;
- (void)_showFullScreenBrowser:(id)arg1;
- (void)_startEditingPayload:(id)arg1;
- (bool)_switcherPluginCanMessageAPI;
- (bool)_switcherPluginCanMessageAPIOnBehalfOfPlugin:(id)arg1;
- (bool)_switcherPluginHasTouchTokenForDirectSend;
- (bool)appManagerIsDisplayed;
- (bool)appStoreIsDisplayed;
- (void)applicationWillAddDeactivationReasonNotification:(id)arg1;
- (void)browserAppManagerDidSelectPlugin:(id)arg1;
- (id)browserPlugin;
- (id)browserPluginDataSource;
- (bool)browserShouldAutorotate;
- (unsigned long long)browserSupportedInterfaceOrientations;
- (id)browserSwitcher;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)clearBrowserViewControllerIfNecessary;
- (void)commitPayload:(id)arg1;
- (bool)commitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(bool)arg3 error:(id*)arg4;
- (void)commitSticker:(id)arg1;
- (void)commitSticker:(id)arg1 atScreenCoordinate:(struct CGPoint { double x1; double x2; })arg2 scale:(double)arg3 rotation:(double)arg4;
- (void)commitSticker:(id)arg1 forPlugin:(id)arg2;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (id)currentInputViewController;
- (void)dealloc;
- (id)delegate;
- (void)deviceOrientationManager:(id)arg1 orientationDidChange:(long long)arg2;
- (void)didBeginInstallingAppWithBundleIdentifier:(id)arg1;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(bool)arg1;
- (void)dismissAndReloadInputViews:(bool)arg1 forPlugin:(id)arg2;
- (void)dismissBrowserViewController;
- (void)dismissEntryViewShelf;
- (id)dismissEntryViewShelfUpdater;
- (void)dismissPlugin;
- (void)dismissToKeyboard:(bool)arg1;
- (id)dragControllerTranscriptDelegate;
- (id)entryView;
- (void)entryViewDidChangeSize;
- (void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (void)handleMoneyActionWithAmount:(id)arg1 currencies:(id)arg2;
- (void)handlePayload:(id)arg1 withPayloadId:(id)arg2;
- (bool)handwritingIsDisplayed;
- (id)handwritingPresentationController;
- (void)handwritingPresentationControllerDidShowHandwriting:(id)arg1;
- (void)handwritingPresentationControllerWillHideHandwriting:(id)arg1;
- (bool)inCollapseOrExpandAnimation;
- (id)init;
- (id)inputAccessoryView;
- (id)inputViewController;
- (id /* block */)insertPayloadCompletionHandler;
- (bool)isInputViewVisible;
- (void)keyboardDidHide:(id)arg1;
- (bool)keyboardIsHiding;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (long long)lastSeenOrientation;
- (bool)messageEntryShouldHideCaret:(id)arg1;
- (void)messageEntryView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (void)messageEntryViewBrowserButtonHit:(id)arg1;
- (void)messageEntryViewDidCollapse:(id)arg1;
- (void)messageEntryViewDidExpand:(id)arg1;
- (void)messageEntryViewDidTakeFocus:(id)arg1;
- (void)messageEntryViewHandwritingButtonHit:(id)arg1;
- (long long)messageEntryViewHighLightInputButton:(id)arg1;
- (void)messageEntryViewPhotoButtonHit:(id)arg1;
- (id)modalBrowserViewController;
- (void)notifyBrowserViewControllerOfMatchingNewMessages:(id)arg1;
- (void)openAppExtensionWithAdamID:(id)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)orientationManager;
- (id)orientationUpdater;
- (id)pluginBundleID;
- (void)prepareForSuspend;
- (void)presentAppManager;
- (void)presentAppStoreForAdamID:(id)arg1;
- (void)presentAppStoreForURL:(id)arg1;
- (void)presentAppStoreToManagedTabForPlugin:(id)arg1;
- (void)presentPluginWithBundleID:(id)arg1 appLaunchPayload:(id)arg2;
- (void)presentViewControllerWithPluginChatItem:(id)arg1 expanded:(bool)arg2;
- (id)presentedBrowserNavigationController;
- (bool)presentsHandwritingOnRotation;
- (void)registerForTextInputPayloadHandling;
- (void)requestPhotoBrowserInitFromDraft:(id)arg1;
- (void)requestPhotoBrowserToAppendFinalImagesToComposition;
- (void)requestPhotoBrowserToPrepareForDraft;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)requestPresentationStyleExpanded:(bool)arg1 forPlugin:(id)arg2;
- (void)setBrowserPlugin:(id)arg1;
- (void)setBrowserPluginDataSource:(id)arg1;
- (void)setBrowserSwitcher:(id)arg1;
- (void)setCurrentInputViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissEntryViewShelfUpdater:(id)arg1;
- (void)setEntryView:(id)arg1;
- (void)setEntryViewHidden:(bool)arg1;
- (void)setHandwritingPresentationController:(id)arg1;
- (void)setInCollapseOrExpandAnimation:(bool)arg1;
- (void)setInputViewVisible:(bool)arg1;
- (void)setInputViewVisible:(bool)arg1 entryFieldCollapsed:(bool)arg2 animated:(bool)arg3;
- (void)setInsertPayloadCompletionHandler:(id /* block */)arg1;
- (void)setKeyboardIsHiding:(bool)arg1;
- (void)setLastSeenOrientation:(long long)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)setModalBrowserViewController:(id)arg1;
- (void)setOrientationManager:(id)arg1;
- (void)setOrientationUpdater:(id)arg1;
- (void)setPresentedBrowserNavigationController:(id)arg1;
- (void)setShouldRestoreAppSwitcher:(bool)arg1;
- (void)setShouldSuppressStatusBarForHandwriting:(bool)arg1;
- (void)setStatusBarStyleViewController:(id)arg1;
- (void)setSwitcherInputViewController:(id)arg1;
- (void)setSwitcherLastTouchDate:(id)arg1;
- (void)set_isRunningPPT:(bool)arg1;
- (bool)shouldRestoreAppSwitcher;
- (bool)shouldSuppressStatusBarForHandwriting;
- (void)showAppsBrowser;
- (void)showBrowserForPlugin:(id)arg1 dataSource:(id)arg2 expanded:(bool)arg3;
- (void)showDTCompose;
- (void)showEntryViewShelf:(id)arg1;
- (void)showHandwritingBrowser;
- (void)showHandwritingBrowserWithExistingPayload:(id)arg1;
- (void)showKeyboard;
- (void)showPhotosBrowser;
- (void)showPhotosBrowserCollapsingEntryField:(bool)arg1;
- (void)startEditingPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(bool)arg2;
- (void)startEditingPayload:(id)arg1 dismiss:(bool)arg2 forPlugin:(id)arg3;
- (void)startEditingPayload:(id)arg1 dismiss:(bool)arg2 forPlugin:(id)arg3 completion:(id /* block */)arg4;
- (id)statusBarStyleViewController;
- (id)switcherInputViewController;
- (id)switcherLastTouchDate;
- (void)switcherViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)switcherViewController:(id)arg1 willHideSelectionViewWithAnimations:(id /* block */*)arg2 completion:(id /* block */*)arg3;
- (void)switcherViewController:(id)arg1 willShowSelectionViewWithAnimations:(id /* block */*)arg2 completion:(id /* block */*)arg3;
- (void)switcherViewControllerDidCollapse:(id)arg1;
- (void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
- (void)switcherViewControllerDidSelectAppManager:(id)arg1 shouldRestoreAppSwitcher:(bool)arg2;
- (void)switcherViewControllerDidSelectAppStore:(id)arg1 shouldRestoreAppSwitcher:(bool)arg2;
- (void)switcherViewControllerDidStartSwitching:(id)arg1;
- (void)unregisterForTextInputPayloadHandling;
- (id)workingDirForDraft;

@end
