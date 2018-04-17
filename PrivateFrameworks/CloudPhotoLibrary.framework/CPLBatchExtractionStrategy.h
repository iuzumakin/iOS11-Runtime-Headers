/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLBatchExtractionStrategy : NSObject {
    CPLBatchExtractionStep * _currentStep;
    bool  _finished;
    bool  _loggedForThisStep;
    unsigned long long  _maximumRecordCountPerBatch;
    NSString * _name;
    NSEnumerator * _stepEnumerator;
    NSArray * _steps;
    <CPLBatchExtractionStrategyStorage> * _storage;
    NSString * _strategyName;
}

@property (nonatomic, readonly, copy) NSString *currentStepDescription;
@property (nonatomic) unsigned long long maximumRecordCountPerBatch;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) <CPLBatchExtractionStrategyStorage> *storage;
@property (nonatomic, readonly, copy) NSString *strategyName;

+ (id)overQuotaStrategyWithStorage:(id)arg1;
+ (void)setMaximumRecordCountPerBatch:(unsigned long long)arg1;
+ (id)usualStrategyWithStorage:(id)arg1;

- (void).cxx_destruct;
- (void)_computeNextStep;
- (id)currentStepDescription;
- (bool)extractBatch:(out id*)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 storage:(id)arg2 steps:(id)arg3;
- (unsigned long long)maximumRecordCountPerBatch;
- (id)name;
- (void)reset;
- (void)resetConditionallyFromNewIncomingChange:(id)arg1;
- (void)setMaximumRecordCountPerBatch:(unsigned long long)arg1;
- (id)storage;
- (id)strategyName;

@end
