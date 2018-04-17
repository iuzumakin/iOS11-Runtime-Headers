/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPhraseSpotter : NSObject <VTAssetMonitorDelegate, VTLanguageCodeUpdateMonitorDelegate, VTTextDependentSpeakerRecognizerDelegate> {
    VTAnalyzerNDAPI * _analyzer;
    id /* block */  _assetChangedCallback;
    NSObject<OS_dispatch_queue> * _assetChangedQueue;
    CSAudioCircularBuffer * _audioBuffer;
    bool  _audioCaptureRequested;
    NSString * _audioFileDir;
    bool  _audioLoggingEnabled;
    NSString * _configData;
    NSString * _configLanguageCode;
    NSString * _configPath;
    NSString * _configVersion;
    VTCorruptDetector * _corruptDetector;
    struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; } * _deinterleavedABL;
    struct OpaqueAudioConverter { } * _deinterleaver;
    NSObject<OS_dispatch_queue> * _desQueue;
    bool  _deviceHandheld;
    bool  _didWakeAP;
    bool  _doSuperVectorSecondaryTest;
    unsigned long long  _earlyDetecFiredMachTime;
    double  _earlyDetectTime;
    bool  _earlyDetected;
    double  _effectiveThreshold;
    unsigned int  _extraSamplesAtStart;
    NSData * _firstChanceAudioBuffer;
    bool  _firstChanceDetected;
    double  _firstChanceDetectionTime;
    NSDate * _firstChanceTriggeredDate;
    NSDictionary * _firstChanceVTEventInfo;
    double  _firstPassScore;
    bool  _firstRecognitionResultReceived;
    int  _firstUnlockAfterRebootNotificationToken;
    NSDateFormatter * _formatter;
    double  _handHeldDetectedTime;
    double  _hardwareSampleRate;
    int  _heartbeatCounter;
    bool  _implicitlyTrained;
    bool  _isMaximized;
    bool  _isRecognitionResultPending;
    bool  _isRunningRecognizer;
    bool  _isRunningSATDetection;
    bool  _isRunningSATEnrollment;
    bool  _isSecondChanceEffective;
    bool  _isSecondPass;
    bool  _isSuperVectorNeeded;
    NSString * _languageCode;
    int  _languageCodeChangedNotificationToken;
    double  _lastCombinedTdSpeakerRecognizerSATScore;
    double  _lastDowntime;
    unsigned int  _lastEventEnd;
    NSString * _lastImplicitlyTrainedAudioFile;
    double  _lastScore;
    double  _lastSupervecScore;
    float  _lastTdSpeakerRecognizerSATScore;
    unsigned char  _lastTriggerType;
    double  _lastUptime;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    NSObject<OS_dispatch_queue> * _ndetectQueue;
    bool  _nearMissLogPending;
    int  _nearMissLogPreDelayTimer;
    NSMutableArray * _nonceTriggerEvents;
    unsigned long long  _numChannels;
    int  _numFramesFromPreTrigger;
    bool  _phraseSpotterBypassed;
    bool  _phraseSpotterEnabled;
    VTPhraseSpotterEnabledPolicy * _policy;
    id /* block */  _readyCompletion;
    id /* block */  _readyForAnalyze;
    NSString * _recognizerConfigName;
    double  _recognizerScore;
    double  _recognizerScoreScaleFactor;
    double  _recognizerThresholdOffset;
    double  _recognizerWaitTime;
    bool  _registeredForPhraseSpotterNotification;
    bool  _registeredforVoiceTriggerEnabledNotification;
    NSString * _resourcePath;
    unsigned long long  _retrainNumExplicitUtt;
    unsigned long long  _retrainNumImplicitUtt;
    NSString * _retrainSamplingPolicy;
    double  _retrainThresholdSAT;
    double  _retrainThresholdTrigger;
    unsigned int  _sampleCountAtFirstChance;
    unsigned int  _samplecount;
    unsigned int  _samplecountAtLastTriggerEnd;
    unsigned int  _samplecountAtLastTriggerStart;
    unsigned int  _samplecountAtRealTriggerStart;
    unsigned long long  _samplerate;
    NSString * _satAudioDirectory;
    NSString * _satModelDirectory;
    bool  _secondPassAccepted;
    bool  _secondPassAudioLoggingEnabled;
    double  _secondPassBestScore;
    int  _secondPassResetTimer;
    bool  _secondPassStopSent;
    double  _secondPassTrailingTime;
    bool  _secondPassTriggered;
    VTTextDependentSpeakerRecognizer * _tdSpeakerRecognizer;
    double  _tdSpeakerRecognizerCombinationWeight;
    double  _tdSpeakerRecognizerSATThreshold;
    NSObject<OS_dispatch_semaphore> * _tdSpeakerRecognizerSemaphore;
    double  _threshold;
    double  _thresholdLogNearMisses;
    double  _thresholdPreSuperVector;
    double  _thresholdSAT;
    double  _thresholdSecondChance;
    VTTranscriber * _transcriber;
    long long  _triggerCount;
    unsigned long long  _triggerFireMachTime;
    NSArray * _triggerPhrases;
    unsigned long long  _triggerStartMachTime;
    double  _triggerThreshold;
    NSString * _triggerTokens;
    bool  _useFallbackThresholdUponTimeout;
    bool  _useKeywordSpotting;
    bool  _useRecognizer;
    bool  _voiceTriggerEnabled;
    VTSiriNotifications * siriNotifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSData *firstChanceAudioBuffer;
