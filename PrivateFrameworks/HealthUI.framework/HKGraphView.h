/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGraphView : UIView <HKGraphRenderDelegate, HKMultiTouchPressGestureRecognizerDelegate, HKScrollPerformanceTestable, HKSeriesDelegate, UIScrollViewDelegate> {
    HKValueRange * _actualAxisRange;
    HKValueRange * _actualVisibleRange;
    HKPropertyAnimationApplier * _animationApplier;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _axisInset;
    UIImage * _bottomFeatheringImage;
    HKValueRange * _chartableValueRange;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    bool  _contentWidthFromTimeScope;
    <HKGraphViewDelegate> * _delegate;
    HKValueRange * _destinationEffectiveVisibleRangeActive;
    UIView * _detailView;
    bool  _disableScrolling;
    bool  _disableSelection;
    bool  _disableXAxis;
    HKValueRange * _effectiveAxisRange;
    HKValueRange * _effectiveVisibleRangeActive;
    HKValueRange * _effectiveVisibleRangeCadence;
    bool  _enableInteractiveSelectionLine;
    bool  _enableStickySelection;
    bool  _enableZoomInGesture;
    unsigned long long  _featheringOptions;
    double  _hardLeftMarginWidth;
    UIImage * _leftFeatheringImage;
    HKBorderLineView * _leftMarginView;
    long long  _maximumDateZoom;
    long long  _minimumDateZoom;
    HKMultiTouchPressGestureRecognizer * _multiTouchGestureRecognizer;
    bool  _needsUpdateGraphViewConfiguration;
    UIColor * _outlineColor;
    unsigned long long  _outlineOptions;
    UIView<HKGraphRenderer> * _renderView;
    UIImage * _rightFeatheringImage;
    UIScrollView * _scrollView;
    UIView * _scrollViewContent;
    HKGraphViewSelectionStyle * _selectionStyle;
    NSMutableArray * _seriesGroupRows;
    bool  _shouldInformDelegateOfUpdates;
    bool  _shouldListenToScrollViewDelegate;
    bool  _subviewsHaveBeenLaidOut;
    UIImage * _topFeatheringImage;
    UIColor * _topMarginColor;
    long long  _virtualLeftMarginStyle;
    double  _virtualLeftMarginWidth;
    long long  _virtualRightMarginStyle;
    double  _virtualRightMarginWidth;
    HKAxis * _xAxis;
    long long  _xAxisDateZoom;
    double  _xAxisSpace;
    NSSet * _yAxisAccessoryViews;
    UIView<HKGraphRenderer> * _yAxisLabelContent;
    double  _yAxisLabelMinimumWidth;
    double  _zoomScale;
}

@property (nonatomic, readonly) HKValueRange *actualAxisRange;
@property (nonatomic, readonly) HKValueRange *actualVisibleRange;
@property (nonatomic, readonly) NSArray *allSeries;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } axisInset;
@property (nonatomic, retain) HKValueRange *chartableValueRange;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic) bool contentWidthFromTimeScope;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKGraphViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKValueRange *destinationEffectiveVisibleRangeActive;
@property (nonatomic, retain) UIView *detailView;
@property (nonatomic) bool disableScrolling;
@property (nonatomic) bool disableSelection;
@property (nonatomic) bool disableXAxis;
@property (nonatomic, readonly) HKValueRange *effectiveAxisRange;
@property (nonatomic, readonly) HKValueRange *effectiveVisibleRangeActive;
@property (nonatomic, readonly) HKValueRange *effectiveVisibleRangeCadence;
@property (nonatomic) bool enableInteractiveSelectionLine;
@property (nonatomic) bool enableStickySelection;
@property (nonatomic) bool enableZoomInGesture;
@property (nonatomic) unsigned long long featheringOptions;
@property (nonatomic) double hardLeftMarginWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isScrollViewDecelerating;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftMarginViewRect;
@property (nonatomic) long long maximumDateZoom;
@property (nonatomic) long long minimumDateZoom;
@property (nonatomic, readonly) HKMultiTouchPressGestureRecognizer *multiTouchGestureRecognizer;
@property (nonatomic, copy) UIColor *outlineColor;
@property (nonatomic) unsigned long long outlineOptions;
@property (nonatomic, retain) HKGraphViewSelectionStyle *selectionStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *topMarginColor;
@property (nonatomic) long long virtualLeftMarginStyle;
@property (nonatomic) double virtualLeftMarginWidth;
@property (nonatomic) long long virtualRightMarginStyle;
@property (nonatomic) double virtualRightMarginWidth;
@property (nonatomic, copy) HKAxis *xAxis;
@property (nonatomic, readonly) long long xAxisDateZoom;
@property (nonatomic) double xAxisSpace;
@property (nonatomic, retain) NSSet *yAxisAccessoryViews;
@property (nonatomic, readonly) double yAxisWidth;
@property (nonatomic) double zoomScale;

