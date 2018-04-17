/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject> {
    HMDDevice * _currentDevice;
    HMDRemoteIdentityRegistry * _identityRegistry;
    bool  _idle;
    NSDate * _lastActivity;
    NSNumber * _maximumRemoteStreams;
    HMDAWDRemoteSessionMetric * _metric;
    bool  _open;
    HMDUser * _peer;
    HMDDevice * _peerDevice;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    long long  _qualityOfService;
    HMDSecureRemoteStreamInternal * _remoteSession;
    long long  _role;
    NSUUID * _sessionID;
    bool  _supportsSharedIdentities;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDDevice *currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDRemoteIdentityRegistry *identityRegistry;
@property (getter=isIdle) bool idle;
@property (readonly, copy) NSDate *lastActivity;
@property (readonly, copy) NSNumber *maximumRemoteStreams;
@property (nonatomic, readonly) HMDAWDRemoteSessionMetric *metric;
@property (getter=isOpen) bool open;
@property (nonatomic, retain) HMDUser *peer;
@property (nonatomic, readonly) HMDDevice *peerDevice;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property long long qualityOfService;
@property (nonatomic, retain) HMDSecureRemoteStreamInternal *remoteSession;
@property (readonly) long long role;
@property (nonatomic, readonly, copy) NSUUID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsSharedIdentities;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_configureWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)closedWithError:(id)arg1;
- (id)currentDevice;
- (void)dealloc;
- (void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)handleSecureMessage:(id)arg1 fromTransport:(id)arg2;
- (id)identityRegistry;
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 identityRegistry:(id)arg3 clientMode:(bool)arg4 sessionID:(id)arg5;
- (bool)isIdle;
- (bool)isOpen;
- (id)lastActivity;
- (id)logIdentifier;
- (id)maximumRemoteStreams;
- (id)metric;
- (void)notifyClientsUpdatedIdle:(bool)arg1;
- (id)peer;
- (id)peerDevice;
- (id)propertyDescription;
- (id)propertyQueue;
- (long long)qualityOfService;
- (id)remoteSession;
- (long long)role;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sessionID;
- (void)setIdentityRegistry:(id)arg1;
- (void)setIdle:(bool)arg1;
- (void)setMaximumRemoteStreams:(id)arg1;
- (void)setOpen:(bool)arg1;
- (void)setPeer:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRemoteSession:(id)arg1;
- (void)setSupportsSharedIdentities:(bool)arg1;
- (id)shortDescription;
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (bool)supportsSharedIdentities;
- (id)workQueue;

@end
