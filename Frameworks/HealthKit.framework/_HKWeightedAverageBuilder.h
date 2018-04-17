/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWeightedAverageBuilder : NSObject {
    double  _startTime;
}

- (id)_weightedAverageStatisticsWithValuesAndTimes:(struct vector<_HDValueAndTime, std::__1::allocator<_HDValueAndTime> > { struct _HDValueAndTime {} *x1; struct _HDValueAndTime {} *x2; struct __compressed_pair<_HDValueAndTime *, std::__1::allocator<_HDValueAndTime> > { struct _HDValueAndTime {} *x_3_1_1; } x3; }*)arg1 unit:(id)arg2 sorted:(bool)arg3 error:(id*)arg4;
- (id)initWithStartDate:(id)arg1;
- (id)weightedAverageWithSamples:(id)arg1 sorted:(bool)arg2 error:(id*)arg3;

@end
