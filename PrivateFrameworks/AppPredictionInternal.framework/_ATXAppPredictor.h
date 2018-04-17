/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppPredictor : NSObject {
    NSArray * _abGroupIdentifiers;
    _ATXAppDailyDose * _appDailyDose;
    _ATXAppInstallMonitor * _appInstallMonitor;
    APRAppIntentMonitor * _appIntentMonitor;
    bool  _appLaunchAndInstallMonitorsInitialized;
    _ATXAppLaunchLocation * _appLaunchLocation;
    _ATXAppLaunchMonitor * _appLaunchMonitor;
    _APRParzenModel * _appNonSiriKitIntentParzen;
    ATXAppPredictionBlacklist * _appPredictionBlacklist;
    _APRParzenModel * _appSiriKitIntentParzen;
    NSString * _dayZeroABGroupIdentifier;
    NSDictionary * _dayZeroParameters;
    NSArray * _finalSubScores;
    NSArray * _interpreters;
    ATXMagicalMomentsUpdateMonitor * _mmPredictionMonitor;
    bool  _mostRecentOnWifi;
    NSString * _mostRecentSSID;
    ATXBBNotificationManager * _notificationManager;
    NSObject<OS_dispatch_queue> * _queue;
    _ATXRecentInstallCache * _recentInstallCache;
    NSDictionary * _sasBundleScoreBoost;
    NSUserDefaults * _userDefaults;
}

@property bool mostRecentOnWifi;
@property (copy) NSString *mostRecentSSID;

+ (id)getABGroupOverride;
+ (id)getParseTreeForConsumerSubType:(unsigned char)arg1;
+ (id)recreateSharedInstanceWithCurrentABGroup;
+ (void)removeOldLaunchInfoFrom:(id)arg1 appLaunchHistogram:(id)arg2 spotlightLaunchHistogram:(id)arg3 unlockTimeHistogram:(id)arg4 dayOfWeekHistogram:(id)arg5 airplaneModeLaunchHistogram:(id)arg6 trendingLaunchHistogram:(id)arg7 wifiLaunchHistogram:(id)arg8 launchSequenceManager:(id)arg9 bundleIdTable:(id)arg10 aprExplicitConfirmsHistogram:(id)arg11 aprExplicitRejectsHistogram:(id)arg12 aprImplicitConfirmsHistogram:(id)arg13 aprImplicitRejectsHistogram:(id)arg14 aprSiriKitIntentsHistogram:(id)arg15 aprNonSiriKitIntentsHistogram:(id)arg16;
+ (id)sharedInstance;
+ (double)time:(double)arg1 toAccuracyInSeconds:(double)arg2;

- (void).cxx_destruct;
- (id)_appsToPredictWithConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 allSBApps:(id)arg4 blacklistedApps:(id)arg5;
- (struct { char *x1; double x2[69]; double x3; }*)_getPredictionForApps:(id)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 scoreLogger:(id)arg4;
- (bool)_initAppLaunchAndInstallMonitors;
- (double)_predictionScoreForItem:(const struct { char *x1; double x2[69]; double x3; }*)arg1 consumerSubType:(unsigned char)arg2 scoreLogger:(id)arg3 intentType:(id)arg4;
- (void)_updateFromAppPreferencePredictorAsset;
- (void)_updateFromAsset;
- (void)_updateFromZeroDayAsset;
- (id)abGroupNilString;
- (id)appInstallMonitor;
- (id)appLaunchMonitor;
- (void)dealloc;
- (id)getABGroups;
- (id)getPredictionModelDetails;
- (id)init;
- (id)initInternal;
- (bool)mostRecentOnWifi;
- (id)mostRecentSSID;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)predictWithLimit:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 candidateBundleIdentifiers:(id)arg4 scoreLogger:(id)arg5;
- (double)predictionScoreForItem:(const struct { char *x1; double x2[69]; double x3; }*)arg1 consumerSubType:(unsigned char)arg2;
- (void)receiveFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 aprResponse:(id)arg4 engagementType:(unsigned long long)arg5 engagedBundleId:(id)arg6 bundleIdsShown:(id)arg7;
- (void)restoreSerializedState:(id)arg1;
- (id)serializeState;
- (void)setMostRecentOnWifi:(bool)arg1;
- (void)setMostRecentSSID:(id)arg1;
- (void)train;
- (void)updateLaunchHistoryFromDuet;

@end
