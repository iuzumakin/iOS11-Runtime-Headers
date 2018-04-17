/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUnitPreferenceController : NSObject {
    HKHealthStore * _healthStore;
    NSDictionary * _unitPreferencesByObjectType;
    NSMutableDictionary * _unitStrings;
}

- (void).cxx_destruct;
- (id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2;
- (id)_displayNameKey:(id)arg1 withNumber:(bool)arg2;
- (id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(bool)arg2;
- (id)_displayNameKeyForUnit:(id)arg1;
- (void)_fetchHKUnitPreferencesWithAttempt:(long long)arg1;
- (id)_generateDefaultHKUnitPreferences;
- (void)_initHKUnitPreferences;
- (void)_localeDidChange:(id)arg1;
- (id)_longDisplayNameForUnit:(id)arg1;
- (id)_longDisplayNameOverrideForDisplayType:(id)arg1;
- (void)_postNotificationWithChangedKeys:(id)arg1;
- (void)_refreshHKUnitPreferencesWithCompletion:(id /* block */)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_updateHKUnitPreferences:(id)arg1;
- (void)dealloc;
- (id)displayRangeForDisplayType:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)localizedDisplayNameForDisplayType:(id)arg1;
- (id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2;
- (id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2;
- (id)localizedHealthUIStringForDisplayType:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)localizedLongDisplayNameForDisplayType:(id)arg1;
- (double)scaleFactorForYAxisLabeling:(id)arg1;
- (id)unitForDisplayType:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2;

@end
