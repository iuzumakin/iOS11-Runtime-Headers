/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagController : NSObject <FCAppConfigurationObserving, FCOperationThrottlerDelegate, FCTagsFetchOperationDelegate> {
    FCAppConfigurationManager * _appConfigurationManager;
    FCAssetManager * _assetManager;
    FCCKContentDatabase * _contentDatabase;
    NSCache * _fastCache;
    NSMutableDictionary * _prefetchedTags;
    FCOperationThrottler * _tagPrefetchThrottler;
    FCTagRecordSource * _tagRecordSource;
}

@property (nonatomic, retain) FCAppConfigurationManager *appConfigurationManager;
@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, retain) FCCKContentDatabase *contentDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *fastCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *prefetchedTags;
@property (nonatomic) bool shouldPrefetchGlobalTags;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCOperationThrottler *tagPrefetchThrottler;
@property (nonatomic, retain) FCTagRecordSource *tagRecordSource;

+ (bool)isTagAllowed:(id)arg1;
+ (bool)isTagAllowedInContentStoreFront:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedTagForTagID:(id)arg1 fastCacheOnly:(bool)arg2;
- (id)_cachedTagsForTagIDs:(id)arg1 fastCacheOnly:(bool)arg2;
- (void)_fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_refreshTagsBasedOnAgeForTagIDs:(id)arg1;
- (void)appConfigurationDidChange:(id)arg1;
- (id)appConfigurationManager;
- (id)assetManager;
- (id)contentDatabase;
- (void)dealloc;
- (id)expectedFastCachedTagForID:(id)arg1;
- (id)fastCache;
- (id)fastCachedTagForID:(id)arg1;
- (id)fastCachedTagsForIDs:(id)arg1;
- (id)fetchOperationForTagsWithIDs:(id)arg1;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeChildren:(bool)arg2;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeParents:(bool)arg2;
- (void)fetchTagForTagID:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchTagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithContentDatabase:(id)arg1 assetManager:(id)arg2 tagRecordSource:(id)arg3 appConfigurationManager:(id)arg4;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (id)prefetchedTags;
- (void)saveTagsToCache:(id)arg1;
- (void)setAppConfigurationManager:(id)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setContentDatabase:(id)arg1;
- (void)setFastCache:(id)arg1;
- (void)setPrefetchedTags:(id)arg1;
- (void)setShouldPrefetchGlobalTags:(bool)arg1;
- (void)setTagPrefetchThrottler:(id)arg1;
- (void)setTagRecordSource:(id)arg1;
- (bool)shouldPrefetchGlobalTags;
- (id)slowCachedTagForID:(id)arg1;
- (id)slowCachedTagsForIDs:(id)arg1;
- (id)tagPrefetchThrottler;
- (id)tagRecordSource;
- (void)tagsFetchOperation:(id)arg1 didFetchTags:(id)arg2;
- (id)tagsForTagIDs:(id)arg1;
- (id)tagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 predicate:(id /* block */)arg3;
- (id)tagsForTagIDs:(id)arg1 predicate:(id /* block */)arg2;

@end
