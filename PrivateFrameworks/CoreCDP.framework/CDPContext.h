/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPContext : NSObject <NSCopying, NSSecureCoding> {
    bool  __alwaysCreateEscrowRecord;
    <CDPAuthProviderInternal> * __authProvider;
    NSString * __recoveryToken;
    bool  __useSecureBackupCachedPassphrase;
    NSString * _altDSID;
    NSString * _appleID;
    NSDictionary * _authenticationResults;
    NSString * _cachedLocalSecret;
    unsigned long long  _cachedLocalSecretType;
    bool  _didUseSMSVerification;
    NSNumber * _dsid;
    KCAESGCMDuplexSession * _duplexSession;
    NSString * _findMyiPhoneUUID;
    bool  _guestMode;
    bool  _idmsMasterKeyRecovery;
    bool  _idmsRecovery;
    bool  _isHSA2Account;
    NSString * _password;
    NSString * _passwordEquivToken;
    AKCircleRequestContext * _resumeContext;
    CUMessageSession * _sharingChannel;
    bool  _supportsSkipSignIn;
    long long  _type;
}

@property (nonatomic) bool _alwaysCreateEscrowRecord;
@property (nonatomic, retain) <CDPAuthProviderInternal> *_authProvider;
@property (nonatomic, copy) NSString *_recoveryToken;
@property (nonatomic) bool _useSecureBackupCachedPassphrase;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSDictionary *authenticationResults;
@property (nonatomic, copy) NSString *cachedLocalSecret;
@property (nonatomic) unsigned long long cachedLocalSecretType;
@property (nonatomic) bool didUseSMSVerification;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic, retain) KCAESGCMDuplexSession *duplexSession;
@property (copy) NSString *findMyiPhoneUUID;
@property (nonatomic) bool guestMode;
@property (nonatomic) bool idmsMasterKeyRecovery;
@property (nonatomic) bool idmsRecovery;
@property (nonatomic) bool isHSA2Account;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *passwordEquivToken;
@property (nonatomic, retain) AKCircleRequestContext *resumeContext;
@property (nonatomic, retain) CUMessageSession *sharingChannel;
@property bool supportsSkipSignIn;
@property (nonatomic) long long type;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_alwaysCreateEscrowRecord;
- (id)_authProvider;
- (id)_recoveryToken;
- (bool)_useSecureBackupCachedPassphrase;
- (id)altDSID;
- (id)appleID;
- (void)augmentWithCredentialsFromContext:(id)arg1;
- (id)authenticationResults;
- (id)cachedLocalSecret;
- (unsigned long long)cachedLocalSecretType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)desiresAllRecords;
- (bool)didUseSMSVerification;
- (id)dsid;
- (id)duplexSession;
- (void)encodeWithCoder:(id)arg1;
- (id)findMyiPhoneUUID;
- (bool)guestMode;
- (bool)idmsMasterKeyRecovery;
- (bool)idmsRecovery;
- (id)init;
- (id)initWithAuthenticationResults:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isHSA2Account;
- (id)password;
- (id)passwordEquivToken;
- (void)purgeResumeData;
- (id)resumeContext;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setAuthenticationResults:(id)arg1;
- (void)setCachedLocalSecret:(id)arg1;
- (void)setCachedLocalSecretType:(unsigned long long)arg1;
- (void)setDidUseSMSVerification:(bool)arg1;
- (void)setDsid:(id)arg1;
- (void)setDuplexSession:(id)arg1;
- (void)setFindMyiPhoneUUID:(id)arg1;
- (void)setGuestMode:(bool)arg1;
- (void)setIdmsMasterKeyRecovery:(bool)arg1;
- (void)setIdmsRecovery:(bool)arg1;
- (void)setIsHSA2Account:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordEquivToken:(id)arg1;
- (void)setResumeContext:(id)arg1;
- (void)setSharingChannel:(id)arg1;
- (void)setSupportsSkipSignIn:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)set_alwaysCreateEscrowRecord:(bool)arg1;
- (void)set_authProvider:(id)arg1;
- (void)set_recoveryToken:(id)arg1;
- (void)set_useSecureBackupCachedPassphrase:(bool)arg1;
- (id)sharingChannel;
- (bool)supportsSkipSignIn;
- (long long)type;
- (void)updateWithAuthenticationResults:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (void)reauthenticateUserWithCompletion:(id /* block */)arg1;

@end
