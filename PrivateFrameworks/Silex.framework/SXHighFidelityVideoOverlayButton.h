/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXHighFidelityVideoOverlayButton : UIView <SXVideoOverlayButton> {
    SEL  _action;
    _UIBackdropView * _backdropView;
    UIButton * _button;
    int  _state;
    long long  _style;
    id  _target;
}

@property (nonatomic) int state;

- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)recalculateBackdropView;
- (void)setState:(int)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (int)state;
- (long long)style;

@end
