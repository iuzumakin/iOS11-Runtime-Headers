/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionInfoListBBProvider : NSObject <BLTSectionInfoListProvider, BLTSectionInfoObserverDelegate, LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _appWorkspace;
    <BLTSectionInfoListProviderDelegate> * _delegate;
    BLTSectionInfoObserver * _observer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSectionInfoListProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationIconDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithSettingsGateway:(id)arg1;
- (void)reloadWithCompletion:(id /* block */)arg1;
- (void)sectionInfoObserver:(id)arg1 removedSectionWithSectionID:(id)arg2;
- (void)sectionInfoObserver:(id)arg1 updatedSectionInfo:(id)arg2 withUniversalSectionID:(id)arg3 displayName:(id)arg4;
- (void)setDelegate:(id)arg1;

@end
