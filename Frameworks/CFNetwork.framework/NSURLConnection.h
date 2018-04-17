/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLConnectionInternal * _internal;
}

@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NKAssetDownload *newsstandAssetDownload;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (void)_collectTimingDataWithOptions:(unsigned long long)arg1;
+ (bool)_collectsTimingData;
+ (void)_resourceLoadLoop:(id)arg1;
+ (void)_setCollectsTimingData:(bool)arg1;
+ (void)_setLoaderThreadPriority:(int)arg1;
+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;
+ (void)_setSweeperInterval:(unsigned long long)arg1;
+ (unsigned long long)_sweeperInterval;
+ (unsigned long long)_timingDataOptions;
+ (bool)canHandleRequest:(id)arg1;
+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
+ (struct __CFRunLoop { }*)resourceLoaderRunLoop;
+ (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3;

- (id)_cfInternal;
- (id)_dlInternal;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(bool)arg3 maxContentLength:(long long)arg4 startImmediately:(bool)arg5 connectionProperties:(id)arg6;
- (void)_reportTimingDataToAWD;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (id)_timingData;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (id)connectionProperties;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)currentRequest;
- (void)dealloc;
- (bool)defersCallbacks;
- (id)description;
- (void)download;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(bool)arg3;
- (id)originalRequest;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDefersCallbacks:(bool)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)start;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

// Image: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit

- (id)newsstandAssetDownload;

// Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection

+ (id)pcdeprecated_connectionWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(bool)arg3 maxContentLength:(long long)arg4 startImmediately:(bool)arg5 connectionProperties:(id)arg6;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;

@end
