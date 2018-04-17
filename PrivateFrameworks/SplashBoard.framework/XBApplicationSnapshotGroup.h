/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshotGroup : NSObject <BSDescriptionProviding, NSCoding> {
    XBSnapshotContainerIdentity * _containerIdentity;
    NSString * _identifier;
    NSMutableSet * _snapshots;
}

@property (copy) XBSnapshotContainerIdentity *containerIdentity;
@property (nonatomic, readonly, copy) NSString *containerPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSSet *snapshots;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_initWithIdentifier:(id)arg1 containerIdentity:(id)arg2;
- (void)_invalidate;
- (void)_manifestQueueDecode_setStore:(id)arg1;
- (bool)_validateWithContainerIdentity:(id)arg1;
- (void)addSnapshot:(id)arg1;
- (id)containerIdentity;
- (id)containerPath;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)removeSnapshot:(id)arg1;
- (void)setContainerIdentity:(id)arg1;
- (id)snapshots;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
