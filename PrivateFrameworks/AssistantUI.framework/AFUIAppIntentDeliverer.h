/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIAppIntentDeliverer : NSObject {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSObject<OS_dispatch_group> * _assertionSetupGroup;
    AFWatchdogTimer * _assertionTimer;
    BKSProcessAssertion * _backgroundLaunchAssertion;
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    AFSafetyBlock * _requestCompletionBlock;
    AFWatchdogTimer * _requestTimer;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;

+ (id)alloc;

- (void).cxx_destruct;
- (void)_handleSuccessfulAppLaunchForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_invalidateAssertionTimer;
- (void)_invalidateBackboardServices;
- (void)_invalidateRequestTimer;
- (void)_processAssertionWasAcquired:(bool)arg1;
- (void)_processAssertionWasInvalidatedWithCompletion:(id /* block */)arg1;
- (void)_startRequestTimerWithCompletion:(id /* block */)arg1;
- (id)bundleIdentifier;
- (void)deliverIntent:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidateIntentDelivery;
- (void)processAssertionWasInvalidatedWithCompletion:(id /* block */)arg1;

@end
