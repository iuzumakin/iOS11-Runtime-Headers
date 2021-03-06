/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElement : NSObject <NFHardwareEventListener, NFRemoteAdminEventListener> {
    bool  _deletingAllApplets;
    NSObject<OS_dispatch_queue> * _deletingAllAppletsPropertyConcurrentQueue;
    NSObject<OS_dispatch_source> * _deletingAllAppletsTimer;
    NSObject<OS_dispatch_queue> * _deletingAllAppletsTimerConcurrentQueue;
    NSHashTable * _observers;
    NSLock * _observersLock;
    id /* block */  _pairingChangeHandler;
    NSMutableArray * _prioritySessionAccessHandlers;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NFSecureElement * _secureElement;
    NSArray * _secureElementArray;
    id /* block */  _secureElementSessionPostlude;
    id /* block */  _secureElementSessionPrelude;
    NSMutableArray * _sessionAccessHandlers;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    bool  _startingPrioritySession;
    bool  _startingSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long hardwareVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDeletingAllApplets;
@property (nonatomic, readonly) bool isInRestrictedMode;
@property (nonatomic, readonly) bool isOwnable;
@property (nonatomic, readonly) bool isProductionSigned;
@property (nonatomic, readonly) NSUUID *ownerUserUUID;
@property (nonatomic, readonly) NSNumber *primaryJSBLSequenceCounter;
@property (nonatomic, readonly) NSString *primaryRegionTopic;
@property (nonatomic, readonly) NSString *primarySecureElementIdentifier;
@property (nonatomic, readonly) NSArray *secureElementIdentifiers;
@property (nonatomic, copy) id /* block */ secureElementSessionPostlude;
@property (nonatomic, copy) id /* block */ secureElementSessionPrelude;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedTechnologies;

+ (id)primarySecureElementIdentifier;
+ (id)secureElementIdentifiers;

- (void).cxx_destruct;
- (void)SEPPairingInfoWithCompletion:(id /* block */)arg1;
- (void)_accessSecureElementManagerSessionWithPriority:(bool)arg1 handler:(id /* block */)arg2;
- (void)_executeSecureElementSessionHandlersWithPriority:(bool)arg1 session:(id)arg2;
- (void)_registerPairingChangeHandler;
- (void)accessPrioritySecureElementManagerSessionWithHandler:(id /* block */)arg1;
- (void)accessSecureElementManagerSessionWithHandler:(id /* block */)arg1;
- (void)allAppletsWithCompletion:(id /* block */)arg1;
- (void)appletWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)connectToServerWithPushTopic:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (unsigned long long)hardwareVersion;
- (id)init;
- (void)initializeSecureElementQueuingServerConnection:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)isDeletingAllApplets;
- (bool)isInRestrictedMode;
- (bool)isOwnable;
- (bool)isProductionSigned;
- (void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg1 completion:(id /* block */)arg2;
- (void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(id /* block */)arg2;
- (void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(id /* block */)arg2;
- (id)ownerUserUUID;
- (unsigned long long)ownershipStateForUserUUID:(id)arg1;
- (void)pairingStateWithCompletion:(id /* block */)arg1;
- (void)peerPaymentEnrollmentDataWithAlternateDSID:(id)arg1 completion:(id /* block */)arg2;
- (id)primaryJSBLSequenceCounter;
- (id)primaryRegionTopic;
- (id)primarySecureElementIdentifier;
- (bool)queueConnectionToSeverForAppletIdentifiers:(id)arg1;
- (bool)queueConnectionToSeverWithPushTopic:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)remoteAdminCleanupProgress:(double)arg1;
- (void)secureElement:(id)arg1 didChangeRestrictedMode:(bool)arg2;
- (id)secureElementIdentifiers;
- (id /* block */)secureElementSessionPostlude;
- (id /* block */)secureElementSessionPrelude;
- (bool)setOwnerUserUUID:(id)arg1 keybagUUID:(id)arg2;
- (bool)setRegistrationInformation:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)setSecureElementSessionPostlude:(id /* block */)arg1;
- (void)setSecureElementSessionPrelude:(id /* block */)arg1;
- (void)signChallenge:(id)arg1 forPaymentApplication:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)signChallenge:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)signatureForAuthToken:(id)arg1 completion:(id /* block */)arg2;
- (void)signedPlatformDataWithCompletion:(id /* block */)arg1;
- (void)stateInformationWithCompletion:(id /* block */)arg1;
- (unsigned long long)supportedTechnologies;
- (bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (void)unregisterObserver:(id)arg1;

@end
