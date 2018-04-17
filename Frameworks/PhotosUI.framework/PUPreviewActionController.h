/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPreviewActionController : NSObject <PUAssetActionPerformerDelegate, PUBrowsingViewModelChangeObserver> {
    PUAssetActionPerformer * __activeActionPerformer;
    bool  __needsUpdateActions;
    PUBrowsingSession * _browsingSession;
    <PUPreviewActionControllerDelegate> * _delegate;
    struct { 
        bool didDismissWithIdentifiedAction; 
        bool preventRevealInMomentAction; 
    }  _delegateRespondsTo;
    PXActionManager * _photosUICoreActionManager;
    UIViewController * _presentingViewController;
    NSArray * _previewActions;
}

@property (setter=_setActiveActionPerformer:, nonatomic, retain) PUAssetActionPerformer *_activeActionPerformer;
@property (setter=_setNeedsUpdateActions:, nonatomic) bool _needsUpdateActions;
@property (nonatomic, retain) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPreviewActionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXActionManager *photosUICoreActionManager;
@property (nonatomic) UIViewController *presentingViewController;
@property (setter=_setPreviewActions:, nonatomic, retain) NSArray *previewActions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_actionForPreferredAction:(unsigned long long)arg1;
- (id)_activeActionPerformer;
- (void)_executeActionPerformer:(id)arg1;
- (void)_invalidateActions;
- (bool)_needsUpdate;
- (bool)_needsUpdateActions;
- (void)_notifiyDelegateOfIdentifiedAction:(id)arg1;
- (void)_performCopyAction;
- (void)_performFavoriteAction:(bool)arg1;
- (void)_performRestoreAction;
- (void)_performRevealInMomentAction;
- (void)_performSimpleActionWithType:(unsigned long long)arg1;
- (void)_performTrashAction;
- (void)_setActiveActionPerformer:(id)arg1;
- (void)_setNeedsUpdateActions:(bool)arg1;
- (void)_setPreviewActions:(id)arg1;
- (void)_updateActionsIfNeeded;
- (void)_updateIfNeeded;
- (bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)browsingSession;
- (id)delegate;
- (id)photosUICoreActionManager;
- (id)presentingViewController;
- (id)previewActions;
- (void)setBrowsingSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotosUICoreActionManager:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
