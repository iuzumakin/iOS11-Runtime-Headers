/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTHeadlineResultOperation : FCOperation {
    <FCContentContext> * _contentContext;
    id /* block */  _headlineResultCompletionHandler;
    NTPBHeadlineResultOperationInfo * _operationInfo;
    <NTReadablePrivateDataStorage> * _privateDataStorage;
    id /* block */  _sessionProvider;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, copy) id /* block */ headlineResultCompletionHandler;
@property (nonatomic, copy) NTPBHeadlineResultOperationInfo *operationInfo;
@property (nonatomic, retain) <NTReadablePrivateDataStorage> *privateDataStorage;
@property (nonatomic, copy) id /* block */ sessionProvider;

- (void).cxx_destruct;
- (id)contentContext;
- (id /* block */)headlineResultCompletionHandler;
- (id)init;
- (id)operationInfo;
- (id)privateDataStorage;
- (id /* block */)sessionProvider;
- (void)setContentContext:(id)arg1;
- (void)setHeadlineResultCompletionHandler:(id /* block */)arg1;
- (void)setOperationInfo:(id)arg1;
- (void)setPrivateDataStorage:(id)arg1;
- (void)setSessionProvider:(id /* block */)arg1;

@end
