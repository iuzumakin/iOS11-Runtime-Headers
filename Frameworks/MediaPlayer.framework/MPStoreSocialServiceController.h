/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreSocialServiceController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSOperationQueue * _operationQueue;
    NSMutableSet * _transientStates;
}

+ (id)_internalErrorForHTTPResponseCode:(long long)arg1;

- (void).cxx_destruct;
- (void)_handleTransientStateForPersonDidChangeNotification:(id)arg1;
- (void)_notifyTransientStatesDidChangeWithSnapshot:(id)arg1;
- (void)_performTransientFollowPendingRequestState:(long long)arg1 onPerson:(id)arg2 completion:(id /* block */)arg3;
- (void)_performTransientFollowState:(long long)arg1 onPerson:(id)arg2 completion:(id /* block */)arg3;
- (void)_populateTransientStatesSnapshot:(id)arg1;
- (void)_queue_transientStatesDidChange;
- (id)_transientStateForPerson:(id)arg1 shouldCreate:(bool)arg2;
- (void)_transientStatesDidChange;
- (void)acceptAllFollowRequestsWithCompletion:(id /* block */)arg1;
- (void)acceptFollowRequestFromPerson:(id)arg1 completion:(id /* block */)arg2;
- (void)blockPerson:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelFollowRequestOnPerson:(id)arg1 completion:(id /* block */)arg2;
- (void)declineFollowRequestFromPerson:(id)arg1 completion:(id /* block */)arg2;
- (void)followPerson:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)requestFollowPerson:(id)arg1 completion:(id /* block */)arg2;
- (long long)transientFollowPendingRequestStateForPerson:(id)arg1;
- (long long)transientFollowStateForPerson:(id)arg1;
- (void)unblockPerson:(id)arg1 completion:(id /* block */)arg2;
- (void)unfollowPerson:(id)arg1 completion:(id /* block */)arg2;

@end
