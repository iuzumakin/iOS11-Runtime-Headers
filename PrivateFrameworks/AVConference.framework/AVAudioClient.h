/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVAudioClient : NSObject {
    AVAudioDeviceList * deviceList;
}

@property (nonatomic) id /* block */ changeListener;
@property (nonatomic, retain) AVAudioDeviceList *deviceList;

+ (id)currentInputDevice;
+ (id)currentOutputDevice;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (bool)hasActiveAudioSession;
+ (void)initializeAudioSessionQ;
+ (bool)isMicrophoneMuted;
+ (void)resetAudioSessionOutputPortOverride;
+ (void)setAudioSessionProperties:(id)arg1;
+ (bool)setInputDevice:(id)arg1;
+ (void)setMicrophoneMuted:(bool)arg1;
+ (bool)setOutputDevice:(id)arg1;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)arg1;
+ (void)stopAudioSession;

- (id /* block */)changeListener;
- (void)dealloc;
- (id)deviceList;
- (id)devices;
- (id)init;
- (id)inputDevices;
- (id)outputDevices;
- (void)setChangeListener:(id /* block */)arg1;
- (void)setDeviceList:(id)arg1;

@end
