/* Generated by RuntimeBrowser.
 */

@protocol VSIdentityProviderRequestManagerDelegate <NSObject>

@required

- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 finishedRequest:(VSIdentityProviderRequest *)arg2 withResult:(VSFailable *)arg3;

@optional

- (VSApplicationController *)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 applicationControllerWithIdentityProvider:(VSIdentityProvider *)arg2;
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 didAuthenticateAccount:(VSAccount *)arg2 supportingApps:(NSArray *)arg3 forRequest:(VSIdentityProviderRequest *)arg4;

@end