+ (double)_modelCoordinateSpanForRange:(id)arg1 axis:(id)arg2;
+ (id)_rangeFromModelCoordinateMin:(double)arg1 max:(double)arg2 axis:(id)arg3;

- (void).cxx_destruct;
- (void)_activateStickySelection;
- (id)_actualVisibleRangeFromEffectiveVisibleRange:(id)arg1 dataAreaRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_addSelectionRecognizerToView:(id)arg1;
- (void)_addTapGestureRecognizerForTapOnView:(id)arg1;
- (void)_addTapGestureRecognizerForTogglingStickyToView:(id)arg1;
- (bool)_anySeriesAnimatingDuringAutoscale;
- (void)_autoScaleXAxis;
- (void)_autoScaleYAxisIfNecessaryForAllGroups;
- (void)_autoScaleYAxisIfNecessaryForGroupRow:(long long)arg1;
- (bool)_axisRangeIsDateRange;
- (void)_clearRenderViewIfNecessary;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; long long x2; })_closestDataPointPathToPoint:(struct CGPoint { double x1; double x2; })arg1 seriesGroupRow:(long long)arg2 minimumXDistance:(double)arg3;
- (id)_closestSeriesToPoint:(struct CGPoint { double x1; double x2; })arg1 allSeries:(id)arg2;
- (bool)_configureYAxisViewIfNeeded;
- (double)_contentWidth;
- (long long)_countOfAllSeries;
- (void)_createLegendForSeriesGroup:(id)arg1;
- (void)_createLegendsIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_currentLegendInsets;
- (long long)_currentSelectionStateForSeriesGroup:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dataAreaRect;
- (void)_deactivateStickySelection;
- (id)_defaultXAxisValueRange;
- (void)_deselectAllSeriesWithAlpha:(double)arg1 offScreenIndicatorAlpha:(double)arg2 seriesGroup:(id)arg3;
- (double)_detailViewWidth;
- (id)_effectiveVisibleRangeFromActualVisibleRange:(id)arg1;
- (void)_enumerateSeriesSelectionRegionsForSeriesGroup:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_findActualAxisRangeFromVisibleRanges;
- (id)_firstSelectionContext;
- (id)_firstSeries;
- (void)_forceYAxisAutoScaleForSeriesGroupRow:(long long)arg1 animated:(bool)arg2;
- (id)_graphSeriesForZoom:(long long)arg1 seriesGroupRow:(long long)arg2;
- (bool)_graphViewIsConfigured;
- (void)_handleStartTouchPoint:(struct CGPoint { double x1; double x2; })arg1 seriesGroupRow:(long long)arg2;
- (double)_inactiveRightAreaForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_installAccessoryViews;
- (void)_layoutDetailView;
- (void)_layoutLegends;
- (void)_layoutYAxisAccessoryViews;
- (void)_loadFeatheringImages;
- (void)_loadScrollView;
- (void)_loadSeriesForZoom:(long long)arg1;
- (struct _HKLocationSpan { double x1; double x2; })_locationSpanForSeriesGroupRow:(long long)arg1;
- (double)_maxTimeThreshold;
- (double)_maximumZoomScale;
- (void)_moveSeriesToFront:(id)arg1;
- (bool)_needsYAxisUpdateDuringRender;
- (void)_notifyDateZoomDidChangeFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_notifyDelegateOfFinishUserScrolling;
- (void)_notifyDelegateOfSizeChange;
- (void)_notifyDelegateOfTapOnYAxis;
- (void)_notifyDelegateOfVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)_notifyDelegateOfYAxisWidth:(double)arg1 toWidth:(double)arg2;
- (void)_notifyDelegateSeriesUpdate:(id)arg1 newDataArrived:(bool)arg2;
- (void)_notifyDidBeginSelection;
- (void)_notifyDidEndSelection;
- (void)_notifyDidUpdateSelectionWithPointContext:(id)arg1;
- (void)_pauseChartInteraction;
- (id)_pointSelectionContextWithTouchPoints:(id)arg1 seriesGroupRow:(long long)arg2 updateViewStates:(bool)arg3;
- (void)_preserveDestinationActiveRange:(id)arg1;
- (id)_rangeFromRange:(id)arg1 withStartOfRange:(id)arg2;
- (void)_reloadViewScope;
- (void)_removeSelectionRecognizerFromView:(id)arg1;
- (void)_renderBaseline;
- (void)_renderDataAreaDividersWithContext:(struct CGContext { }*)arg1;
- (void)_renderSelectionLineWithContext:(struct CGContext { }*)arg1;
- (void)_renderSeriesWithContext:(struct CGContext { }*)arg1 secondaryRenderContext:(id)arg2;
- (void)_renderVirtualMarginGridLines:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)_renderVirtualMarginInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 marginStyle:(long long)arg3;
- (void)_renderVirtualMarginsWithContext:(struct CGContext { }*)arg1;
- (void)_renderXAxisGridlinesWithBlendMode:(int)arg1;
- (bool)_renderXAxisLabelAndGridsNeedsNewRenderer;
- (double)_renderXAxisLabels;
- (void)_renderYAxisDividersWithContext:(struct CGContext { }*)arg1;
- (void)_renderYAxisGridlinesWithBlendMode:(int)arg1;
- (void)_renderYAxisLabels;
- (void)_restoreDestinationActiveRange;
- (void)_resumeChartInteraction;
- (void)_scrollToCurrentVisibleRangeAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scrollingAreaRect;
- (id)_selectedRegionForTouchPoint:(struct CGPoint { double x1; double x2; })arg1 seriesGroup:(id)arg2;
- (void)_selectionRecognizerDidBegin:(id)arg1;
- (void)_selectionRecognizerDidBeginWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_selectionRecognizerDidFinish:(id)arg1;
- (void)_selectionRecognizerDidMove:(id)arg1;
- (void)_selectionRecognizerDidMoveWithTouchPoints:(id)arg1;
- (void)_selectionRecognizerDidUpdate:(id)arg1;
- (id)_seriesForCommonAxesForSeriesGroup:(id)arg1;
- (bool)_seriesGroupHasLegendEntries:(id)arg1;
- (void)_setNeedsUpdateGraphViewConfiguration;
- (void)_setRangesForActiveVisibleRange:(id)arg1;
- (void)_setVisibleRangesForEffectiveRangeCadence:(id)arg1;
- (void)_setYAxisAccessoryViews:(id)arg1;
- (bool)_simultaneousAxesAreEqualForSeriesGroup:(id)arg1;
- (void)_snapXAxisRangeToPreservedRange;
- (bool)_stickySelectionActive;
- (void)_tapOnViewAction:(id)arg1;
- (void)_toggleStickySelectionAction:(id)arg1;
- (struct CGPoint { double x1; double x2; })_touchPointForSeriesGroupIndex:(long long)arg1 originalTouchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_touchesActuallyMoved:(id)arg1;
- (void)_updateAndNotifySelectedContextChangeForAllSeriesIfNecesssary;
- (void)_updateAxisZoomScaleValueRange;
- (void)_updateDateZoomIfNecessary;
- (void)_updateEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3 virtualLeftMarginWidth:(double)arg4 virtualRightMarginWidth:(double)arg5;
- (void)_updateGraphViewConfiguration;
- (void)_updateGraphViewConfigurationIfNecessary;
- (void)_updateLegendForSeriesGroup:(id)arg1;
- (void)_updateRangesForEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3;
- (void)_updateScene;
- (void)_updateScrollViewPropertiesIgnoringScrollViewCallbacks:(id /* block */)arg1;
- (void)_updateSelectionContextStateWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1 seriesGroup:(id)arg2;
- (void)_updateZoomForParameters;
- (id)_valueForXAxisLocation:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_verticalAxisRect;
- (id)_visibleSeriesForSeriesGroup:(id)arg1;
- (void)_walkAllSeries:(id /* block */)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_xAxisCoordinateTransform;
- (id)_yAxisRangeForSynchronizedAxesForDateZoom:(long long)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 seriesGroup:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_yAxisRectForSeriesGroupRow:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_yAxisRectForSeriesGroupRowOld:(long long)arg1;
- (id)actualAxisRange;
- (id)actualVisibleRange;
- (id)allSeries;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })axisInset;
- (id)chartableValueRange;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (bool)contentWidthFromTimeScope;
- (id)delegate;
- (id)destinationEffectiveVisibleRangeActive;
- (id)detailView;
- (bool)disableScrolling;
- (bool)disableSelection;
- (bool)disableXAxis;
- (id)effectiveAxisRange;
- (id)effectiveVisibleRangeActive;
- (id)effectiveVisibleRangeCadence;
- (bool)enableInteractiveSelectionLine;
- (bool)enableStickySelection;
- (bool)enableZoomInGesture;
- (void)enumerateVisibleCoordinatesWithBlock:(id /* block */)arg1;
- (unsigned long long)featheringOptions;
- (id)findVisibleBlockCoordinatesForPrimarySeries;
- (void)finishSelection;
- (void)forceYAxisAutoScaleAnimated:(bool)arg1;
- (void)forceYAxisScaleToRange:(id)arg1 animated:(bool)arg2;
- (void)gestureWillBeginWithRecognizer:(id)arg1;
- (void)graphRenderer:(id)arg1 shouldRenderSceneWithContext:(struct CGContext { }*)arg2;
- (double)hardLeftMarginWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateDataSourceCaches;
- (bool)isScrollViewDecelerating;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftMarginViewRect;
- (long long)maximumDateZoom;
- (long long)minimumDateZoom;
- (id)multiTouchGestureRecognizer;
- (id)outlineColor;
- (unsigned long long)outlineOptions;
- (id)primarySeries;
- (void)removeSeries;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)selectionStyle;
- (void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(bool)arg2;
- (bool)seriesDrawingDuringScrolling;
- (void)setAxesToShowSimultaneously:(id)arg1 stackOffset:(long long)arg2;
- (void)setAxisInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChartableValueRange:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentWidthFromTimeScope:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationEffectiveVisibleRangeActive:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDisableScrolling:(bool)arg1;
- (void)setDisableSelection:(bool)arg1;
- (void)setDisableXAxis:(bool)arg1;
- (void)setEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3;
- (void)setEffectiveVisibleRangeActive:(id)arg1 animated:(bool)arg2;
- (void)setEnableInteractiveSelectionLine:(bool)arg1;
- (void)setEnableStickySelection:(bool)arg1;
- (void)setEnableZoomInGesture:(bool)arg1;
- (void)setFeatheringOptions:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHardLeftMarginWidth:(double)arg1;
- (void)setMaximumDateZoom:(long long)arg1;
- (void)setMinimumDateZoom:(long long)arg1;
- (void)setNeedsReloadSeries;
- (void)setOutlineColor:(id)arg1;
- (void)setOutlineOptions:(unsigned long long)arg1;
- (void)setPreviousDateZoom:(long long)arg1;
- (void)setRenderView:(id)arg1;
- (void)setSelectionStyle:(id)arg1;
- (void)setTopMarginColor:(id)arg1;
- (void)setVirtualLeftMargin:(double)arg1;
- (void)setVirtualLeftMarginStyle:(long long)arg1;
- (void)setVirtualLeftMarginWidth:(double)arg1;
- (void)setVirtualRightMargin:(double)arg1;
- (void)setVirtualRightMarginStyle:(long long)arg1;
- (void)setVirtualRightMarginWidth:(double)arg1;
- (void)setXAxis:(id)arg1;
- (void)setXAxisSpace:(double)arg1;
- (void)setYAxisAccessoryViews:(id)arg1;
- (void)setZoomScale:(double)arg1;
- (void)setZoomScale:(double)arg1 animated:(bool)arg2;
- (bool)stillAnimating:(id)arg1;
- (void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 options:(id)arg4;
- (id)topMarginColor;
- (id)viewForZoomingInScrollView:(id)arg1;
- (long long)virtualLeftMarginStyle;
- (double)virtualLeftMarginWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })virtualMarginInsets;
- (long long)virtualRightMarginStyle;
- (double)virtualRightMarginWidth;
- (id)xAxis;
- (long long)xAxisDateZoom;
- (double)xAxisSpace;
- (id)yAxisAccessoryViews;
- (double)yAxisWidth;
- (double)zoomScale;

@end
