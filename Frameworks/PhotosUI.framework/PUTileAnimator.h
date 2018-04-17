/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileAnimator : NSObject {
    <PUTilingViewControllerTransition> * _currentTransition;
}

@property (nonatomic, readonly) <PUTilingViewControllerTransition> *currentTransition;

- (void).cxx_destruct;
- (void)animateTileController:(id)arg1 toLayoutInfo:(id)arg2 withOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)currentTransition;
- (id)freezeTileController:(id)arg1;
- (void)prepareTileControllerForAnimation:(id)arg1 withInitialLayoutInfo:(id)arg2;
- (void)transition:(id)arg1 didComplete:(bool)arg2;
- (void)transitionDidBeginAnimation:(id)arg1;
- (void)transitionWillBeginAnimation:(id)arg1;
- (void)updateAnimationForTileController:(id)arg1 withRepositionedTargetLayoutInfo:(id)arg2;

@end
