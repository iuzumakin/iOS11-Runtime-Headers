/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {
    MSBackoffManager * _MMCSBackoffManager;
    bool  _hasDeactivated;
    NSString * _manifestPath;
    NSString * _personID;
    MSBackoffManager * _streamsBackoffManager;
    NSMutableDictionary * _userManifest;
}

@property (nonatomic, retain) NSMutableDictionary *_userManifest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDeactivated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abort;
- (void)_backoffMMCSBackoffTimer;
- (void)_backoffStreamsBackoffTimer;
- (void)_commitUserManifest;
- (void)_didReceiveMMCSRetryAfterDate:(id)arg1;
- (void)_didReceiveStreamsRetryAfterDate:(id)arg1;
- (void)_forget;
- (id)_latestNextActivityDate;
- (void)_resetMMCSBackoffTimer;
- (void)_resetStreamsBackoffTimer;
- (void)_updateMasterManifest;
- (id)_userManifest;
- (void)deactivate;
- (void)dealloc;
- (void)forget;
- (bool)hasDeactivated;
- (id)initWithPersonID:(id)arg1;
- (id)personID;
- (void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2;
- (void)setHasDeactivated:(bool)arg1;
- (void)set_userManifest:(id)arg1;

@end
