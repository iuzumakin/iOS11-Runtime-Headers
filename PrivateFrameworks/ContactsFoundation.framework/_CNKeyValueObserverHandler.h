/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNKeyValueObserverHandler : NSObject {
    NSString * _keyPath;
    id  _object;
    <CNObserver> * _observer;
}

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)startObservingWithOptions:(unsigned long long)arg1;
- (void)stopObserving;

@end
