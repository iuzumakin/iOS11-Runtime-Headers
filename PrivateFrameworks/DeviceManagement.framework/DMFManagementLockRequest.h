/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFManagementLockRequest : CATTaskRequest {
    NSString * _lockedByLabel;
    NSString * _passcode;
}

@property (nonatomic, copy) NSString *lockedByLabel;
@property (nonatomic, copy) NSString *passcode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lockedByLabel;
- (id)passcode;
- (void)setLockedByLabel:(id)arg1;
- (void)setPasscode:(id)arg1;

@end
