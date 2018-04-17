/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLongPressForceGestureRecognizer : UILongPressGestureRecognizer {
    double  _is_force;
    bool  _longPressDidBeginForCurrentTouch;
    double  _maximumPressure;
    double  _minimumPressure;
    NSMutableSet * _trackingTouches;
}

@property (nonatomic, readonly) double is_force;
@property (nonatomic) double maximumPressure;
@property (nonatomic) double minimumPressure;

- (void).cxx_destruct;
- (void)_updateForce;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)is_force;
- (double)maximumPressure;
- (double)minimumPressure;
- (void)reset;
- (void)setMaximumPressure:(double)arg1;
- (void)setMinimumPressure:(double)arg1;
- (void)setState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
