/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSASConnection : NSObject <XPCNSClientConnectionDelegate> {
    XPCNSClientConnection * _connection;
    NSMutableDictionary * _focusAlbumGUIDByPersonID;
    NSMutableDictionary * _focusAlbumTimerByPersonID;
    NSMutableDictionary * _foregroundPingTimerContextByPersonID;
    NSObject<OS_dispatch_queue> * _memberQueue;
    XPCNSClientConnection * _noWakeConnection;
    NSMutableDictionary * _serverSideConfigurationDictionaryByPersonID;
}

@property (nonatomic, retain) XPCNSClientConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *focusAlbumGUIDByPersonID;
@property (nonatomic, retain) NSMutableDictionary *focusAlbumTimerByPersonID;
@property (nonatomic, retain) NSMutableDictionary *foregroundPingTimerContextByPersonID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) XPCNSClientConnection *noWakeConnection;
@property (nonatomic, retain) NSMutableDictionary *serverSideConfigurationDictionaryByPersonID;
@property (readonly) Class superclass;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)XPCNSClientConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (id)_cloneArray:(id)arg1;
- (id)_communicationFailureError;
- (void)_sendMessageReliably:(id)arg1;
- (void)_sendMessageReliably:(id)arg1 data:(id)arg2 successHandler:(id /* block */)arg3 failureHandler:(id /* block */)arg4;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)accessControlGUIDsForAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)accessControlWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)activityIsThrottledByLackOfDiskSpacePersonID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addAlbum:(id)arg1 personID:(id)arg2;
- (void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)albumGUIDsForPersonID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)albumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)assetCollectionGUIDsInAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)assetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)assetsInDownloadQueueCountForPersonID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelActivitiesForPersonID:(id)arg1;
- (void)commentGUIDsForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)commentWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)connection;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (id)focusAlbumGUIDByPersonID;
- (id)focusAlbumTimerByPersonID;
- (id)foregroundPingTimerContextByPersonID;
- (void)forgetEverythingAboutPersonID:(id)arg1;
- (void)handlePushNotificationForPersonID:(id)arg1;
- (id)init;
- (void)invitationGUIDsForPersonID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)invitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)isAssetCollectionWithGUID:(id)arg1 markedAsUnviewedPersonID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)isBusyCompletionBlock:(id /* block */)arg1;
- (void)isInRetryStateHandler:(id /* block */)arg1;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(bool)arg3 info:(id)arg4;
- (void)markAsSpamAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)markAsSpamInvitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)markAsSpamInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (id)memberQueue;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)nextActivityDateHandler:(id /* block */)arg1;
- (id)noWakeConnection;
- (void)pingForeground;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshResetSync:(bool)arg1 personID:(id)arg2;
- (void)refreshResetSync:(bool)arg1 personID:(id)arg2 info:(id)arg3;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3;
- (void)retryOutstandingActivities;
- (void)retryOutstandingActivitiesForPersonID:(id)arg1;
- (id)serverSideConfigurationDictionaryByPersonID;
- (void)serverSideConfigurationDictionaryForPersonID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setFocusAlbum:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAlbumGUIDByPersonID:(id)arg1;
- (void)setFocusAlbumTimerByPersonID:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setForegroundPingTimerContextByPersonID:(id)arg1;
- (void)setIsUIForeground:(bool)arg1 forPersonID:(id)arg2;
- (void)setMemberQueue:(id)arg1;
- (void)setMultipleContributorsEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setMultipleContributorsEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setNoWakeConnection:(id)arg1;
- (void)setPublicAccessEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setPublicAccessEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setServerSideConfigurationDictionaryByPersonID:(id)arg1;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)timerPingQueueForegroundPingTimerExpiredContext:(id)arg1 personID:(id)arg2;
- (void)timerPingQueueSendSetUIForeground:(bool)arg1 personID:(id)arg2;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)videoURLForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(unsigned long long)arg2 personID:(id)arg3 completionBlock:(id /* block */)arg4;

@end
