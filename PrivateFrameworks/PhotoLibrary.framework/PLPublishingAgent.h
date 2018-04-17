/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate> {
    bool  _allowsHDOver3GUpload;
    long long  _approximateHDUploadSize;
    long long  _approximateSDUploadSize;
    double  _changeRate;
    SEL  _completionSelector;
    long long  _currentValue;
    id  _delegate;
    bool  _deleteAfterPublishing;
    bool  _enableHDUpload;
    double  _endTime;
    double  _estimatedTimeRemaining;
    long long  _maxValue;
    NSData * _mediaData;
    bool  _mediaIsHDVideo;
    NSString * _mediaPath;
    NSString * _mimeType;
    bool  _needsRemaking;
    bool  _needsTrimming;
    long long  _normalizedCurrentValue;
    long long  _normalizedMaxValue;
    bool  _ownerIsCamera;
    float  _percentComplete;
    float  _progressMultiplier;
    unsigned int  _publishing;
    PLVideoRemaker * _remaker;
    int  _remakerMode;
    unsigned int  _remaking;
    float  _remakingPercentComplete;
    unsigned int  _remakingWasCancelled;
    int  _selectedOption;
    bool  _shouldCancelPublish;
    NSMutableArray * _snapshotTimes;
    NSMutableArray * _snapshotValues;
    double  _startTime;
    id  _userInfo;
}

@property (nonatomic, readonly) bool allowsCellularAccessForRequests;
@property (nonatomic) bool allowsHDOver3GUpload;
@property (nonatomic) long long approximateHDUploadSize;
@property (nonatomic) long long approximateSDUploadSize;
@property (nonatomic) <PLPublishingAgentDelegate> *delegate;
@property (nonatomic) bool enableHDUpload;
@property (nonatomic) bool mediaIsHDVideo;
@property (nonatomic) bool needsTrimming;
@property (nonatomic) bool ownerIsCamera;
@property (nonatomic) float progressMultiplier;
@property (nonatomic) int remakerMode;
@property (nonatomic) int selectedOption;
@property (nonatomic) bool shouldCancelPublish;

+ (bool)canUploadHDVideoOverCellular;
+ (id)publishingAgentForBundleNamed:(id)arg1 toPublishMedia:(id)arg2;

- (void)_agentIsReadyToPublish:(id)arg1;
- (void)_cancelRemaking:(id)arg1;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_remakerDidFinish:(id)arg1;
- (int)_remakerModeForSelectedOption;
- (void)_setApproximateVideoUploadSizes;
- (void)_setUpPublishingParams;
- (void)_startNetworkObservation;
- (void)_stopNetworkObservation;
- (void)_transcodeVideo:(id)arg1;
- (void)_updateStatisticsFromSnapshots;
- (bool)allowsCellularAccessForRequests;
- (bool)allowsHDOver3GUpload;
- (bool)allowsTellingFriend;
- (bool)allowsViewingOnHost;
- (long long)approximateHDUploadSize;
- (long long)approximateSDUploadSize;
- (void)cancelButtonClicked;
- (void)cancelRemaking;
- (void)dataArrayInputStreamBytesWereRead:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)deleteMediaFileAfterPublishing;
- (void)dismiss;
- (void)doneButtonClicked;
- (bool)enableHDUpload;
- (double)estimatedTimeRemaining;
- (id)initWithMedia:(id)arg1;
- (bool)isPublishing;
- (bool)isRemaking;
- (bool)isVideoMedia;
- (double)maximumVideoDuration;
- (id)mediaData;
- (bool)mediaIsHDVideo;
- (id)mediaPath;
- (id)mediaTitle;
- (id)mediaURL;
- (id)navigationController;
- (bool)needsTrimming;
- (bool)ownerIsCamera;
- (float)percentComplete;
- (void)presentModalSheetInViewController:(id)arg1;
- (float)progressMultiplier;
- (id)progressViewMessageDuringRemake;
- (void)publish;
- (int)remakerMode;
- (float)remakingPercentComplete;
- (void)resignPublishingSheetResponders;
- (int)selectedOption;
- (id)serviceName;
- (void)setAllowsHDOver3GUpload:(bool)arg1;
- (void)setApproximateHDUploadSize:(long long)arg1;
- (void)setApproximateSDUploadSize:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteMediaFileAfterPublishing:(bool)arg1;
- (void)setEnableHDUpload:(bool)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaIsHDVideo:(bool)arg1;
- (void)setMediaPath:(id)arg1;
- (void)setNeedsTrimming:(bool)arg1;
- (void)setOwnerIsCamera:(bool)arg1;
- (void)setProgressMultiplier:(float)arg1;
- (void)setPublishing:(bool)arg1;
- (void)setRemakerMode:(int)arg1;
- (void)setSelectedOption:(int)arg1;
- (void)setShouldCancelPublish:(bool)arg1;
- (void)setTotalBytesWritten:(long long)arg1 totalBytes:(long long)arg2;
- (void)setTrimStartTime:(double)arg1 andEndTime:(double)arg2;
- (void)setUserInfo:(id)arg1;
- (bool)shouldCancelPublish;
- (void)showAlertWithError:(id)arg1;
- (void)snapshot;
- (id)tellAFriendBody;
- (id)tellAFriendSubject;
- (id)tellAFriendURL;
- (id)userInfo;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)willDismiss;

@end
