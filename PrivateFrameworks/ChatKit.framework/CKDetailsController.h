/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsController : CKScrollViewController <CKAttachmentCollectionManagerDelegate, CKAvatarPickerViewControllerDelegate, CKBusinessInfoViewDelegate, CKDetailsAddGroupNameViewDelegate, CKDetailsContactsManagerDelegate, CKDetailsContactsTableViewCellDelegate, CKSharedAssetsControllerDelegate, CNAvatarViewDelegate, FMFMapViewControllerDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UIViewControllerPreviewingDelegate> {
    CKGroupRecipientSelectionController * _addRecipientsController;
    CKAttachmentCollectionManager * _attachmentCollectionManager;
    CKAvatarPickerViewController * _avatarPickerViewController;
    CKBusinessInfoView * _businessInfoView;
    CKDetailsContactsManager * _contactsManager;
    double  _contentOffsetYShiftAfterKeyboardNotification;
    CKConversation * _conversation;
    unsigned long long  _currentAssetType;
    UIViewController<CKSharedAssetsControllerProtocol> * _currentSharedAssetsViewController;
    <CKDetailsControllerDelegate> * _detailsControllerDelegate;
    bool  _fmfEnabled;
    bool  _fmfRestricted;
    NSTimer * _fmfUpdateTimer;
    CKDetailsGroupNameCell * _groupNameCell;
    bool  _isContactsSectionCollapsed;
    CKTranscriptDetailsResizableCell * _locationSendCell;
    CKDetailsLocationShareCell * _locationShareCell;
    UITextView * _locationSharingTextView;
    CKTranscriptDetailsResizableCell * _locationStartShareCell;
    CKDetailsMapViewCell * _mapViewCell;
    FMFMapViewController * _mapViewController;
    CKEntity * _presentedEntity;
    id  _selfWeakWrapper;
    CNContactStore * _suggestionsEnabledContactStore;
    CKDetailsTableView * _tableView;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) CKGroupRecipientSelectionController *addRecipientsController;
