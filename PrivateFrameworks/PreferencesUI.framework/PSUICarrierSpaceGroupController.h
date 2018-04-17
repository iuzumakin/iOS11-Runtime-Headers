/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICarrierSpaceGroupController : NSObject <PSSpecifierGroupController, RemoteUIControllerDelegate> {
    CTCarrierSpaceCapabilities * _capabilities;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
    RemoteUIController * _remoteUIController;
}

@property (nonatomic, retain) CTCarrierSpaceCapabilities *capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic, retain) RemoteUIController *remoteUIController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)capabilities;
- (id)carrierServicesSpecifier;
- (void)carrierSpaceChanged;
- (id)descriptionForPlans:(id)arg1;
- (id)descriptionForUsage:(id)arg1;
- (void)dismissUserConsent;
- (id)groupSpecifier;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)listController;
- (void)newCarrierNotification;
- (void)openURLWithSpecifier:(id)arg1;
- (id)remoteUIController;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)setCapabilities:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setRemoteUIController:(id)arg1;
- (void)showConsentFlow:(id)arg1;
- (id)specifiers;

@end
