/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFRemoveManagedBookRequest : CATTaskRequest {
    NSNumber * _iTunesStoreID;
    NSString * _persistentID;
}

@property (nonatomic, copy) NSNumber *iTunesStoreID;
@property (nonatomic, copy) NSString *persistentID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesStoreID;
- (id)initWithCoder:(id)arg1;
- (id)persistentID;
- (void)setITunesStoreID:(id)arg1;
- (void)setPersistentID:(id)arg1;

@end
