/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISingleResultTableViewCell : SearchUITableViewCell <CNAvatarViewDelegate, NUIContainerStackViewDelegate> {
    SearchUIAccessoryViewController * _accessoryViewControllerForResult;
    NSMutableDictionary * _accessoryViewControllers;
    CNAvatarView * _contactView;
    TLKDetailsView * _detailsView;
    SearchUIForceTouchGestureRecognizer * _forceTouchRecognizer;
    NUIContainerStackView * _innerContainer;
    SFSearchResult * _result;
    SearchUIThumbnailView * _thumbnailView;
}

@property (retain) SearchUIAccessoryViewController *accessoryViewControllerForResult;
@property (retain) NSMutableDictionary *accessoryViewControllers;
@property (retain) CNAvatarView *contactView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) TLKDetailsView *detailsView;
@property (retain) SearchUIForceTouchGestureRecognizer *forceTouchRecognizer;
@property (readonly) unsigned long long hash;
@property (retain) NUIContainerStackView *innerContainer;
@property (retain) SFSearchResult *result;
@property (retain) NUIContainerStackView *sizingContainer;
@property (readonly) Class superclass;
@property (retain) SearchUIThumbnailView *thumbnailView;

+ (void)addViewIfNecessary:(id)arg1 toStackView:(id)arg2 removeFromStackView:(id)arg3;
+ (id)textForTitleText:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryViewControllerForResult;
- (id)accessoryViewControllers;
- (bool)arrangedViewMustCenter:(id)arg1;
- (id)contactInlineActionViewController;
- (id)contactView;
- (long long)containerStackView:(id)arg1 alignmentForArrangedSubview:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)containerViewDidInvalidateIntrinsicContentSize:(id)arg1;
- (id)detailsView;
- (id)forceTouchRecognizer;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (id)innerContainer;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)result;
- (void)setAccessoryViewControllerForResult:(id)arg1;
- (void)setAccessoryViewControllers:(id)arg1;
- (void)setContactView:(id)arg1;
- (void)setDetailsView:(id)arg1;
- (void)setForceTouchRecognizer:(id)arg1;
- (void)setInnerContainer:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSectionLocation:(int)arg1;
- (void)setThumbnailView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForceTouchRecognizerWithResult:(id)arg1;
- (void)updateLayoutMargins;
- (void)updateThumbnailWithResult:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;

@end
