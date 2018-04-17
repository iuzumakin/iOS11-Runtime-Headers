/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastExtensionContext : NSExtensionContext <RPBroadcastExtensionHostProtocol, RPBroadcastExtensionInitProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)broadcastExtensionViewController;
- (oneway void)completeSetupWithBroadcastURL:(id)arg1;
- (id)extensionObjectProxy;
- (oneway void)updateBroadcastHandlerListenerEndpoint:(id /* block */)arg1;

@end