@property (nonatomic, retain) CKAttachmentCollectionManager *attachmentCollectionManager;
@property (nonatomic, retain) CKAvatarPickerViewController *avatarPickerViewController;
@property (nonatomic, retain) CKBusinessInfoView *businessInfoView;
@property (nonatomic, retain) CKDetailsContactsManager *contactsManager;
@property (nonatomic) double contentOffsetYShiftAfterKeyboardNotification;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) unsigned long long currentAssetType;
@property (nonatomic, retain) UIViewController<CKSharedAssetsControllerProtocol> *currentSharedAssetsViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CKDetailsControllerDelegate> *detailsControllerDelegate;
@property (nonatomic) bool fmfEnabled;
@property (nonatomic) bool fmfRestricted;
@property (nonatomic, retain) NSTimer *fmfUpdateTimer;
@property (nonatomic, retain) CKDetailsGroupNameCell *groupNameCell;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isContactsSectionCollapsed;
@property (nonatomic, retain) CKTranscriptDetailsResizableCell *locationSendCell;
@property (nonatomic, retain) CKDetailsLocationShareCell *locationShareCell;
@property (nonatomic, retain) UITextView *locationSharingTextView;
@property (nonatomic, retain) CKTranscriptDetailsResizableCell *locationStartShareCell;
@property (nonatomic, retain) CKDetailsMapViewCell *mapViewCell;
@property (nonatomic, retain) FMFMapViewController *mapViewController;
@property (nonatomic, retain) CKEntity *presentedEntity;
@property (nonatomic, retain) id selfWeakWrapper;
@property (nonatomic, retain) CNContactStore *suggestionsEnabledContactStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKDetailsTableView *tableView;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (bool)_canLeaveConversation;
- (void)_configureSeparatorForCell:(id)arg1 indexPath:(id)arg2;
- (bool)_fmfExpirationDateIsValid;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_handleKeyboardWillShowNotification:(id)arg1;
- (void)_presentRemoveRecipientSheetForHandle:(id)arg1 fromView:(id)arg2;
- (void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(bool)arg4;
- (void)_showContactCardForEntity:(id)arg1 fromView:(id)arg2;
- (void)_toggleSharingStateFromABCard;
- (id)addRecipientsController;
- (void)adjustContentOffsetReloadingSharedAssetsContentViewCell;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void*)annotationABRecordForHandle:(id)arg1;
- (id)annotationImageForHandle:(id)arg1;
- (void)assetsTabDidChange:(id)arg1;
- (id)attachmentCollectionManager;
- (void)attachmentCollectionManagerDidUpdateAttachmentItems:(id)arg1;
- (id)avatarPickerViewController;
- (void)avatarPickerViewControllerDidSelectEntity:(id)arg1;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)businessInfoFooterViewForSection:(long long)arg1;
- (id)businessInfoView;
- (void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2;
- (bool)canBecomeFirstResponder;
- (id)chatOptionsCellForIndexPath:(id)arg1;
- (id)childViewController:(id)arg1 cellForIndexPath:(id)arg2;
- (void)collapseContactsSection;
- (void)contactsCellDidTapFaceTimeVideoButton:(id)arg1;
- (void)contactsCellDidTapMessagesButton:(id)arg1;
- (void)contactsCellDidTapPhoneButton:(id)arg1;
- (id)contactsManager;
- (void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(bool)arg5;
- (id)contactsManagerCellForIndexPath:(id)arg1;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (double)contentOffsetYShiftAfterKeyboardNotification;
- (id)contentScrollView;
- (id)conversation;
- (bool)conversationHasLeft;
- (unsigned long long)currentAssetType;
- (id)currentSharedAssetsViewController;
- (id)currentlyActiveFMFDevice;
- (void)dealloc;
- (void)detailsAddGroupNameView:(id)arg1 didCommitGroupName:(id)arg2;
- (id)detailsControllerDelegate;
- (void)doNotDisturbValueChange:(id)arg1;
- (id)editConversationCellForIndexPath:(id)arg1;
- (void)expandContactsSection;
- (bool)fmfEnabled;
- (id)fmfHandlesFromIMHandles:(id)arg1;
- (bool)fmfRestricted;
- (id)fmfUpdateTimer;
- (id)fmfViewControllerCellForIndexPath:(id)arg1;
- (id)groupNameCell;
- (id)groupNameCellForIndexPath:(id)arg1;
- (void)handleActiveDeviceChanged:(id)arg1;
- (void)handleCancelAction:(id)arg1;
- (void)handleDoneAction:(id)arg1;
- (void)handleDoneButton:(id)arg1;
- (void)handleFriendshipStatusChanged:(id)arg1;
- (void)handleTapOnChromeAvatar:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (void)initializeBusinessInfoViewIfNecessary;
- (void)initializeLocationSharingTextViewIfNecessary;
- (void)initializeSharedAssetsViewControllerIfNecessary;
- (id)inputAccessoryViewController;
- (bool)isContactsSectionCollapsed;
- (bool)isContactsSectionCollapsible;
- (id)leaveCellForIndexPath:(id)arg1;
- (void)loadView;
- (id)locationFooterViewForSection:(long long)arg1;
- (id)locationSendCell;
- (id)locationShareCell;
- (id)locationShareCellForIndexPath:(id)arg1;
- (id)locationSharingTextView;
- (id)locationStartShareCell;
- (id)mapViewCell;
- (id)mapViewController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentFullFMFMapViewController;
- (void)presentGroupRecipientSelectionController;
- (void)presentLeaveActionSheetFromView:(id)arg1;
- (void)presentSharingActionSheetCurrentlySharing:(bool)arg1 fromView:(id)arg2;
- (id)presentedEntity;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)readReceiptsSwitchValueChanged:(id)arg1;
- (long long)rowForAddMemberCell;
- (long long)rowForShowMoreContactsCell;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)segmentedControlCellForIndexPath:(id)arg1;
- (id)selfWeakWrapper;
- (void)sendCurrentLocation;
- (void)setAddRecipientsController:(id)arg1;
- (void)setAttachmentCollectionManager:(id)arg1;
- (void)setAvatarPickerViewController:(id)arg1;
- (void)setBusinessInfoView:(id)arg1;
- (void)setContactsManager:(id)arg1;
- (void)setContentOffsetYShiftAfterKeyboardNotification:(double)arg1;
- (void)setConversation:(id)arg1;
- (void)setCurrentAssetType:(unsigned long long)arg1;
- (void)setCurrentSharedAssetsViewController:(id)arg1;
- (void)setDetailsControllerDelegate:(id)arg1;
- (void)setFmfEnabled:(bool)arg1;
- (void)setFmfRestricted:(bool)arg1;
- (void)setFmfUpdateTimer:(id)arg1;
- (void)setGroupNameCell:(id)arg1;
- (void)setIsContactsSectionCollapsed:(bool)arg1;
- (void)setLocationSendCell:(id)arg1;
- (void)setLocationShareCell:(id)arg1;
- (void)setLocationSharingTextView:(id)arg1;
- (void)setLocationStartShareCell:(id)arg1;
- (void)setMapViewCell:(id)arg1;
- (void)setMapViewController:(id)arg1;
- (void)setPresentedEntity:(id)arg1;
- (void)setSelfWeakWrapper:(id)arg1;
- (void)setSuggestionsEnabledContactStore:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (void)setupContactsManager;
- (void)setupFMF;
- (void)setupFMFTimerIfNecessary;
- (void)sharedAssetsController:(id)arg1 didDeleteAttachmentItems:(id)arg2;
- (void)sharedAssetsControllerContentSizeDidChange:(id)arg1;
- (id)sharedAssetsViewControllerCellForIndexPath:(id)arg1;
- (bool)shouldDisplayFooterForSection:(unsigned long long)arg1;
- (bool)shouldDisplayHeaderForSection:(unsigned long long)arg1;
- (bool)shouldShowActiveDeviceSwitchFooter;
- (bool)shouldShowBusinessInfoFooter;
- (bool)shouldShowEnhancedGroupFeatures;
- (bool)shouldShowFMFView;
- (bool)shouldShowGroupAddNameField;
- (void)showMapkitBusinessData;
- (id)suggestionsEnabledContactStore;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)updateTimedFMFState;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (long long)visibleContactsRows;
- (id)visualEffectView;

@end
