/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
 */

@interface INDaemonConnection : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (bool)clearAllRegistrationDigestsWithError:(id*)arg1;
- (void)dealloc;
- (id)diagnosticReport;
- (id)iCloudServerOfferForAccount:(id)arg1 error:(id*)arg2;
- (id)iCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)init;
- (void)notifyDeviceStorageLevel:(long long)arg1 completion:(id /* block */)arg2;
- (bool)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 error:(id*)arg3;
- (bool)unregisterAccount:(id)arg1 fromiCloudNotificationsWithError:(id*)arg2;
- (void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 completion:(id /* block */)arg4;

@end
