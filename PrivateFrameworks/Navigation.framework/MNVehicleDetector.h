/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNVehicleDetector : NSObject {
    NSLock * _observerLock;
    NSMutableSet * _observers;
    bool  _testMode;
    int  _testToken;
    int  _vehicleConnectedToken;
    unsigned long long  _vehicleConnectionState;
    unsigned long long  _vehicleDetectionState;
    int  _vehicleDisconnectedToken;
    unsigned long long  _vehicularState;
    int  _vehicularToken;
}

@property (nonatomic) unsigned long long vehicleConnectionState;
@property (nonatomic, readonly) unsigned long long vehicleDetectionState;
@property (nonatomic) unsigned long long vehicularState;

+ (id)sharedDetector;

- (void).cxx_destruct;
- (void)_startTestDetection;
- (void)_startVehicleConnectionMonitoring;
- (void)_startVehicularDetection;
- (void)_stopTestDetection;
- (void)_stopVehicleConnectionMonitoring;
- (void)_stopVehicularDetection;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)setVehicleConnectionState:(unsigned long long)arg1;
- (void)setVehicleDetectedState:(unsigned long long)arg1;
- (void)setVehicularState:(unsigned long long)arg1;
- (void)startDetectingVehicle;
- (void)stopDetectingVehicle;
- (unsigned long long)vehicleConnectionState;
- (unsigned long long)vehicleDetectionState;
- (unsigned long long)vehicularState;

@end
