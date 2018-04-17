/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverView : UIView {
    UIPopoverBackgroundView * _backgroundView;
    Class  _backgroundViewClass;
    bool  _chromeHidden;
    UIView * _contentView;
    UIPopoverController * _popoverController;
    UIActionSheet * _presentedActionSheet;
    bool  _showsBackgroundComponentHighlights;
    bool  _showsBackgroundViewHighlight;
    bool  _showsContentViewHighlight;
    UIImageView * _toolbarShine;
}

@property (nonatomic, copy) UIColor *arrowBackgroundColor;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowOffset;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) bool chromeHidden;
@property (nonatomic, copy) UIColor *popoverBackgroundColor;
@property (nonatomic) UIPopoverController *popoverController;
@property (nonatomic, retain) UIActionSheet *presentedActionSheet;
@property (nonatomic) bool showsBackgroundComponentHighlights;
@property (nonatomic) bool showsBackgroundViewHighlight;
@property (nonatomic) bool showsContentViewHighlight;

+ (id)popoverViewContainingView:(id)arg1;

- (void).cxx_destruct;
- (bool)_allowsCustomizationOfContent;
- (bool)_backgroundNeedsSeperateBlending;
- (void)_hideArrow;
- (void)_layoutToolbarShine;
- (bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 arrowOffset:(double)arg2;
- (void)_setPopoverContentView:(id)arg1;
- (void)_showArrow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_snapshotBounds;
- (int)_style;
- (void)_updateContentBlendingColor;
- (id)arrowBackgroundColor;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (long long)backgroundStyle;
- (id)backgroundView;
- (bool)chromeHidden;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundViewClass:(Class)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundViewClass:(Class)arg2 embeddedInView:(bool)arg3;
- (void)layoutSubviews;
- (id)popoverBackgroundColor;
- (id)popoverController;
- (void)prepareForAnimatedTransitioningWithCoordinator:(id)arg1;
- (id)presentedActionSheet;
- (void)setArrowBackgroundColor:(id)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setChromeHidden:(bool)arg1;
- (void)setPopoverBackgroundColor:(id)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPresentedActionSheet:(id)arg1;
- (void)setShowsBackgroundComponentHighlights:(bool)arg1;
- (void)setShowsBackgroundViewHighlight:(bool)arg1;
- (void)setShowsContentViewHighlight:(bool)arg1;
- (void)setUseToolbarShine:(bool)arg1;
- (bool)showsBackgroundComponentHighlights;
- (bool)showsBackgroundViewHighlight;
- (bool)showsContentViewHighlight;
- (id)standardChromeView;
- (id)toolbarShine;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
