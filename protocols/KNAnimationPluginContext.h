/* Generated by RuntimeBrowser.
 */

@protocol KNAnimationPluginContext <NSObject>

@required

- (TSDGLState *)GLState;
- (KNAnimatedBuild *)animatedBuild;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectOnCanvas;
- (unsigned long long)direction;
- (double)duration;
- (bool)isBuild;
- (bool)isFrameRenderer;
- (bool)isMagicMove;
- (bool)isMotionBlurred;
- (bool)isPreview;
- (bool)isTransition;
- (bool)isWarmingUp;
- (NSArray *)magicMoveMatches;
- (double)percent;
- (KNAnimationRandomGenerator *)randomGenerator;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (NSArray *)tags;
- (NSArray *)textures;
- (NSDictionary *)transitionAttributes;

@end
