/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic, readonly) struct _SecMPFullIdentity { }*fullIdentity;

+ (struct _SecMPPublicIdentity { }*)_copyPublicIdentityFromFullIdentity:(struct _SecMPFullIdentity { }*)arg1 error:(id*)arg2;
+ (struct _SecMPFullIdentity { }*)_createFullIdentityFromData:(id)arg1 error:(id*)arg2;
+ (id)identityWithData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (id)dataRepresentationWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct _SecMPFullIdentity { }*)fullIdentity;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullIdentity:(struct _SecMPFullIdentity { }*)arg1;
- (id)publicIdentityWithError:(id*)arg1;
- (id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3;

@end