@property (readonly) NSDate *firstChanceTriggeredDate;
@property (readonly) NSDictionary *firstChanceVTEventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) double lastScore;
@property (readonly) double lastSupervecScore;
@property (readonly) unsigned char lastTriggerType;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long sampleCountAtEndOfTrigger;
@property (readonly) unsigned long long sampleCountAtStartOfTrigger;
@property (readonly) unsigned long long samplerate;
@property (readonly) Class superclass;
@property (readonly) long long triggerCount;

+ (id)currentSpotter;
+ (void)initialize;

- (void).cxx_destruct;
- (void)VTAssetMonitor:(id)arg1 didReceiveNewAssetAvailable:(bool)arg2;
- (void)VTLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (unsigned long long)_addExtraTime:(double)arg1 to:(unsigned long long)arg2;
- (id)_analyzeEnrollmentUtts:(id)arg1 enrollmentUtts:(id)arg2 thresholdTrigger:(double)arg3 thresholdSAT:(double)arg4 isUpdatingModel:(bool)arg5 extraUtts:(id*)arg6;
- (id)_analyzeEvents:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1;
- (id)_analyzeMakeResult:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1 eventKind:(unsigned char)arg2 satScore:(double)arg3;
- (void)_analyzeResetWithOption:(unsigned char)arg1;
- (unsigned long long)_applyExtraTime:(double)arg1 to:(unsigned long long)arg2;
- (void)_cancelSecondChance;
- (id)_capturePathWithPrefix:(id)arg1 eventKind:(unsigned char)arg2;
- (void)_clearDeviceHandHeld;
- (void)_commonInit;
- (double)_computeSATScore:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1;
- (double)_computeSamplingMSE:(id)arg1 selectedUtts:(id)arg2 beforeScores:(id)arg3;
- (bool)_configureWithConfig:(id)arg1 resourcePath:(id)arg2;
- (bool)_configureWithDefaults;
- (void)_createFirstChanceMeta:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1;
- (id)_createVTEventInfoString:(id)arg1;
- (id)_desRecordFromTriggerData:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1 sampleCount:(unsigned long long*)arg2;
- (void)_firstUnlockedAndSpringBoardStarted;
- (id)_getAssetHashFromConfigPath:(id)arg1;
- (id)_getSATDirectory;
- (bool)_getSecondChanceEffective;
- (id)_getSortedEnrollmentUtterances;
- (id)_getSpeakerModelPath:(id)arg1 createDirectory:(bool)arg2;
- (void)_handleAssetChangeForLanguageCode:(id)arg1;
- (id)_handleTriggerEvent:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1 num_new_samples:(unsigned int)arg2 satScore:(double)arg3;
- (void)_initDetector;
- (bool)_isDeviceHandheld;
- (void)_logCorruptAudio;
- (void)_logDESRecord:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1 result:(id)arg2;
- (void)_logDESRecord:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1 result:(id)arg2 isActualTrigger:(bool)arg3;
- (void)_logDESTriggerRecord:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)arg1 result:(id)arg2;
- (void)_logMetaData:(id)arg1;
- (void)_logPrepareProperty:(id)arg1;
- (void)_notifyAssetChangedCallback;
- (void)_performReadyCompletion;
- (void)_phraseSpotterEnabledDidChange;
- (id)_randomSubset:(id)arg1 numSelected:(unsigned int)arg2;
- (id)_recordTrainingSamplesAndMeta;
- (bool)_removeInvalidSATModel;
- (unsigned long long)_removeUnusedUttsFrom:(id)arg1 selectedUtts:(id)arg2;
- (void)_resetCounters;
- (bool)_retrainingSATModel:(id)arg1 spkrFile:(id)arg2;
- (void)_safeConfigureWithAnalyzer:(id)arg1 path:(id)arg2 data:(id)arg3 resourcePath:(id)arg4;
- (void)_safeReconfig;
- (id)_sampleFromSortedArray:(id)arg1 numSelected:(unsigned long long)arg2;
- (unsigned long long)_sampleLengthFrom:(unsigned int)arg1 To:(unsigned int)arg2;
- (void)_setDeviceHandHeld;
- (void)_setSecondChance;
- (bool)_shouldCreateAudioBuffer;
- (void)_storeFirstChanceAudio;
- (void)_voiceTriggerEnabledDidChange;
- (id)analyze:(struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; })arg1;
- (id)analyzeBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1;
- (id)assetDictionary;
- (void)clearTriggerCount;
- (void)dealloc;
- (void)didReceiveSiriSessionCancellation:(id)arg1;
- (void)didReceiveSleepGesture;
- (void)didReceiveWakeGesture;
- (id)firstChanceAudioBuffer;
- (id)firstChanceTriggeredDate;
- (id)firstChanceVTEventInfo;
- (unsigned long long)getAdjustedDeviceStartTime:(unsigned long long)arg1;
- (id)getAudioBuffer;
- (id)getCorealisRTModel;
- (id)getLanguageCode;
- (id)getSATDirectory;
- (id)init;
- (id)initWithConfig:(id)arg1 resourcePath:(id)arg2;
- (id)initWithHardwareSampleRate:(double)arg1;
- (id)initWithHardwareSampleRate:(double)arg1 readyCompletion:(id /* block */)arg2;
- (id)initWithLanguageCodeForSATEnrollment:(id)arg1;
- (long long)isFollowedBySpeech;
- (double)lastScore;
- (double)lastSupervecScore;
- (unsigned char)lastTriggerType;
- (void)looseTriggerThreshold;
- (void)notifyAssetChangeWithCallback:(id /* block */)arg1;
- (void)prepareWithProperty:(id)arg1 readyCompletion:(id /* block */)arg2;
- (void)requestFoceTrigger;
- (void)requestSecondChance;
- (unsigned long long)sampleCount;
- (unsigned long long)sampleCountAtEndOfTrigger;
- (unsigned long long)sampleCountAtStartOfTrigger;
- (unsigned long long)samplerate;
- (void)sanitizeSATFiles;
- (void)setBypass:(bool)arg1;
- (void)startAudioCapture;
- (void)stopAudioCapture;
- (void)textDependentSpeakerRecognizer:(id)arg1 hasSatScore:(float)arg2;
- (long long)triggerCount;

@end
