/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRowComponent : SKUIPageComponent {
    UIColor * _backgroundColor;
    NSArray * _childComponents;
    NSArray * _columnWidths;
    long long  _missingItemCount;
    long long  _numberOfColumns;
    bool  _shouldAutoFlow;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSArray *childComponents;
@property (nonatomic, readonly) NSArray *columnWidths;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) bool shouldAutoFlow;
@property (nonatomic, readonly) SKUIRowViewElement *viewElement;

- (void).cxx_destruct;
- (id)_childComponentWithContext:(id)arg1;
- (bool)_isChildMissingItemData:(id)arg1;
- (id)_updateWithMissingItems:(id)arg1;
- (id)backgroundColor;
- (id)childComponents;
- (id)columnWidths;
- (long long)componentType;
- (id)description;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (bool)isMissingItemData;
- (id)metricsElementName;
- (long long)numberOfColumns;
- (bool)shouldAutoFlow;

@end
