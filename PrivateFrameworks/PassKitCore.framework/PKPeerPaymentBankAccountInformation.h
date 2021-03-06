/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentBankAccountInformation : NSObject <NSSecureCoding> {
    NSString * _accountNumber;
    NSString * _bankName;
    NSString * _routingNumber;
}

@property (nonatomic, copy) NSString *accountNumber;
@property (nonatomic, copy) NSString *bankName;
@property (nonatomic, copy) NSString *routingNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bankAccountInformationInKeychain;
- (void)_deleteBankAccountKeychainData;
- (void)_writeBankAccountInformationToKeychain;
- (id)accountNumber;
- (id)bankName;
- (void)deleteAllBankInformation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (id)routingNumber;
- (void)setAccountNumber:(id)arg1;
- (void)setBankName:(id)arg1;
- (void)setRoutingNumber:(id)arg1;
- (void)updateToLatestKeychainData;

@end
