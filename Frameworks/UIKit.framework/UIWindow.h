/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWindow : UIView <NSISEngineDelegate, _UIContextBindable, _UIFocusEventRecognizerDelegate, _UIFocusMovementActionForwarding> {
    bool  ___hostViewUnderlapsStatusBar;
    _UIWindowAnimationController * __animationController;
    bool  __containedGestureRecognizersShouldRespectGestureServerInstructions;
    long long  __deferredLaunchOrientation;
    bool  __shouldHitTestEntireScreen;
    id /* block */  __shouldPreventRotationHook;
    bool  __usesLegacySupportedOrientationChecks;
    _UICanvas * _canvas;
    long long  _containedGestureRecognizerMaximumState;
    _UIContextBinder * _contextBinder;
    id  _currentTintView;
    NSString * _debugName;
    id /* block */  _deferredLaunchBlock;
    id  _delegate;
    UITraitCollection * _destinationTraitCollection;
    UIView * _exclusiveTouchView;
    id  _fingerInfo;
    UIResponder * _firstResponder;
    _UIFocusEventRecognizer * _focusEventRecognizer;
    long long  _fromWindowOrientation;
    long long  _horizontalSizeClassStateRestorationOverride;
    UIView * _lastMouseDownView;
    UIView * _lastMouseEnteredView;
    double  _lastTouchTimestamp;
    CAContext * _layerContext;
    bool  _notedOverlayInsetChange;
    <UIFocusItem> * _rememberedFocusedItem;
    CALayer * _rootLayer;
    NSArray * _rootViewConstraints;
    UIViewController * _rootViewController;
    NSMutableArray * _rotationViewControllers;
    long long  _sceneOrientation;
    bool  _shouldDisableTransformLayerScalingForSnapshotting;
    NSMutableSet * _subtreeMonitoringViews;
    _UISystemGestureGateGestureRecognizer * _systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer * _systemGestureGateForTouches;
    unsigned int  _systemGesturesArePossible;
    NSMutableSet * _tintViews;
    long long  _toWindowOrientation;
    id  _touchData;
    struct __CFDictionary { } * _touchMap;
    UITraitCollection * _traitCollection;
    _UIViewControllerNullAnimationTransitionCoordinator * _traitCollectionChangeTransitionCoordinator;
    CALayer * _transformLayer;
    NSUndoManager * _undoManager;
    long long  _verticalSizeClassStateRestorationOverride;
    long long  _viewOrientation;
    id  _windowController;
    struct { 
        unsigned int delegateWillRotate : 1; 
        unsigned int delegateDidRotate : 1; 
        unsigned int delegateWillAnimateFirstHalf : 1; 
        unsigned int delegateDidAnimationFirstHalf : 1; 
        unsigned int delegateWillAnimateSecondHalf : 1; 
        unsigned int autorotatesToPortrait : 1; 
        unsigned int autorotatesToPortraitUpsideDown : 1; 
        unsigned int autorotatesToLandscapeLeft : 1; 
        unsigned int autorotatesToLandscapeRight : 1; 
        unsigned int dontBecomeKeyOnOrderFront : 1; 
        unsigned int output : 1; 
        unsigned int inGesture : 1; 
        unsigned int bitsPerComponent : 4; 
        unsigned int autorotates : 1; 
        unsigned int isRotating : 1; 
        unsigned int isUsingOnePartRotationAnimation : 1; 
        unsigned int disableAutorotationCount : 4; 
        unsigned int needsAutorotationWhenReenabled : 1; 
        unsigned int forceTwoPartRotationAnimation : 1; 
        unsigned int orderKeyboardInAfterRotating : 1; 
        unsigned int roundedCorners : 4; 
        unsigned int resizesToFullScreen : 1; 
        unsigned int keepContextInBackground : 1; 
        unsigned int ignoreSetHidden : 1; 
        unsigned int forceVisibleOnInit : 1; 
        unsigned int settingFirstResponder : 1; 
        unsigned int legacyOrientationChecks : 1; 
        unsigned int windowResizedToFullScreen : 1; 
        unsigned int statusBarFollowsOrientation : 1; 
        unsigned int secure : 1; 
        unsigned int isMainSceneSized : 1; 
        unsigned int didSetRestorationIdentifier : 1; 
        unsigned int resigningFirstResponderFromHost : 1; 
    }  _windowFlags;
    NSArray * _windowInternalConstraints;
    double  _windowLevel;
    double  _windowSublevel;
}

