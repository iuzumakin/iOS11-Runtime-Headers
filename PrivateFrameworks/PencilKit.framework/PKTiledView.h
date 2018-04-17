/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKTiledView : UIView <PKCanvasViewDelegate, PKSelectionDelegate, UIDropInteractionDelegate_Private, UIGestureRecognizerDelegate, UIScrollViewDelegate, _UIScrollViewLayoutObserver, _UIScrollViewScrollObserver> {
    NSArray * _additionalStrokes;
    PKCanvasView * _canvasView;
    PKDrawing * _createdDrawingForTouchThatHitNothing;
    PKDrawing * _dirtyDrawing;
    UITouch * _drawingTouchThatHitNothing;
    UIDropInteraction * _dropInteraction;
    bool  _fingerDrawingEnabled;
    UIView * _gestureView;
    NSArray * _hideAdditionalStrokes;
    PKInlineInkPicker * _inkPicker;
    bool  _isLayingOut;
    PKDrawing * _isRenderingDrawing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastContentOffset;
    PKLinedPaper * _linedPaper;
    _UITextAttachmentDrawingView * _liveAttachment;
    UIScrollView * _scrollView;
    PKSelectionController * _selectionController;
    _UITextAttachmentDrawingView * _standInEndAttachmentView;
    UIButton * _tapToRadarButton;
    double  _tileHeight;
    long long  _tileLevel;
    double  _tileWidth;
}

@property (nonatomic, readonly) NSArray *additionalStrokes;
@property (nonatomic, retain) PKCanvasView *canvasView;
@property (nonatomic, retain) PKDrawing *createdDrawingForTouchThatHitNothing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITouch *drawingTouchThatHitNothing;
@property (getter=isFingerDrawingEnabled, nonatomic) bool fingerDrawingEnabled;
@property (nonatomic, retain) UIView *gestureView;
@property (nonatomic, readonly) bool hasSelection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *hideAdditionalStrokes;
@property (nonatomic, copy) PKInk *ink;
@property (nonatomic, retain) PKInlineInkPicker *inkPicker;
@property (nonatomic) bool isLayingOut;
@property (nonatomic) PKDrawing *isRenderingDrawing;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastContentOffset;
@property (nonatomic, copy) PKLinedPaper *linedPaper;
@property (nonatomic, retain) _UITextAttachmentDrawingView *liveAttachment;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic, retain) PKSelectionController *selectionController;
@property (nonatomic, retain) _UITextAttachmentDrawingView *standInEndAttachmentView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *tapToRadarButton;
@property (nonatomic) double tileHeight;
@property (nonatomic) long long tileLevel;
@property (nonatomic) double tileWidth;

+ (id)newInlineDrawing;
+ (bool)showDebugOutlines;

