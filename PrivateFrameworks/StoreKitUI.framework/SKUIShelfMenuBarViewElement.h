/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfMenuBarViewElement : SKUIShelfViewElement <SKUIMenuBarViewElement, _SKUIMenuBarViewElementConfigurationReloadDelegate> {
    SKUIMenuBarViewElementConfiguration * _configuration;
    NSArray * _focusedViewElements;
    NSArray * _regularViewElements;
}

@property (nonatomic, retain) SKUIMenuBarViewElementConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;
- (void)_reloadMenuItems;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)configuration;
- (unsigned long long)elementType;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (id)focusedViewElementForMenuItemAtIndex:(unsigned long long)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)regularViewElementForMenuItemAtIndex:(unsigned long long)arg1;
- (void)setConfiguration:(id)arg1;

@end
