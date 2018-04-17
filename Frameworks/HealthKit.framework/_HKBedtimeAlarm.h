/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKBedtimeAlarm : NSObject {
    NSDateComponents * _sleepDateComponents;
    NSDateComponents * _wakeDateComponents;
}

@property (nonatomic, readonly) NSDateComponents *sleepDateComponents;
@property (nonatomic, readonly) NSDateComponents *wakeDateComponents;

+ (id)bedtimeAlarmWithSleepDate:(id)arg1 wakeDate:(id)arg2 calendar:(id)arg3;

- (void).cxx_destruct;
- (id)firstDateIntervalAfterDate:(id)arg1 calendar:(id)arg2;
- (id)initWithSleepDateComponents:(id)arg1 wakeDateComponents:(id)arg2;
- (id)sleepDateComponents;
- (id)wakeDateComponents;

@end
