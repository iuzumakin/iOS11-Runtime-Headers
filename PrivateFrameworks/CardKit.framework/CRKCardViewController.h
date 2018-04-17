/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface CRKCardViewController : UIViewController <CRKCardSectionViewControllerDataSource, CRKCardSectionViewControllerDelegate, SearchUIFeedbackDelegate> {
    <CRCard> * _card;
    NSMutableArray * _cardSectionViewControllers;
    NSMapTable * _cardSectionsToCardSectionViewControllersMapTable;
    <CRKCardViewControllerDelegate> * _delegate;
    NSMapTable * _handledParametersForInteraction;
    bool  _indicatingActivity;
    bool  _loaded;
    NSMutableArray * _loadingCardSections;
    NSMutableArray * _pendingDismissalCommands;
    long long  _preferredPunchoutIndex;
    NSMutableArray * _tableCardSections;
}

@property (nonatomic, retain) <CRCard> *card;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKCardViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIndicatingActivity, nonatomic, readonly) bool indicatingActivity;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property long long preferredPunchoutIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) CRKComposedStackView *view;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

+ (void)_registerCardSectionViewControllers;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_addCardSectionViewControllersAsChildViewControllers:(id)arg1;
- (bool)_askDelegateToPerformReferentialCommand:(id)arg1;
- (void)_cancelTouchesIfNecessary;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)_configureCardSectionViewController:(id)arg1 forCardSection:(id)arg2;
- (void)_configureTableRowCardSections:(id)arg1;
- (long long)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg1;
- (long long)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg1 andTrailingCardSection:(id)arg2;
- (void)_finishLoading;
- (id)_generateCardViewAppearanceFeedback;
- (id)_initWithCard:(id)arg1;
- (id)_initWithCoder:(id)arg1;
- (id)_initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)_isActuallyVisible;
- (long long)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg1 andTrailingCardSectionViewController:(id)arg2;
- (id)_loadCardSectionViewControllerFromCardSection:(id)arg1;
- (void)_loadCardSectionViewControllersFromCard:(id)arg1;
- (void)_removeCardSectionViewControllersFromParentViewController:(id)arg1;
- (void)_resumeTouchesIfNecessary;
- (struct CGSize { double x1; double x2; })boundingSizeForCardSectionViewController:(id)arg1;
- (id)card;
- (void)cardSectionViewController:(id)arg1 didHandleParameters:(id)arg2 forInteraction:(id)arg3;
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (id)cardSectionViewController:(id)arg1 handledParametersForInteraction:(id)arg2;
- (id)cardSectionViewController:(id)arg1 interactionWithIdentifier:(id)arg2;
- (id)cardSectionViewController:(id)arg1 interfaceSectionsForInteraction:(id)arg2;
- (void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)cardSectionViewControllerBoundsDidChange:(id)arg1;
- (void)cardSectionViewControllerDidFinishLoading:(id)arg1;
- (void)cardSectionViewControllerShouldBeRemoved:(id)arg1;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (id)delegate;
- (void)didEngageCardSection:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)eventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)init;
- (id)initWithCard:(id)arg1 delegate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isIndicatingActivity;
- (bool)isLoading;
- (void)loadView;
- (bool)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
- (long long)preferredPunchoutIndex;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
- (void)setCard:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferredPunchoutIndex:(long long)arg1;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)_legacyCardSectionViewController;

@end
