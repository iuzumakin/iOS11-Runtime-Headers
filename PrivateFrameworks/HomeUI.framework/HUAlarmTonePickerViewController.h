/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAlarmTonePickerViewController : UITableViewController <MPMediaPickerControllerDelegate> {
    NSIndexPath * _currentlySelectedIndexPath;
    <HUAlarmTonePickerDelegate> * _delegate;
    NSString * _loggedInAppleMusicAccountDSID;
    NSMutableArray * _mediaItemIdentifiers;
    MPMediaPickerController * _mediaPickerController;
    NSNumber * _selectedMediaIdentifier;
    NSString * _selectedToneIdentifier;
    NSMutableArray * _toneIdentifiers;
    HUAlarmTonesManager * _toneManager;
}

@property (nonatomic, copy) NSIndexPath *currentlySelectedIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultToneIdentifier;
@property (nonatomic) <HUAlarmTonePickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *loggedInAppleMusicAccountDSID;
@property (nonatomic, readonly) NSMutableArray *mediaItemIdentifiers;
@property (nonatomic, readonly) MPMediaPickerController *mediaPickerController;
@property (nonatomic, copy) NSNumber *selectedMediaIdentifier;
@property (nonatomic, copy) NSString *selectedToneIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *toneIdentifiers;
@property (nonatomic, readonly) HUAlarmTonesManager *toneManager;

- (void).cxx_destruct;
- (bool)_isPickSongIndexPath:(id)arg1;
- (id)_mediaItemForIndexPath:(id)arg1;
- (void)_playMediaAtIndexPath:(id)arg1;
- (void)_playMediaItemWithIdentifier:(id)arg1;
- (void)_playToneWithIdentifier:(id)arg1;
- (id)_titleForItemAtIndexPath:(id)arg1;
- (id)_toneIdentifierForIndexPath:(id)arg1;
- (void)_updateWithToneIdentifier:(id)arg1 mediaIdentifier:(id)arg2 notifyDelegate:(bool)arg3;
- (void)addMediaItems:(id)arg1;
- (id)currentlySelectedIndexPath;
- (void)dealloc;
- (id)defaultToneIdentifier;
- (id)delegate;
- (id)initWithLoggedInAppleMusicAccountDSID:(id)arg1;
- (id)loggedInAppleMusicAccountDSID;
- (id)mediaItemIdentifiers;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (id)mediaPickerController;
- (void)mediaPickerDidCancel:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedMediaIdentifier;
- (id)selectedToneIdentifier;
- (void)setCurrentlySelectedIndexPath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedMediaIdentifier:(id)arg1;
- (void)setSelectedToneIdentifier:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)toneIdentifiers;
- (id)toneManager;
- (void)viewDidLoad;

@end
