/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSharee : EKObject <EKIdentityProtocol, NSCopying>

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) NSPredicate *contactPredicate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) EKCalendar *owner;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic) unsigned long long shareeAccessLevel;
@property (nonatomic) unsigned long long shareeStatus;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (int)_calShareeAccessLevelFromEKShareeAccessLevel:(unsigned long long)arg1;
+ (int)_calShareeStatusFromEKShareeStatus:(unsigned long long)arg1;
+ (unsigned long long)_ekShareeAccessLevelFromCalShareeAccessLevel:(int)arg1;
+ (unsigned long long)_ekShareeStatusFromCalShareeStatus:(int)arg1;
+ (id)_urlForEmailAddress:(id)arg1 andPhoneNumber:(id)arg2;
+ (Class)frozenClass;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 externalID:(id)arg4;
+ (id)shareeWithName:(id)arg1 phoneNumber:(id)arg2;
+ (id)shareeWithName:(id)arg1 url:(id)arg2;
+ (unsigned long long)statusEnumFromString:(id)arg1;
+ (id)statusStringFromEnum:(unsigned long long)arg1;

- (id)URL;
- (id)UUID;
- (id)address;
- (id)contactPredicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (id)externalID;
- (id)firstName;
- (id)init;
- (id)initWithName:(id)arg1 url:(id)arg2;
- (id)initWithName:(id)arg1 url:(id)arg2 externalID:(id)arg3;
- (id)lastName;
- (id)name;
- (id)owner;
- (id)phoneNumber;
- (void)setAddress:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setShareeAccessLevel:(unsigned long long)arg1;
- (void)setShareeAccessLevelRaw:(int)arg1;
- (void)setShareeStatus:(unsigned long long)arg1;
- (void)setShareeStatusRaw:(int)arg1;
- (void)setUUID:(id)arg1;
- (unsigned long long)shareeAccessLevel;
- (int)shareeAccessLevelRaw;
- (unsigned long long)shareeStatus;
- (int)shareeStatusRaw;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (bool)isCurrentUserForScheduling;
- (bool)isCurrentUserForSharing;

@end
