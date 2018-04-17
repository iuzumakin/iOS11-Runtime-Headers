/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface C2Session : NSObject <C2RequestDelegate, C2SessionDelegate, C2SessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate> {
    unsigned long long  _creatingTaskCounter;
    double  _emptyTimestamp;
    unsigned char  _isComplete;
    C2RequestOptions * _options;
    NSOperationQueue * _queue;
    NSURLSession * _session;
    <C2SessionDelegate> * _sessionDelegate;
    NSString * _sessionIdentifier;
    id /* block */  _testBehavior_cleanupRetainCycle;
    id /* block */  _testBehavior_sessionInvalidated_cfnetwork;
    id /* block */  _testBehavior_sessionInvalidated_shouldInvalidate;
    NSMutableDictionary * _wrappedTaskByTaskDescription;
}

@property (nonatomic) unsigned long long creatingTaskCounter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double emptyTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char isComplete;
@property (nonatomic, readonly, copy) C2RequestOptions *options;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, retain) <C2SessionDelegate> *sessionDelegate;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ testBehavior_cleanupRetainCycle;
@property (nonatomic, copy) id /* block */ testBehavior_sessionInvalidated_cfnetwork;
@property (nonatomic, copy) id /* block */ testBehavior_sessionInvalidated_shouldInvalidate;
@property (nonatomic, readonly) NSMutableDictionary *wrappedTaskByTaskDescription;

+ (id)portFromURL:(id)arg1;

- (void).cxx_destruct;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_recalculateSessionDelegateQueuePriority;
- (id)addTask:(id)arg1 withDescription:(id)arg2 request:(id)arg3;
- (void)cleanupRetainCycle;
- (id)createTaskWithOptions:(id)arg1 delegate:(id)arg2;
- (unsigned long long)creatingTaskCounter;
- (void)dealloc;
- (void)didCreateTask;
- (double)emptyTimestamp;
- (id)initWithSessionIdentifier:(id)arg1 options:(id)arg2 sessionDelegate:(id)arg3;
- (void)invalidateAndCancel;
- (unsigned char)isComplete;
- (id)options;
- (id)queue;
- (void)removeTask:(id)arg1;
- (id)session;
- (id)sessionDelegate;
- (id)sessionIdentifier;
- (void)sessionTaskDelegateCallbackHelper:(id)arg1 task:(id)arg2 block:(id /* block */)arg3;
- (void)setCreatingTaskCounter:(unsigned long long)arg1;
- (void)setEmptyTimestamp:(double)arg1;
- (void)setIsComplete:(unsigned char)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setTestBehavior_cleanupRetainCycle:(id /* block */)arg1;
- (void)setTestBehavior_sessionInvalidated_cfnetwork:(id /* block */)arg1;
- (void)setTestBehavior_sessionInvalidated_shouldInvalidate:(id /* block */)arg1;
- (unsigned char)shouldInvalidateAndCancel;
- (id /* block */)testBehavior_cleanupRetainCycle;
- (id /* block */)testBehavior_sessionInvalidated_cfnetwork;
- (id /* block */)testBehavior_sessionInvalidated_shouldInvalidate;
- (void)testBehavior_triggerSessionExpiry;
- (void)willCreateTask;
- (id)wrappedTaskByTaskDescription;

@end
