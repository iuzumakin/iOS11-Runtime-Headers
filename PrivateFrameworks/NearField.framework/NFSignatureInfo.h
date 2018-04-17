/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFSignatureInfo : NSObject <NSSecureCoding> {
    unsigned long long  _certificateVersion;
    NSString * _eccCert;
    NSString * _eckaCert;
    NSString * _jsblCounter;
    NSString * _platformId;
    NSString * _rsaCert;
    NSString * _seid;
}

@property (nonatomic, readonly) unsigned long long certificateVersion;
@property (nonatomic, readonly) NSString *eccCert;
@property (nonatomic, readonly) NSString *eckaCert;
@property (nonatomic, readonly) NSString *jsblCounter;
@property (nonatomic, readonly) NSString *platformId;
@property (nonatomic, readonly) NSString *rsaCert;
@property (nonatomic, readonly) NSString *seid;

+ (bool)supportsSecureCoding;

- (unsigned long long)certificateVersion;
- (void)dealloc;
- (id)description;
- (id)eccCert;
- (id)eckaCert;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsblCounter;
- (id)platformId;
- (id)rsaCert;
- (id)seid;

@end