@property (setter=__setHostViewUnderlapsStatusBar:, nonatomic) bool __hostViewUnderlapsStatusBar;
@property (nonatomic, readonly) struct { long long x1; long long x2; } __sizeClassPair;
@property (getter=_animationController, setter=_setAnimationController:, nonatomic, retain) _UIWindowAnimationController *_animationController;
@property (nonatomic, readonly) struct { id x1; int x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; } _bindingDescription;
@property (setter=_setBoundContext:, nonatomic) CAContext *_boundContext;
@property (setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:, nonatomic) bool _containedGestureRecognizersShouldRespectGestureServerInstructions;
@property (setter=_setContextBinder:, nonatomic) _UIContextBinder *_contextBinder;
@property (setter=_setDeferredLaunchBlock:, nonatomic, copy) id /* block */ _deferredLaunchBlock;
@property (setter=_setDeferredLaunchOrientation:, nonatomic) long long _deferredLaunchOrientation;
@property (setter=_setLegacyOrientationChecks:, nonatomic) bool _legacyOrientationChecks;
@property (setter=_setRootViewConstraints:, nonatomic, copy) NSArray *_rootViewConstraints;
@property (setter=_setShouldDisableTransformLayerScalingForSnapshotting:, nonatomic) bool _shouldDisableTransformLayerScalingForSnapshotting;
@property (setter=_setShouldHitTestEntireScreen:, nonatomic) bool _shouldHitTestEntireScreen;
@property (setter=_setShouldPreventRotationHook:, nonatomic, copy) id /* block */ _shouldPreventRotationHook;
@property (setter=_setTraitCollectionChangeTransitionCoordinator:, nonatomic, retain) _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator;
@property (nonatomic, readonly) bool _usesLegacySupportedOrientationChecks;
@property (setter=_setWindowInternalConstraints:, nonatomic, copy) NSArray *_windowInternalConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_focusEventRecognizer, nonatomic, readonly) _UIFocusEventRecognizer *focusEventRecognizer;
@property (getter=_focusResponder, nonatomic, readonly) UIResponder *focusResponder;
@property (getter=_fromWindowOrientation, setter=_setFromWindowOrientation:, nonatomic) long long fromWindowOrientation;
@property (readonly) unsigned long long hash;
@property (getter=isKeyWindow, nonatomic, readonly) bool keyWindow;
@property (nonatomic, readonly) PXContextualNotificationCenter *px_contextualNotificationCenter;
@property (nonatomic, readonly) PXImageModulationManager *px_imageModulationManager;
@property (getter=_rememberedFocusedItem, setter=_setRememberedFocusedItem:, nonatomic) <UIFocusItem> *rememberedFocusedItem;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic, retain) UIScreen *screen;
@property (readonly) Class superclass;
@property (getter=_supportsFocus, nonatomic, readonly) bool supportsFocus;
@property (getter=_toWindowOrientation, setter=_setToWindowOrientation:, nonatomic) long long toWindowOrientation;
@property (nonatomic) double windowLevel;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(bool)arg2;
+ (bool)_allWindowsKeepContextInBackground;
+ (void)_clearKeyWindowStack;
+ (void)_enumerateWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 allowMutation:(bool)arg3 withBlock:(id /* block */)arg4;
+ (void)_enumerateWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 withBlock:(id /* block */)arg3;
+ (void)_executeDeferredLaunchBlocks;
+ (id)_externalKeyWindow;
+ (id)_findWindowForControllingOverallAppearance;
+ (id)_findWithDisplayPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)_globalHitTestForLocation:(struct CGPoint { double x1; double x2; })arg1 inWindowServerHitTestWindow:(id)arg2 withEvent:(id)arg3;
+ (id)_hitTestToPoint:(struct CGPoint { double x1; double x2; })arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4;
+ (id)_homeIndicatorAutoHiddenControllingWindow;
+ (bool)_isSecure;
+ (bool)_isSystemWindow;
+ (unsigned long long)_keyWindowStackSize;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 forAutolayoutRootViewsOnly:(bool)arg3;
+ (void)_popKeyWindow;
+ (void)_popKeyWindow:(id)arg1;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_removeWindowFromStack:(id)arg1;
+ (id)_screenEdgesDeferringSystemGesturesControllingWindow;
+ (void)_setAllWindowsKeepContextInBackground:(bool)arg1;
+ (void)_setKeyWindowStackEnabled:(bool)arg1;
+ (void)_setTransformLayerRotationsAreEnabled:(bool)arg1;
+ (void)_synchronizeDrawing;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(id /* block */)arg2;
+ (void)_synchronizeDrawingWithFence:(id)arg1;
+ (void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(id /* block */)arg2;
+ (void)_synchronizeDrawingWithPreCommitHandler:(id /* block */)arg1;
+ (id)_synchronizedDrawingFence;
+ (id)_topVisibleWindowPassingTest:(id /* block */)arg1;
+ (bool)_transformLayerRotationsAreEnabled;
+ (void)_unregisterChargedView:(id)arg1;
+ (id)_whitePointAdaptivityStyleControllingWindow;
+ (id)_windowWithContextId:(unsigned int)arg1;
+ (void)adjustForAccessibilityIfNeeded:(id)arg1;
+ (id)allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2;
+ (id)allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 forScreen:(id)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void*)createIOSurfaceFromDisplayConfiguration:(id)arg1;
+ (void*)createIOSurfaceFromScreen:(id)arg1;
+ (void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int*)arg2 count:(unsigned long long)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 baseTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
+ (void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int*)arg2 count:(unsigned long long)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 usePurpleGfx:(bool)arg5 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg6;
+ (void*)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 usePurpleGfx:(bool)arg4 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg5;
+ (void*)createScreenIOSurface;
+ (void)initialize;
+ (id)keyWindow;
+ (Class)layerClass;

