/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNTestableObserver : NSObject <CNObserver> {
    CNObservableContractEnforcement * _enforcement;
    NSMutableArray * _results;
    CNVirtualScheduler * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *resultValues;
@property (readonly) NSArray *results;
@property (readonly) Class superclass;

+ (id)observerWithScheduler:(id)arg1;

- (void).cxx_destruct;
- (id)initWithScheduler:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)resultValues;
- (id)results;

@end
