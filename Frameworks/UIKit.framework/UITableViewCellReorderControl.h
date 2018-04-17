/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellReorderControl : UIControl {
    UITableViewCell * _cell;
    struct CGPoint { 
        double x; 
        double y; 
    }  _downPoint;
    double  _focalHeight;
    double  _focalY;
}

@property (nonatomic, readonly) bool wantsMaskingWhileAnimatingDisabled;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (id)_imageView;
- (void)_updateImageView;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)grabberImage;
- (id)initWithTableViewCell:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldTrack;
- (bool)wantsMaskingWhileAnimatingDisabled;

@end
