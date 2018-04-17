/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYSession : NSObject <SYChangeSerializer, SYStateLoggable> {
    double  _birthDate;
    unsigned long long  _bytesTransferred;
    unsigned long long  _changeCount;
    <SYSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSError * _error;
    double  _fullSessionTimeout;
    NSString * _identifier;
    bool  _inTransaction;
    bool  _isSending;
    long long  _maxConcurrentMessages;
    NSDictionary * _options;
    NSMutableDictionary * _peerGenerationIDs;
    NSMutableSet * _pendingMessageIDs;
    double  _perMessageTimeout;
    long long  _priority;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _reason;
    bool  _rejectedNewSessionFromSamePeer;
    <SYChangeSerializer> * _serializer;
    SYService * _service;
    NSDictionary * _sessionMetadata;
    unsigned long long  _sessionSignpost;
    bool  _sessionStarted;
    struct NSMutableDictionary { Class x1; } * _stateResponders;
    NSDictionary * _userContext;
}

@property (nonatomic) double birthDate;
@property (nonatomic, readonly) unsigned long long bytesTransferred;
@property bool canRestart;
@property bool canRollback;
@property (nonatomic, readonly) unsigned long long changeCount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SYSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) double fullSessionTimeout;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) bool isResetSync;
@property (nonatomic, readonly) bool isSending;
@property (nonatomic) long long maxConcurrentMessages;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, copy) NSMutableDictionary *peerGenerationIDs;
@property (nonatomic) double perMessageTimeout;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) unsigned long long protocolVersion;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, readonly) double remainingSessionTime;
@property (nonatomic, retain) <SYChangeSerializer> *serializer;
@property (nonatomic, readonly) SYService *service;
@property (nonatomic, copy) NSDictionary *sessionMetadata;
@property (nonatomic) unsigned long long sessionSignpost;
@property long long state;
@property (nonatomic, readonly) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, retain) NSDictionary *userContext;
@property (readonly) bool wasCancelled;
@property (nonatomic, readonly) NSDictionary *wrappedUserContext;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (id)CPSafeDescription;
- (bool)_beginTransaction;
- (id)_cancelPendingMessagesReturningFailures;
- (void)_clearOutgoingMessageUUID:(id)arg1;
- (void)_continue;
- (bool)_endTransaction;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (bool)_handleEndSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleError:(id)arg1;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (bool)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2;
- (bool)_handleStartSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (bool)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2;
- (void)_onSessionStateChangedTo:(long long)arg1 do:(id /* block */)arg2;
- (void)_pause;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (bool)_readyToProcessIncomingMessages;
- (void)_recordOutgoingMessageUUID:(id)arg1;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_setStateQuietly:(long long)arg1;
- (void)_supercededWithSession:(id)arg1;
- (bool)_willAcquiesceToNewSessionFromPeer:(id)arg1;
- (double)birthDate;
- (unsigned long long)bytesTransferred;
- (bool)canRestart;
- (bool)canRollback;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (unsigned long long)changeCount;
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;
- (id)combinedEngineOptions:(id)arg1;
- (id)dataFromChange:(id)arg1;
- (void)dealloc;
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
- (id)delegate;
- (void)didCompleteSession;
- (void)didStartSession;
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;
- (id)error;
- (double)fullSessionTimeout;
- (bool)hasRejectedPeerSession;
- (id)identifier;
- (id)initWithService:(id)arg1;
- (bool)isResetSync;
- (bool)isSending;
- (long long)maxConcurrentMessages;
- (id)options;
- (id)peerGenerationIDs;
- (double)perMessageTimeout;
- (long long)priority;
- (unsigned long long)protocolVersion;
- (id)queue;
- (id)reason;
- (double)remainingSessionTime;
- (id)serializer;
- (id)service;
- (id)sessionMetadata;
- (unsigned long long)sessionSignpost;
- (void)setBirthDate:(double)arg1;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFullSessionTimeout:(double)arg1;
- (void)setHasRejectedPeerSession:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaxConcurrentMessages:(long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setPeerGenerationIDs:(id)arg1;
- (void)setPerMessageTimeout:(double)arg1;
- (void)setPriority:(long long)arg1;
- (void)setReason:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSessionMetadata:(id)arg1;
- (void)setSessionSignpost:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setUserContext:(id)arg1;
- (void)start:(id /* block */)arg1;
- (long long)state;
- (id)stateForLogging;
- (id)stateResponders;
- (id)targetQueue;
- (id)userContext;
- (bool)wasCancelled;
- (id)wrappedUserContext;

@end
