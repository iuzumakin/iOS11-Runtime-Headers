/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDReselectedStreamConfigurationWrite : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {
    HMDSessionControl * _sessionControl;
    HMDReselectedVideoParameters * _videoParameters;
}

@property (nonatomic, readonly, copy) HMDSessionControl *sessionControl;
@property (nonatomic, readonly, copy) HMDReselectedVideoParameters *videoParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionControl:(id)arg1;
- (id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2;
- (id)sessionControl;
- (id)tlvData;
- (id)videoParameters;

@end
