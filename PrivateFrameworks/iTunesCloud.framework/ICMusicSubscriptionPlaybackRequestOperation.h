/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ICStoreURLRequest * _activeURLRequest;
    NSString * _assetSourceStorefrontID;
    NSString * _cloudUniversalLibraryID;
    bool  _delegatedPlayback;
    NSString * _householdID;
    ICStoreRequestContext * _requestContext;
    long long  _requestType;
    id /* block */  _responseHandler;
    unsigned long long  _storeCloudID;
    long long  _storePurchasedAdamID;
    long long  _storeSubscriptionAdamID;
    id /* block */  _willBeginExecutionHandler;
}

@property (nonatomic, copy) NSString *assetSourceStorefrontID;
@property (nonatomic, copy) NSString *cloudUniversalLibraryID;
@property (getter=isDelegatedPlayback, nonatomic) bool delegatedPlayback;
@property (nonatomic, copy) NSString *householdID;
@property (nonatomic, copy) ICStoreRequestContext *requestContext;
@property (nonatomic) long long requestType;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic, copy) id /* block */ willBeginExecutionHandler;

- (void).cxx_destruct;
- (id)assetSourceStorefrontID;
- (void)cancel;
- (id)cloudUniversalLibraryID;
- (id)householdID;
- (id)init;
- (bool)isDelegatedPlayback;
- (id)requestContext;
- (long long)requestType;
- (id /* block */)responseHandler;
- (void)setAssetSourceStorefrontID:(id)arg1;
- (void)setCloudUniversalLibraryID:(id)arg1;
- (void)setDelegatedPlayback:(bool)arg1;
- (void)setHouseholdID:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setStoreCloudID:(unsigned long long)arg1;
- (void)setStorePurchasedAdamID:(long long)arg1;
- (void)setStoreSubscriptionAdamID:(long long)arg1;
- (void)setWillBeginExecutionHandler:(id /* block */)arg1;
- (void)start;
- (unsigned long long)storeCloudID;
- (long long)storePurchasedAdamID;
- (long long)storeSubscriptionAdamID;
- (id /* block */)willBeginExecutionHandler;

@end
