/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSQueryRankingConfiguration : NSObject {
    bool  _allowAnonymousDataCollection;
    unsigned long long  _dominantRankingQueryCount;
    unsigned long long  _dominatedRankingQueryCount;
    unsigned long long  _rankingBitCount;
    NSArray * _rankingQueries;
    NSSet * _requiredAttributes;
    unsigned long long  _strongRankingQueryCount;
}

@property bool allowAnonymousDataCollection;
@property unsigned long long dominantRankingQueryCount;
@property unsigned long long dominatedRankingQueryCount;
@property unsigned long long rankingBitCount;
@property (retain) NSArray *rankingQueries;
@property (retain) NSSet *requiredAttributes;
@property unsigned long long strongRankingQueryCount;

+ (void)updateMailVIP:(id)arg1 phoneFavorites:(id)arg2 meEmailAddresses:(id)arg3;

- (void).cxx_destruct;
- (bool)allowAnonymousDataCollection;
- (unsigned long long)dominantRankingQueryCount;
- (unsigned long long)dominatedRankingQueryCount;
- (unsigned long long)rankingBitCount;
- (id)rankingQueries;
- (id)requiredAttributes;
- (void)setAllowAnonymousDataCollection:(bool)arg1;
- (void)setDominantRankingQueryCount:(unsigned long long)arg1;
- (void)setDominatedRankingQueryCount:(unsigned long long)arg1;
- (void)setRankingBitCount:(unsigned long long)arg1;
- (void)setRankingQueries:(id)arg1;
- (void)setRequiredAttributes:(id)arg1;
- (void)setStrongRankingQueryCount:(unsigned long long)arg1;
- (unsigned long long)strongRankingQueryCount;

@end
