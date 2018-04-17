/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface APAdvertiserBTLEManager : NSObject <WPAirPlaySoloDelegate> {
    struct { 
        unsigned char flags; 
        unsigned char config; 
        unsigned char ipv4[4]; 
    }  _advertisementData;
    unsigned short  _btleMode;
    WPAirPlaySolo * _btleServer;
    void * _eventHandlerContext;
    int (* _eventHandlerFunc;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isAdvertising;
    bool  _isEnabled;
    bool  _isScanning;
    /* Warning: unhandled struct encoding: '{OpaqueAPAdvertiserBTLEManager={__CFRuntimeBase=QAQ}@}' */ struct OpaqueAPAdvertiserBTLEManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; } * _managerRef;
    bool  _p2pSolo;
    bool  _p2pSoloQueried;
    NSObject<OS_dispatch_source> * _p2pSoloQueryTimer;
    struct __SCDynamicStore { } * _scStore;
    unsigned char  _seed;
    NSMutableDictionary * _soloDevices;
    NSObject<OS_dispatch_source> * _staleDevicesTimer;
    int  _touchSetupActiveNotifyToken;
}

@property (nonatomic, retain) WPAirPlaySolo *btleServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) void*eventHandlerContext;
@property (nonatomic) int (*eventHandlerFunc;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) bool isAdvertising;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isScanning;
@property (nonatomic) /* Warning: unhandled struct encoding: '{OpaqueAPAdvertiserBTLEManager={__CFRuntimeBase=QAQ}@}' */ struct OpaqueAPAdvertiserBTLEManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; }*managerRef;
@property (nonatomic) struct __SCDynamicStore { }*scStore;
@property (nonatomic) unsigned char seed;
@property (nonatomic, retain) NSMutableDictionary *soloDevices;
@property (nonatomic) NSObject<OS_dispatch_source> *staleDevicesTimer;
@property (readonly) Class superclass;
@property (nonatomic) int touchSetupActiveNotifyToken;

- (void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)airPlaySoloDidUpdateState:(id)arg1;
- (void)airPlaySoloStartedAdvertising:(id)arg1;
- (void)airPlaySoloStartedScanning:(id)arg1;
- (void)airPlaySoloStoppedAdvertising:(id)arg1;
- (void)airPlaySoloStoppedScanning:(id)arg1;
- (id)btleServer;
- (void)dealloc;
- (void)dispatchEvent:(unsigned int)arg1;
- (void*)eventHandlerContext;
- (int (*)eventHandlerFunc;
- (id)eventQueue;
- (int)getBTLEMode:(unsigned short*)arg1;
- (void)handleP2PSoloQueryTimerCancelled;
- (void)handleP2PSoloQueryTimerFired;
- (id)init;
- (id)internalQueue;
- (void)invalidate;
- (bool)isAdvertising;
- (bool)isEnabled;
- (bool)isScanning;
- (/* Warning: unhandled struct encoding: '{OpaqueAPAdvertiserBTLEManager={__CFRuntimeBase=QAQ}@}' */ struct OpaqueAPAdvertiserBTLEManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; }*)managerRef;
- (struct __SCDynamicStore { }*)scStore;
- (unsigned char)seed;
- (int)setBTLEMode:(unsigned short)arg1;
- (void)setBtleServer:(id)arg1;
- (void)setEventHandlerContext:(void*)arg1;
- (void)setEventHandlerFunc:(int (*)arg1;
- (void)setIsAdvertising:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsScanning:(bool)arg1;
- (void)setManagerRef:(/* Warning: unhandled struct encoding: '{OpaqueAPAdvertiserBTLEManager={__CFRuntimeBase=QAQ}@}' */ struct OpaqueAPAdvertiserBTLEManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; }*)arg1;
- (void)setScStore:(struct __SCDynamicStore { }*)arg1;
- (void)setSeed:(unsigned char)arg1;
- (void)setSoloDevices:(id)arg1;
- (void)setStaleDevicesTimer:(id)arg1;
- (void)setTouchSetupActiveNotifyToken:(int)arg1;
- (int)showDebugWithDataBuffer:(struct { char *x1; unsigned long long x2; unsigned long long x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned char x7; int x8; }*)arg1 verbose:(bool)arg2;
- (id)soloDevices;
- (id)staleDevicesTimer;
- (int)start;
- (void)startAdvertising;
- (int)startListeningForNetworkChanges;
- (int)startP2PSoloQueryTimer;
- (void)startScanning;
- (int)startStaleDeviceTimer;
- (int)stop;
- (void)stopAdvertising;
- (int)stopListeningForNetworkChanges;
- (void)stopScanning;
- (id)stringForBTLEMode:(unsigned short)arg1;
- (int)supportsSolo:(bool*)arg1;
- (int)touchSetupActiveNotifyToken;
- (int)update;
- (void)updateAdvertisementData;
- (int)updatePreferences;
- (int)updateSupportsSoloAndForceReadFromPrefs:(bool)arg1;

@end