- (void).cxx_destruct;
- (id)_attachmentForSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_canvasView:(id)arg1 didFinishRenderingStrokeOnRenderQueue:(id)arg2 inDrawing:(id)arg3;
- (void)_clearSelectionIfNecessary;
- (void)_copyFromCanvas:(id)arg1 intoAttachment:(id)arg2 hideCanvas:(bool)arg3;
- (void)_didAddDrawingAttachmentView;
- (id)_drawingForUUID:(id)arg1;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_hideCanvas;
- (void)_layoutSubviews;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)_setupTapToRadarButton;
- (void)_tapToRadarButtonTapped:(id)arg1;
- (void)_updateAttachmentHeightIfNecessaryForDrawing:(id)arg1;
- (void)_updateHeightOfAttachmentIfNecessary:(id)arg1;
- (id)_visibleTilesForAttachment:(id)arg1 includePartiallyVisible:(bool)arg2;
- (id)additionalStrokes;
- (void)appendPath:(id)arg1 attachmentString:(id)arg2;
- (void)applyCommand:(id)arg1 toDrawing:(id)arg2;
- (id)attachmentForUUID:(id)arg1;
- (id)attachments;
- (void)blitOldTilesIntoNewTiles;
- (bool)canBecomeFirstResponder;
- (void)cancelTileGeneration;
- (id)canvasView;
- (void)canvasView:(id)arg1 drawingDidChange:(id)arg2;
- (void)canvasViewDidCancelStroke:(id)arg1;
- (void)canvasViewDidEndStroke:(id)arg1;
- (void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2;
- (struct CGPoint { double x1; double x2; })closestPointForPastedSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withDrawing:(id*)arg2;
- (bool)containsDrawingUUID:(id)arg1;
- (void)copy:(id)arg1;
- (void)createInkPicker;
- (id)createdDrawingForTouchThatHitNothing;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)didBeginDraggingSelection;
- (id)drawingForLiveAttachment;
- (id)drawingForSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)drawingForUUID:(id)arg1;
- (double)drawingScale;
- (id)drawingTouchThatHitNothing;
- (SEL)drawingUndoSelector;
- (id)drawingUndoTarget;
- (id)drawingView;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)duplicate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfEndAttachment;
- (void)generateTile:(long long)arg1 inAttachment:(id)arg2 rendering:(bool)arg3;
- (id)gestureView;
- (void)getDrawingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 paperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3;
- (bool)hasEndAttachment;
- (bool)hasSelection;
- (id)hideAdditionalStrokes;
- (id)hitAttachment:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitAttachment:(struct CGPoint { double x1; double x2; })arg1 includeEndAttachment:(bool)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageTransform;
- (id)initInScrollView:(id)arg1;
- (id)ink;
- (id)inkPicker;
- (id)insertAttachmentIfAtEndOfDocument:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isFingerDrawingEnabled;
- (bool)isLayingOut;
- (id)isRenderingDrawing;
- (bool)isValidDropPointForStrokes:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })lastContentOffset;
- (id)linedPaper;
- (id)liveAttachment;
- (bool)liveDrawingIsAtEndOfDocument;
- (void)newCanvasView;
- (void)paste:(id)arg1;
- (void)performUndo:(id)arg1;
- (void)performUndoModifyStrokesCommand:(id)arg1;
- (void)performUndoSelectionCommand:(id)arg1;
- (void)pickInk;
- (struct CGPoint { double x1; double x2; })pointInStrokeSpace:(struct CGPoint { double x1; double x2; })arg1 inDrawing:(id)arg2;
- (void)renderAttachment:(id)arg1 intoCanvas:(id)arg2 showing:(bool)arg3;
- (void)resetSelectedStrokeStateForRenderer;
- (void)resizeTiles;
- (id)saveTempData:(id)arg1 name:(id)arg2;
- (void)scrollContent:(struct CGPoint { double x1; double x2; })arg1;
- (id)scrollView;
- (id)selectionController;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })selectionDrawingTransform;
- (struct CGPoint { double x1; double x2; })selectionOffsetForDrawing:(id)arg1;
- (void)selectionRefreshWithChangeToDrawings:(id)arg1;
- (id)selectionTopView;
- (void)setCanvasView:(id)arg1;
- (void)setCreatedDrawingForTouchThatHitNothing:(id)arg1;
- (void)setDrawingTouchThatHitNothing:(id)arg1;
- (void)setFingerDrawingEnabled:(bool)arg1;
- (void)setGestureView:(id)arg1;
- (void)setInk:(id)arg1;
- (void)setInkPicker:(id)arg1;
- (void)setIsLayingOut:(bool)arg1;
- (void)setIsRenderingDrawing:(id)arg1;
- (void)setLastContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLinedPaper:(id)arg1;
- (void)setLiveAttachment:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSelectionController:(id)arg1;
- (void)setStandInEndAttachmentView:(id)arg1;
- (void)setTapToRadarButton:(id)arg1;
- (void)setTileHeight:(double)arg1;
- (void)setTileLevel:(long long)arg1;
- (void)setTileWidth:(double)arg1;
- (id)standInEndAttachmentView;
- (id)tapToRadarButton;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (id)tileForOffset:(long long)arg1 inAttachment:(id)arg2;
- (double)tileHeight;
- (long long)tileLevel;
- (double)tileWidth;
- (void)toggleSelectedStrokes:(id)arg1 hide:(bool)arg2 inDrawing:(id)arg3;
- (void)updateEndAttachment;
- (void)updateTilesForVisibleRect;
- (void)updateTilesForVisibleRectRendering:(bool)arg1;

@end
