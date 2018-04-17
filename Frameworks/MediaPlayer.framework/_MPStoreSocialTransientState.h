/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPStoreSocialTransientState : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    id /* block */  _completionBlock;
    long long  _followPendingRequestState;
    long long  _followState;
    MPStoreSocialRequestOperation * _latestFollowOperation;
    MPStoreSocialRequestOperation * _latestFollowPendingRequestOperation;
    MPModelSocialPerson * _person;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) long long followPendingRequestState;
@property (nonatomic, readonly) long long followState;
@property (nonatomic, readonly) MPModelSocialPerson *person;

- (void).cxx_destruct;
- (void)_endIfNeeded;
- (id /* block */)completionBlock;
- (long long)followPendingRequestState;
- (long long)followState;
- (unsigned long long)hash;
- (id)initWithPerson:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)newOperationForTransientFollowPendingRequestState:(long long)arg1 completion:(id /* block */)arg2;
- (id)newOperationForTransientFollowState:(long long)arg1 completion:(id /* block */)arg2;
- (id)person;
- (void)setCompletionBlock:(id /* block */)arg1;

@end
