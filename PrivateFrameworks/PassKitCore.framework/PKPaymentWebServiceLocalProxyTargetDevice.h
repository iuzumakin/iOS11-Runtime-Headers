/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceLocalProxyTargetDevice : NSObject <PKPaymentWebServiceArchiver, PKPaymentWebServiceTargetDeviceProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _handlerQueue;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateConnection;
- (id)_proxy;
- (id)_proxyWithErrorHandler:(id /* block */)arg1;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (id)bridgedClientInfo;
- (bool)claimSecureElementForCurrentUser;
- (id)connection;
- (id)context;
- (void)contextWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(id /* block */)arg3;
- (bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (id)secureElementIdentifiers;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (bool)supportsAutomaticPassPresentation;

@end
