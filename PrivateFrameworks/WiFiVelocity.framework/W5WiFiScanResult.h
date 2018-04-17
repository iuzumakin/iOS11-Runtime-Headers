/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5WiFiScanResult : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _scanRecord;
}

@property (nonatomic, readonly, copy) NSDictionary *scanRecord;

+ (bool)supportsSecureCoding;

- (id)__appleProductNameForProductID:(unsigned char)arg1;
- (id)__correctEthernetAddressFormat:(id)arg1;
- (bool)__supportsWEP;
- (bool)__supportsWPA2Enterprise;
- (bool)__supportsWPA2Personal;
- (bool)__supportsWPAEnterprise;
- (bool)__supportsWPAPersonal;
- (long long)beaconInterval;
- (id)bssid;
- (id)channel;
- (long long)channelUtilization;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)fastBSSTransitionEnabled;
- (bool)fastBSSTransitionOverDS;
- (bool)fastBSSTransitionRequestResourceProtocol;
- (int)fastestSupportedPHYMode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithScanRecord:(id)arg1;
- (bool)isAirPortBaseStation:(id*)arg1 modelID:(char *)arg2;
- (bool)isAppleSWAP;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScanResult:(id)arg1;
- (bool)isIBSS;
- (bool)isLeakyAP;
- (bool)isPasspoint;
- (bool)isPersonalHotspot;
- (long long)noise;
- (long long)rssi;
- (id)scanRecord;
- (id)ssid;
- (id)ssidString;
- (long long)stationCount;
- (long long)strongestSupportedSecurity;
- (bool)supportsPHYMode:(int)arg1;
- (bool)supportsSecurity:(long long)arg1;

@end
