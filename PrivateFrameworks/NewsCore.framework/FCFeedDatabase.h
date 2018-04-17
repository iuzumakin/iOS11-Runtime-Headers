/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedDatabase : NSObject <FCOperationThrottlerDelegate> {
    NSMutableDictionary * _cachedFeedsByID;
    long long  _endpoint;
    NSEntityDescription * _feedEntity;
    NSEntityDescription * _feedItemEntity;
    NSEntityDescription * _feedItemIndexEntity;
    NSEntityDescription * _feedSegmentEntity;
    NSObject<OS_dispatch_queue> * _initQueue;
    NSManagedObjectContext * _managedObjectContext;
    NSMutableSet * _modifiedFeedIDs;
    int  _nextFeedLookupID;
    NSURL * _parentDirectoryURL;
    NSPersistentStore * _persistentStore;
    <FCOperationThrottler> * _saveThrottler;
    long long  _usage;
    unsigned short  _version;
}

@property (nonatomic, retain) NSMutableDictionary *cachedFeedsByID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long endpoint;
@property (nonatomic, retain) NSEntityDescription *feedEntity;
@property (nonatomic, retain) NSEntityDescription *feedItemEntity;
@property (nonatomic, retain) NSEntityDescription *feedItemIndexEntity;
@property (nonatomic, retain) NSEntityDescription *feedSegmentEntity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *initQueue;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSMutableSet *modifiedFeedIDs;
@property (nonatomic) int nextFeedLookupID;
@property (nonatomic, readonly, copy) NSURL *parentDirectoryURL;
@property (nonatomic, retain) NSPersistentStore *persistentStore;
@property (nonatomic, retain) <FCOperationThrottler> *saveThrottler;
@property (readonly) Class superclass;
@property (nonatomic) long long usage;
@property (nonatomic) unsigned short version;

+ (unsigned short)currentFeedDatabaseVersion;
+ (void)initialize;
+ (id)temporaryFeedDatabase;

- (void).cxx_destruct;
- (id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2;
- (id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2 boundedByCount:(unsigned long long)arg3;
- (id)_feedsForLookups:(id)arg1;
- (void)_initMOC;
- (void)_performWithMOCAndWait:(id /* block */)arg1;
- (id)_serviceLookup:(id)arg1 withFeed:(id)arg2 feedItems:(id)arg3;
- (id)_shortCircuitLookup:(id)arg1 withFeed:(id)arg2;
- (id)cachedFeedsByID;
- (void)d_sanityCheckFeed:(id)arg1;
- (long long)endpoint;
- (id)feedEntity;
- (id)feedItemEntity;
- (id)feedItemIndexEntity;
- (id)feedSegmentEntity;
- (id)initQueue;
- (id)initWithParentDirectoryURL:(id)arg1 usage:(long long)arg2 endpoint:(long long)arg3;
- (id)managedObjectContext;
- (id)modifiedFeedIDs;
- (int)nextFeedLookupID;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (id)parentDirectoryURL;
- (id)performDatabaseLookups:(id)arg1;
- (id)performDatabaseLookups:(id)arg1 boundedByCount:(unsigned long long)arg2;
- (id)persistentStore;
- (void)saveFeedItems:(id)arg1 forFeedID:(id)arg2 insertionToken:(id)arg3 requestDate:(id)arg4 followingCKCursor:(id)arg5 reachedToOrder:(bool)arg6 extent:(unsigned long long)arg7 reachedEnd:(bool)arg8;
- (id)saveThrottler;
- (void)setCachedFeedsByID:(id)arg1;
- (void)setFeedEntity:(id)arg1;
- (void)setFeedItemEntity:(id)arg1;
- (void)setFeedItemIndexEntity:(id)arg1;
- (void)setFeedSegmentEntity:(id)arg1;
- (void)setInitQueue:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setModifiedFeedIDs:(id)arg1;
- (void)setNextFeedLookupID:(int)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setSaveThrottler:(id)arg1;
- (void)setUsage:(long long)arg1;
- (void)setVersion:(unsigned short)arg1;
- (void)teardown;
- (long long)usage;
- (unsigned short)version;

@end
