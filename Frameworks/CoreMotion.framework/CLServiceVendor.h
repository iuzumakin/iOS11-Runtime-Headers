/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLServiceVendor : NSObject {
    NSMutableDictionary * _catalog;
    int  _missBehavior;
    NSMutableDictionary * _recordingFromTriggersByTo;
    NSMutableDictionary * _recordingToTriggersByFrom;
    struct shared_ptr<CMMsl::Writer> { 
        struct Writer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _recordingWriter;
    NSDictionary * _serviceReplacementMap;
    NSMutableSet * _unavailableServiceNames;
}

+ (void)initialize;
+ (void)rereadConfiguration;
+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (bool)ensureServiceIsRunning:(id)arg1;
- (id)getServiceWithName:(id)arg1;
- (id)getSiloForService:(id)arg1;
- (id)init;
- (bool)isServiceEnabled:(id)arg1;
- (bool)isServiceRunning:(id)arg1;
- (id)proxyForService:(id)arg1;
- (id)proxyForService:(id)arg1 forClient:(id)arg2;
- (void)retireServiceWithName:(id)arg1;
- (id)setRecordingTriggerMap:(id)arg1 outputPathBase:(id)arg2;
- (void)setServiceReplacementMap:(id)arg1 missBehavior:(int)arg2;

@end