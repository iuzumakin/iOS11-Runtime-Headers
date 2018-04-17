/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPeerPaymentMessagesTransactionsManager : NSObject <PKPaymentServiceDelegate> {
    PKPaymentService * _paymentService;
    NSMutableDictionary * _paymentStatus;
    NSObject<OS_dispatch_queue> * _peerPaymentPassQueue;
    NSString * _peerPaymentPassUniqueID;
    NSMutableSet * _peerPaymentTransactions;
    NSObject<OS_dispatch_queue> * _transactionsQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentService *paymentService;
@property (nonatomic, readonly) NSMutableDictionary *paymentStatus;
@property (copy) NSString *peerPaymentPassUniqueID;
@property (nonatomic, retain) NSMutableSet *peerPaymentTransactions;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_fetchAllPeerPaymentTransactionsWithPeerPaymentPassID:(id)arg1;
- (void)_transactionsQueue_NotifyStatusUpdateOfTransactionWithServiceIdentifier:(id)arg1 status:(unsigned long long)arg2;
- (id)_transactionsQueue_PeerPaymentTransactionWithServiceIdentifier:(id)arg1;
- (void)_transactionsQueue_RemoveStatusForPeerPaymentTransactionWithServiceIdentifier:(id)arg1 notifyUpdate:(bool)arg2;
- (void)_transactionsQueue_SetStatus:(unsigned long long)arg1 forPaymentTransactionWithServiceIdentifier:(id)arg2 notifyUpdate:(bool)arg3;
- (void)dealloc;
- (id)initWithPeerPaymentPassUniqueID:(id)arg1;
- (id)initWithPeerPaymentPassUniqueID:(id)arg1 paymentService:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (id)paymentService;
- (id)paymentStatus;
- (id)peerPaymentPassUniqueID;
- (id)peerPaymentTransactionWithServiceIdentifier:(id)arg1;
- (id)peerPaymentTransactions;
- (void)setPeerPaymentPassUniqueID:(id)arg1;
- (void)setPeerPaymentTransactions:(id)arg1;
- (void)setStatus:(unsigned long long)arg1 forPaymentTransactionWithServiceIdentifier:(id)arg2;
- (unsigned long long)statusOfPaymentTransactionWithServiceIdentifier:(id)arg1;

@end
