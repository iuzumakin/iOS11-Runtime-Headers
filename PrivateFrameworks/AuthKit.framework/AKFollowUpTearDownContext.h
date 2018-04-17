/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKFollowUpTearDownContext : NSObject <NSSecureCoding> {
    NSString * _akAction;
    NSString * _altDSID;
    NSString * _itemIdentifier;
}

@property (nonatomic, copy) NSString *akAction;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *itemIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)akAction;
- (id)altDSID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemIdentifier;
- (void)setAkAction:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setItemIdentifier:(id)arg1;

@end
