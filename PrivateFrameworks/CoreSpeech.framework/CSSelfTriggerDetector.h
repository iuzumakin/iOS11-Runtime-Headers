/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSelfTriggerDetector : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeechManagerDelegate> {
    CSAsset * _currentAsset;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzer;
    float  _keywordThreshold;
    unsigned long long  _outputAudioChannel;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpeechManager * _speechManager;
}

@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) unsigned long long outputAudioChannel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (id)currentAsset;
- (id)initWithManager:(id)arg1 asset:(id)arg2;
- (id)keywordAnalyzer;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (float)keywordThreshold;
- (unsigned long long)outputAudioChannel;
- (id)queue;
- (void)reset;
- (void)setAsset:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setKeywordAnalyzer:(id)arg1;
- (void)setKeywordThreshold:(float)arg1;
- (void)setOutputAudioChannel:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (id)speechManager;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;

@end
