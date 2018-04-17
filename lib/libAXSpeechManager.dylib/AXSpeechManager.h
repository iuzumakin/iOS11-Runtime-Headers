/* Generated by RuntimeBrowser
   Image: /usr/lib/libAXSpeechManager.dylib
 */

@interface AXSpeechManager : NSObject <TTSSpeechSynthesizerDelegate> {
    unsigned int  _audioQueueFlags;
    bool  _isSpeaking;
    NSNumber * _originalSpeechRateForJobOverride;
    id /* block */  _requestWillStart;
    AXSpeechThread * _runThread;
    bool  _showControlCenterControls;
    bool  _speechEnabled;
    NSMutableArray * _speechQueue;
    TTSSpeechSynthesizer * _synthesizer;
    bool  isPaused;
}

@property (nonatomic) unsigned int audioQueueFlags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPaused;
@property (nonatomic, readonly) bool isSpeaking;
@property (nonatomic, retain) NSNumber *originalSpeechRateForJobOverride;
@property (nonatomic, retain) NSArray *outputChannels;
@property (nonatomic, copy) id /* block */ requestWillStart;
@property (nonatomic, readonly) bool showControlCenterControls;
@property (nonatomic) bool speechEnabled;
@property (readonly) Class superclass;

+ (id)_resetAvailableVoices;
+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (struct URegularExpression { }*)createRegularExpressionFromString:(id)arg1;
+ (id)currentLanguageCode;
+ (id)matchedRangesForString:(id)arg1 withRegularExpression:(struct URegularExpression { }*)arg2;
+ (id)pauseMarkupString:(id)arg1;
+ (id)remapLanguageCode:(id)arg1;
+ (id)spellOutMarkupString:(id)arg1;
+ (void)test_actionStartTap:(id /* block */)arg1;
+ (void)test_setAvailableVoices:(id)arg1;
+ (void)test_setUnitTestMode:(bool)arg1;

- (void).cxx_destruct;
- (void)__speechJobFinished:(id)arg1;
- (void)_clearSpeechQueue;
- (void)_continueSpeaking;
- (void)_dispatchSpeechAction:(id)arg1;
- (void)_initialize;
- (void)_isSpeaking:(id)arg1;
- (void)_pauseSpeaking:(id)arg1;
- (id)_phonemeSubstitutionsForAction:(id)arg1;
- (void)_speechJobFinished:(bool)arg1 action:(id)arg2;
- (void)_startNextSpeechJob;
- (void)_stopSpeaking:(id)arg1;
- (void)_tearDown;
- (void)_updateUserSubstitutions;
- (unsigned int)audioQueueFlags;
- (void)clearSpeechQueue;
- (void)continueSpeaking;
- (void)dealloc;
- (void)dispatchSpeechAction:(id)arg1;
- (id)init;
- (bool)isPaused;
- (bool)isSpeaking;
- (id)originalSpeechRateForJobOverride;
- (id)outputChannels;
- (void)pauseSpeaking:(int)arg1;
- (id /* block */)requestWillStart;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setIsPaused:(bool)arg1;
- (void)setOriginalSpeechRateForJobOverride:(id)arg1;
- (void)setOutputChannels:(id)arg1;
- (void)setRequestWillStart:(id /* block */)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (bool)showControlCenterControls;
- (bool)speechEnabled;
- (void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forRequest:(id)arg3;
- (void)stopSpeaking;
- (void)stopSpeaking:(int)arg1;
- (void)tearDown;
- (id)voiceIdentifierUsedForLanguage:(id)arg1;

@end
