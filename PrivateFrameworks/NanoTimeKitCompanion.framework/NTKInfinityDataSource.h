/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKInfinityDataSource : NSObject {
    NSArray * _listings;
    long long  _numberOfTotalActions;
    long long  _numberOfTotalMagicMoments;
}

@property (nonatomic) long long numberOfTotalActions;
@property (nonatomic) long long numberOfTotalMagicMoments;

+ (id)alienColor;
+ (id)ballColor;
+ (id)bullseyeColor;
+ (id)buzzColor;
+ (id)hammColor;
+ (id)hangGliderColor;
+ (id)jessieColor;
+ (id)rexColor;
+ (id)spotlightColor;
+ (id)supportingCastColor;
+ (id)woodyColor;

- (void).cxx_destruct;
- (void)_countListings;
- (void)_loadCharacters;
- (id)init;
- (id)listingsForCharacter:(unsigned long long)arg1;
- (id)listingsForCharacter:(unsigned long long)arg1 ofTypes:(id)arg2 withAttributes:(id)arg3 recentlyUsed:(id)arg4;
- (id)listingsOfTypes:(id)arg1 withAttributes:(id)arg2 recentlyUsed:(id)arg3;
- (long long)numberOfTotalActions;
- (long long)numberOfTotalMagicMoments;
- (void)setNumberOfTotalActions:(long long)arg1;
- (void)setNumberOfTotalMagicMoments:(long long)arg1;

@end
