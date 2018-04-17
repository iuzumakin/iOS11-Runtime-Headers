/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAChildAccountCreationController : NSObject <RUIObjectModelDelegate> {
    ACAccount * _appleAccount;
    NSString * _continuationData;
    NSHTTPURLResponse * _currentResponse;
    <FAChildAccountCreationDelegate> * _delegate;
    AAGrandSlamSigner * _grandSlamSigner;
    bool  _isPendingDismissal;
    bool  _isShowingSpinner;
    NSURL * _launchingURL;
    RUILoader * _loader;
    id /* block */  _loaderCompletion;
    UINavigationController * _navigationController;
    UINavigationItem * _navigationItemShowingSpinner;
    NSMutableArray * _objectModels;
    NSArray * _originalEnabledToolbarItems;
    UIBarButtonItem * _originalRightBarButtonItem;
    UIToolbar * _originalToolbar;
    NSArray * _originalToolbarItems;
    FARequestConfigurator * _requestConfigurator;
    AASetupAssistantService * _setupService;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic, copy) NSString *continuationData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAChildAccountCreationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_cancel;
- (void)_cleanupRemoteUILoader;
- (void)_createAppleIDWithParameters:(id)arg1 handler:(id /* block */)arg2;
- (void)_createChildAccount;
- (void)_displayConnectionErrorAndCancel;
- (void)_hideActivitySpinner;
- (void)_popObjectModelAnimated:(bool)arg1;
- (bool)_pressedLink:(id)arg1 comesFromBarButtonItem:(id)arg2 objectModel:(id)arg3;
- (void)_renewCredentialsWithCompletionHandler:(id /* block */)arg1;
- (id)_requestConfigurator;
- (void)_sendUserToiTunesSettings;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInToolbar:(id)arg1;
- (id)_spinnerView;
- (void)_startRemoteUILoaderWithRequest:(id)arg1;
- (id)continuationData;
- (id)delegate;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (void)loadRemoteUI;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)navigationController;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(id /* block */)arg4;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)prepareForDismiss;
- (void)setContinuationData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;

@end