- (void).cxx_destruct;
- (id)__clientsForRotationCallbacks;
- (bool)__hostViewUnderlapsStatusBar;
- (void)__setHostViewUnderlapsStatusBar:(bool)arg1;
- (struct { long long x1; long long x2; })__sizeClassPair;
- (id)_aboveWindowScrollView;
- (void)_addRotationViewController:(id)arg1;
- (void)_addTintView:(id)arg1;
- (void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (bool)_allowsLinkPreviewInteractionInViewServices;
- (bool)_alwaysGetsContexts;
- (id)_animationController;
- (id)_appearanceContainer;
- (bool)_appearsInLoupe;
- (bool)_areOverlayInsetsValid:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_associatingSceneLayer;
- (void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_becomeFirstResponderWhenPossible;
- (void)_beginKeyWindowDeferral;
- (void)_beginModalSession;
- (double)_bindableLevel;
- (struct { id x1; int x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; })_bindingDescription;
- (id)_bindingLayer;
- (id)_boundContext;
- (bool)_cachedTraitCollectionIsValid;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (bool)_canAffectDisplayAdaptation;
- (bool)_canAffectStatusBarAppearance;
- (bool)_canBecomeKeyWindow;
- (bool)_canBecomeLayoutEngineDelegate;
- (bool)_canPromoteFromKeyWindowStack;
- (id)_canvas;
- (id)_canvasFromScene:(id)arg1;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(bool)arg2 contentInsetScale:(double)arg3;
- (double)_chargeMultiplicationFactor;
- (struct CGPoint { double x1; double x2; })_clampPointToScreenJail:(struct CGPoint { double x1; double x2; })arg1;
- (double)_classicOffset;
- (bool)_clearMouseView;
- (void)_clearPendingKeyboardChanges;
- (void)_clearSizeClassesForStateRestoration;
- (id)_clientsForRotation;
- (void)_commonInit;
- (void)_commonInitAttachedWindow:(bool)arg1 debugName:(id)arg2 scene:(id)arg3;
- (void)_commonInitDebugName:(id)arg1 canvas:(id)arg2;
- (void)_configureContextOptions:(id)arg1;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (bool)_containedGestureRecognizersShouldRespectGestureServerInstructions;
- (bool)_containedInAbsoluteResponderChain;
- (id)_contextBinder;
- (unsigned int)_contextId;
- (id)_contextOptionsWithInitialOptions:(id)arg1;
- (struct CGPoint { double x1; double x2; })_convertDoublePointFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertDoublePointToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertOffset:(struct CGPoint { double x1; double x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertOffset:(struct CGPoint { double x1; double x2; })arg1 toWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertOffsetFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertOffsetToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertPointFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertPointToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRectFromSceneReferenceSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRectToSceneReferenceSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_convertVisualAltitude:(double)arg1 fromWindow:(id)arg2;
- (double)_convertVisualAltitude:(double)arg1 toWindow:(id)arg2;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (id)_currentTintView;
- (id)_debugName;
- (id)_deepestUnambiguousResponder;
- (id)_deferralPropertiesWithContextID:(unsigned int)arg1;
- (id /* block */)_deferredLaunchBlock;
- (long long)_deferredLaunchOrientation;
- (id)_descendantWithAmbiguousLayout;
- (void)_didSnapshot;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_disableAutomaticKeyboardBehavior;
- (bool)_disableAutomaticKeyboardUI;
- (bool)_disableGroupOpacity;
- (unsigned long long)_edgeForTouch:(id)arg1;
- (unsigned long long)_edgesForSystemGesturesTouchDelay;
- (void)_endKeyWindowDeferral;
- (void)_endModalSession;
- (id)_exclusiveTouchView;
- (unsigned long long)_expectedWindowInternalConstraintsCount;
- (void)_fadeCalloutBarIfNeededForTouchInView:(id)arg1;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(bool)arg4;
- (id)_firstResponder;
- (id)_focusEventRecognizer;
- (void)_focusEventRecognizer:(id)arg1 didRecognizeFastScrollingRequest:(id)arg2;
- (bool)_focusEventRecognizer:(id)arg1 didRecognizeFocusMovementRequest:(id)arg2;
- (id)_focusMovementSystemForFocusEventRecognizer:(id)arg1;
- (id)_focusResponder;
- (id)_focusedView;
- (void)_forceTwoPartRotationAnimation:(bool)arg1;
- (void)_forwardFocusMovementAction:(id)arg1;
- (long long)_fromWindowOrientation;
- (bool)_guardSizeTransitionFromAnimations;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (void)_handleSBActiveInterfaceOrientationChange:(id)arg1;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (bool)_hasAmbiguousLayout;
- (bool)_hasContext;
- (id)_hitTestLocation:(struct CGPoint { double x1; double x2; })arg1 inScene:(id)arg2 withWindowServerHitTestWindow:(id)arg3 event:(id)arg4;
- (id)_hostingHandle;
- (id)_hostingWindow;
- (bool)_ignoresHitTest;
- (bool)_includeInDefaultImageSnapshot;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attached:(bool)arg2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 attached:(bool)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 canvas:(id)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 displayConfiguration:(id)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 scene:(id)arg3 attached:(bool)arg4;
- (id)_initWithOrientation:(long long)arg1;
- (void)_initializeLayoutEngine;
- (void)_installFocusEventRecognizer;
- (void)_invalidateWindowInternalConstraints;
- (bool)_isAnyWindowRotating;
- (bool)_isConstrainedByScreenJail;
- (bool)_isHostedInAnotherProcess;
- (bool)_isHostingPortalViews;
- (bool)_isInAWindow;
- (bool)_isKeyWindowForDeferral;
- (bool)_isLoweringAnchoringConstraints;
- (bool)_isScrollingEnabledForView:(id)arg1;
- (bool)_isSecure;
- (bool)_isSettingFirstResponder;
- (bool)_isStatusBarWindow;
- (bool)_isTextEffectsWindow;
- (bool)_isTextEffectsWindowHosting;
- (bool)_isTextEffectsWindowNotificationOwner;
- (bool)_isVisible;
- (bool)_isWindowServerHostingManaged;
- (id)_keyboardSceneSettings;
- (id)_layoutEngineCreateIfNecessary;
- (id)_layoutEngineIfAvailable;
- (bool)_legacyOrientationChecks;
- (bool)_legacyShouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_makeExternalKeyWindow;
- (void)_makeKeyWindowIgnoringOldKeyWindow:(bool)arg1;
- (void)_matchDeviceOrientation;
- (void)_moveWithEvent:(id)arg1;
- (bool)_needsShakesWhenInactive;
- (id)_normalInheritedTintColor;
- (void)_noteOverlayInsetsDidChange;
- (void)_notifyRotatableViewOrientation:(long long)arg1 duration:(double)arg2;
- (void)_orderFrontWithoutMakingKey;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_overlayInsets;
- (long long)_overriddenInterfaceOrientation;
- (id)_overridingPreferredFocusEnvironment;
- (id)_parentFocusEnvironment;
- (void)_performTouchContinuationWithOverrideHitTestedView:(id)arg1;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)_propagateTraitCollectionChangedForStateRestoration;
- (id)_redundantConstraints;
- (void)_registerChargedView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (id)_registeredScrollToTopViews;
- (id)_rememberedFocusedItem;
- (void)_removeAllViewControllersFromWindowHierarchy;
- (void)_removeFocusEventRecognizer;
- (void)_removeRotationViewController:(id)arg1;
- (void)_removeTintView:(id)arg1;
- (void)_resignKeyWindowStatus;
- (bool)_resizeWindowFrameToSceneBoundsIfNecessary;
- (void)_resizeWindowToFullScreenIfNecessary;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (id)_responderWindow;
- (id)_rootForKeyResponderCycle;
- (id)_rootViewConstraints;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1;
- (void)_rotateToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimator:(id)arg2 transitionContext:(id)arg3;
- (void)_rotateWindowToOrientation:(long long)arg1 updateStatusBar:(bool)arg2 duration:(double)arg3 skipCallbacks:(bool)arg4;
- (id)_rotationViewControllers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsInSuperview:(id)arg1;
- (id)_scene;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneBounds;
- (void)_sceneBoundsDidChange;
- (long long)_sceneOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneReferenceBounds;
- (id)_screen;
- (void)_screenWillTransitionToTraitCollection:(id)arg1;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (void)_sendButtonsForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_setAnimationController:(id)arg1;
- (void)_setBoundContext:(id)arg1;
- (void)_setCanvas:(id)arg1;
- (void)_setContainedGestureRecognizersShouldRespectGestureServerInstructions:(bool)arg1;
- (void)_setContextBinder:(id)arg1;
- (void)_setDeferredLaunchBlock:(id /* block */)arg1;
- (void)_setDeferredLaunchOrientation:(long long)arg1;
- (void)_setExclusiveTouchView:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setFromWindowOrientation:(long long)arg1;
- (void)_setHidden:(bool)arg1 forced:(bool)arg2;
- (void)_setIsLoweringAnchoringConstraints:(bool)arg1;
- (void)_setIsResigningFirstResponderFromHost:(bool)arg1;
- (void)_setIsSettingFirstResponder:(bool)arg1;
- (void)_setLegacyOrientationChecks:(bool)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setRememberedFocusedItem:(id)arg1;
- (void)_setRootViewConstraints:(id)arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(bool)arg3 duration:(double)arg4 force:(bool)arg5 isRotating:(bool)arg6;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 force:(bool)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(bool)arg2 duration:(double)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(bool)arg2 duration:(double)arg3 force:(bool)arg4;
- (void)_setScene:(id)arg1;
- (void)_setSecure:(bool)arg1;
- (void)_setShouldDisableTransformLayerScalingForSnapshotting:(bool)arg1;
- (void)_setShouldHitTestEntireScreen:(bool)arg1;
- (void)_setShouldPreventRotationHook:(id /* block */)arg1;
- (void)_setStateRestorationVerticalSizeClass:(long long)arg1 horizontalSizeClass:(long long)arg2;
- (void)_setSystemGestureRecognitionIsPossible:(bool)arg1 andTouchesAreCancelled:(bool)arg2;
- (void)_setToWindowOrientation:(long long)arg1;
- (void)_setTouchMap:(struct __CFDictionary { }*)arg1;
- (void)_setTraitCollectionChangeTransitionCoordinator:(id)arg1;
- (void)_setWindowControlsStatusBarOrientation:(bool)arg1;
- (void)_setWindowInterfaceOrientation:(long long)arg1;
- (void)_setWindowInternalConstraints:(id)arg1;
- (bool)_shouldAdjustSizeClassesAndResizeWindow;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1 checkForDismissal:(bool)arg2 isRotationDisabled:(bool*)arg3;
- (bool)_shouldControlAutorotation;
- (bool)_shouldCreateContextAsSecure;
- (bool)_shouldDelayTouchForSystemGestures:(id)arg1;
- (bool)_shouldDisableTransformLayerScalingForSnapshotting;
- (bool)_shouldHitTestEntireScreen;
- (bool)_shouldPrepareScreenForWindow;
- (id /* block */)_shouldPreventRotationHook;
- (bool)_shouldPropagateTraitCollectionChanges;
- (bool)_shouldRecognizeEventsInFocusEventRecognizer:(id)arg1;
- (bool)_shouldResizeWithScene;
- (bool)_shouldScaleByPixelDoubling;
- (bool)_shouldTextEffectsWindowBeHostedForView:(id)arg1;
- (bool)_shouldUseRemoteContext;
- (bool)_shouldZoom;
- (void)_slideFooterFromOrientation:(long long)arg1 toOrientation:(long long)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(bool)arg3 forInterfaceOrientation:(long long)arg4;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (id)_subtreeMonitorsForView:(id)arg1;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (bool)_supportsBecomeFirstResponderWhenPossible;
- (bool)_supportsFocus;
- (void)_switchToLayoutEngine:(id)arg1;
- (bool)_systemGestureRecognitionIsPossible;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (id)_targetWindowForPathIndex:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (long long)_toWindowOrientation;
- (id)_touchData;
- (struct __CFDictionary { }*)_touchMap;
- (double)_touchSloppinessFactor;
- (bool)_touchesInsideShouldHideCalloutBarForViewHierarchy:(id)arg1;
- (id)_traitCollectionChangeTransitionCoordinator;
- (id)_traitCollectionForSize:(struct CGSize { double x1; double x2; })arg1 screen:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize { double x1; double x2; })arg1 screenCollection:(id)arg2;
- (id)_traitCollectionWhenRotated;
- (struct CGPoint { double x1; double x2; })_transformDisplayToWindowCoordinates:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_transformLayerIncludesScreenRotation;
- (void)_transformLayerShouldMaskToBounds:(bool)arg1;
- (id)_uiib_candidateRedundantConstraints;
- (void)_uiib_invalidateWindowInternalConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (void)_unregisterChargedView:(id)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_updateAppTintView;
- (void)_updateConstraintsIfNeededWithViewForVariableChangeNotifications:(id)arg1;
- (void)_updateCurrentTintView;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation:(bool)arg1;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientationIfRotationEnabled:(bool)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(bool)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(bool)arg1;
- (void)_updateIsSceneSizedFlag;
- (void)_updateLayerOrderingAndSetLayerHidden:(bool)arg1;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 animation:(int)arg3;
- (void)_updateSystemConstraints;
- (void)_updateToInterfaceOrientation:(long long)arg1 animated:(bool)arg2;
- (void)_updateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 force:(bool)arg3;
- (void)_updateToNotificationProvidedInterfaceOrientation:(long long)arg1 animated:(bool)arg2;
- (void)_updateTransformLayer;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_updateTransformLayerSizeForClassicPresentation;
- (void)_updateWindowTraits;
- (void)_updateWindowTraitsAndNotify:(bool)arg1;
- (bool)_usesLegacySupportedOrientationChecks;
- (bool)_usesWindowServerHitTesting;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_viewTransformForInterfaceOrientation:(long long)arg1;
- (bool)_wantsFocusEngine;
- (bool)_wantsSceneAssociation;
- (void)_willChangeToSize:(struct CGSize { double x1; double x2; })arg1 orientation:(long long)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)_willSnapshot;
- (void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_window;
- (bool)_windowControlsStatusBarOrientation;
- (long long)_windowInterfaceOrientation;
- (id)_windowInternalConstraints;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (bool)_windowOwnsInterfaceOrientation;
- (void)_writeLayerTreeToPath:(id)arg1;
- (void)addRootViewControllerViewIfPossible;
- (bool)autorotates;
- (void)awakeFromNib;
- (bool)becomeFirstResponder;
- (void)becomeKeyWindow;
- (void)beginDisablingInterfaceAutorotation;
- (int)bitsPerComponent;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentView;
- (struct CGPoint { double x1; double x2; })convertDeviceToWindow:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toWindow:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertWindowToDevice:(struct CGPoint { double x1; double x2; })arg1;
- (void*)createIOSurface;
- (void*)createIOSurfaceWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)endDisablingInterfaceAutorotation;
- (void)endDisablingInterfaceAutorotationAnimated:(bool)arg1;
- (void)exerciseAmbiguityInLayout;
- (id)firstResponder;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (bool)hasAmbiguousLayout;
- (bool)inhibitManualTransform;
- (bool)inhibitSetupOrientation;
- (bool)inhibitTextEffectsRotation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interfaceOrientation;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isInterfaceAutorotationDisabled;
- (bool)isInternalWindow;
- (bool)isKeyWindow;
- (bool)isRotating;
- (bool)isUsingOnePartRotationAnimation;
- (bool)keepContextInBackground;
- (void)keyboardDidHide;
- (double)level;
- (void)makeKey:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)makeKeyAndVisible;
- (void)makeKeyWindow;
- (void)matchDeviceOrientation:(id)arg1;
- (id)nextResponder;
- (void)orderFront:(id)arg1;
- (void)orderOut:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (void)redo:(id)arg1;
- (void)removeFromSuperview;
- (id)representation;
- (void)resignKeyWindow;
- (bool)resizesToFullScreen;
- (id)restorationIdentifier;
- (id)rootViewController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (id)screen;
- (void)sendEvent:(id)arg1;
- (void)setAutorotates:(bool)arg1;
- (void)setAutorotates:(bool)arg1 forceUpdateInterfaceOrientation:(bool)arg2;
- (void)setBecomeKeyOnOrderFront:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setKeepContextInBackground:(bool)arg1;
- (void)setLevel:(double)arg1;
- (void)setNeedsFocusUpdate;
- (void)setResizesToFullScreen:(bool)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)setWindowLevel:(double)arg1;
- (void)setupForOrientation:(long long)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (void)updateFocusIfNeeded;
- (struct CGPoint { double x1; double x2; })warpPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)windowLevel;
- (int)windowOutput;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (void)music_setWantsDefaultLayoutInsets;
+ (void)music_setWantsLayoutInsetsUsingBlock:(id /* block */)arg1;
+ (void)music_setWantsMusicLayoutInsets;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void)pl_presentViewController:(id)arg1 animated:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_contextualNotificationCenter;
- (id)px_imageModulationManager;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

- (id)sbui_effectiveWindowForIsolation;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (bool)_accessibilityIsModalWithKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_axConvertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (id)ax_descriptionWithIndentation:(long long)arg1 includeAXInfo:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)addTouchCaptureViewWithTag:(long long)arg1;
- (id)removeTouchCaptureViewWithTag:(long long)arg1;

@end