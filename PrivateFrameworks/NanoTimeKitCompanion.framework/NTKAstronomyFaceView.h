/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyFaceView : NTKDigitalFaceView <NTKAstronomyDummy_InputSequencerDelegate, NTKAstronomyRotationModelObserver, NTKAstronomyViewObserver, NTKTimeView, UIGestureRecognizerDelegate> {
    NTKAstronomyView * _astronomyView;
    unsigned int  _canHandleButtonEvents;
    unsigned int  _canHandleCrownEvents;
    struct NSNumber { Class x1; } * _clockTimerToken;
    NSDate * _crownDate;
    NTKAstronomyDummy_CrownInputSequencer * _crownSequencer;
    unsigned long long  _dateFormatterStyle;
    NTKDateComplicationLabel * _dateLabel;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dateLabelZoomEndingCenter;
    NTKDigitalTimeLabel * _digitalTimeLabel;
    NTKDigitalTimeLabelStyle * _digitalTimeLabelDefaultLayoutStyle;
    NTKDigitalTimeLabelStyle * _digitalTimeLabelSmallInUpperRightStyle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitalTimeLabelZoomEndingCenter;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _initialCoordinate;
    UITapGestureRecognizer * _interactiveModeTapGesture;
    unsigned int  _isAnimatingViewMode;
    unsigned int  _isContentLoaded;
    unsigned int  _isFlying;
    unsigned int  _isLocationCurrent;
    UIButton * _leftButton;
    NTKAstronomyLocationDot * _locationDot;
    struct NSString { Class x1; } * _locationManagerToken;
    NSDate * _overrideDate;
    UILabel * _overrideDateLabel;
    UILabel * _phaseLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _phaseLabelDefaultFrame;
    NTKDelayedBlock * _physicalButtonDelayedBlock;
    NTKAstronomyDummy_ClientSideAnimation * _poseInterpolationAnimation;
    long long  _previousDataMode;
    void _previousTranslation;
    float  _recentMovement;
    UIButton * _rightButton;
    NTKAstronomyRotationModel * _rotationModel;
    NSDateFormatter * _scrubDateFormatter;
    UILabel * _scrubLabel;
    UIImageView * _spheroidLabels;
    UIPanGestureRecognizer * _spheroidPanGesture;
    double  _supplementalFontLineHeightPlusDescender;
    UITapGestureRecognizer * _supplementalModeDoubleTapGesture;
    NTKDelayedBlock * _wheelDelayedBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_prewarm;

- (void).cxx_destruct;
- (void)_animateTransitionToViewMode:(long long)arg1;
- (void)_applyDataMode;
- (void)_applyDataModeAnimated:(bool)arg1;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyViewMode:(long long)arg1;
- (void)_asyncUpdateLocale;
- (void)_asyncUpdateTime;
- (bool)_canEnterInteractiveMode;
- (void)_cleanupAfterZoom;
- (id)_date;
- (id)_digitalTimeLabelStyle:(long long)arg1;
- (void)_disableCrown;
- (void)_enableCrownForAstronomyTarget:(unsigned long long)arg1;
- (void)_handleDateLabelButton:(id)arg1;
- (void)_handleInteractiveModeGesture:(id)arg1;
- (bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (void)_handleSpheroidPanGesture:(id)arg1;
- (void)_handleSupplementalModeGesture:(id)arg1;
- (void)_handleVirtualButton:(id)arg1;
- (void)_hideLocationDot;
- (void)_interpolateFromPose:(const struct NTKAstronomyFaceViewAnimationPose { float x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg1 toPose:(const struct NTKAstronomyFaceViewAnimationPose { float x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg2 progress:(float)arg3;
- (void)_layoutPhaseLabel;
- (void)_layoutSpheroidLabel:(int)arg1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (void)_performWristRaiseAnimation;
- (void)_physicalButtonDelayedBlockFired;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (void)_setAstronomyFaceViewModeDefault;
- (void)_setAstronomyFaceViewModeInteractive;
- (void)_setAstronomyFaceViewModeNonInteractive;
- (void)_setAstronomyFaceViewModeSupplemental;
- (void)_setIsAnimatingViewMode:(bool)arg1;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)_shouldHideStatusBarForViewMode:(long long)arg1;
- (void)_showLocationDotIfNeeded;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_unloadSnapshotContentViews;
- (void)_updateLocaleAnimated:(bool)arg1;
- (void)_updateLocation:(id)arg1 lastLocation:(id)arg2;
- (void)_updateTimeAnimated:(bool)arg1;
- (bool)_usesCustomZoom;
- (bool)_wheelChangedWithEvent:(id)arg1;
- (void)_wheelDelayedBlockFired;
- (void)astronomyViewContentsAnimationFinished:(id)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)rotationModelStoppedByDecelerating:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)setViewMode:(long long)arg1;

@end
