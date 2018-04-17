/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPromiseSeal : NSObject {
    NSError * _error;
    NSMutableArray * _handlers;
    FCMutexLock * _lock;
    unsigned long long  _state;
    id  _value;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSMutableArray *handlers;
@property (nonatomic, readonly) FCMutexLock *lock;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)alwaysOn:(id)arg1 always:(id /* block */)arg2;
- (void)dealloc;
- (id)error;
- (id)handlers;
- (id)init;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)lock;
- (void)registerHandler:(id /* block */)arg1;
- (void)reject:(id)arg1;
- (void)resolve:(id)arg1;
- (void)resolveOn:(id)arg1 reject:(id /* block */)arg2 resolve:(id /* block */)arg3;
- (void)seal:(id)arg1 error:(id)arg2 resolution:(unsigned long long)arg3;
- (void)setError:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)state;
- (id)value;

@end
