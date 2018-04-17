/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShareMetadata : NSObject <NSCopying, NSSecureCoding> {
    bool  _acceptedInProcess;
    CKShareParticipant * _callingParticipant;
    NSString * _containerIdentifier;
    NSData * _encryptedData;
    long long  _environment;
    NSArray * _outOfNetworkMatches;
    CKUserIdentity * _ownerIdentity;
    long long  _participantPermission;
    long long  _participantStatus;
    long long  _participantType;
    NSData * _privateToken;
    NSData * _protectedFullToken;
    NSData * _publicToken;
    CKRecord * _rootRecord;
    CKRecordID * _rootRecordID;
    NSString * _rootRecordType;
    CKShare * _share;
}

@property (nonatomic) bool acceptedInProcess;
@property (getter=baseToken, nonatomic, readonly) NSString *baseToken;
@property (nonatomic, copy) CKShareParticipant *callingParticipant;
@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic, retain) NSData *encryptedData;
@property (nonatomic) long long environment;
@property (nonatomic, retain) NSArray *outOfNetworkMatches;
@property (nonatomic, retain) CKUserIdentity *ownerIdentity;
@property (nonatomic) long long participantPermission;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (nonatomic, copy) NSData *privateToken;
@property (nonatomic, copy) NSData *protectedFullToken;
@property (nonatomic, copy) NSData *publicToken;
@property (nonatomic, retain) CKRecord *rootRecord;
@property (nonatomic, copy) CKRecordID *rootRecordID;
@property (nonatomic, retain) NSString *rootRecordType;
@property (nonatomic, retain) CKShare *share;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (bool)acceptedInProcess;
- (id)baseToken;
- (id)callingParticipant;
- (id)ckShortDescription;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (long long)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)outOfNetworkMatches;
- (id)ownerIdentity;
- (long long)participantPermission;
- (long long)participantStatus;
- (long long)participantType;
- (id)privateToken;
- (id)protectedFullToken;
- (id)publicToken;
- (id)rootRecord;
- (id)rootRecordID;
- (id)rootRecordType;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setCallingParticipant:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setOutOfNetworkMatches:(id)arg1;
- (void)setOwnerIdentity:(id)arg1;
- (void)setParticipantPermission:(long long)arg1;
- (void)setParticipantStatus:(long long)arg1;
- (void)setParticipantType:(long long)arg1;
- (void)setPrivateToken:(id)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setPublicToken:(id)arg1;
- (void)setRootRecord:(id)arg1;
- (void)setRootRecordID:(id)arg1;
- (void)setRootRecordType:(id)arg1;
- (void)setShare:(id)arg1;
- (id)share;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptDataWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (void)_encryptDataWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (bool)hasEncryptedData;
- (struct _OpaquePCSShareProtection { }*)publicPCS;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection { }*)arg1;

@end
