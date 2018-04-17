/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {
    int  _guidanceLevel;
    int  _guidanceLevelIgnoringTimeCriterion;
    struct { 
        unsigned int guidanceLevel : 1; 
        unsigned int guidanceLevelIgnoringTimeCriterion : 1; 
        unsigned int navigationState : 1; 
        unsigned int trackedTransportType : 1; 
        unsigned int shouldSuppressCellularDataAlerts : 1; 
    }  _has;
    int  _navigationState;
    bool  _shouldSuppressCellularDataAlerts;
    int  _trackedTransportType;
}

@property (nonatomic) int guidanceLevel;
@property (nonatomic) int guidanceLevelIgnoringTimeCriterion;
@property (nonatomic) bool hasGuidanceLevel;
@property (nonatomic) bool hasGuidanceLevelIgnoringTimeCriterion;
@property (nonatomic) bool hasNavigationState;
@property (nonatomic) bool hasShouldSuppressCellularDataAlerts;
@property (nonatomic) bool hasTrackedTransportType;
@property (nonatomic) int navigationState;
@property (nonatomic) bool shouldSuppressCellularDataAlerts;
@property (nonatomic) int trackedTransportType;

- (int)StringAsGuidanceLevel:(id)arg1;
- (int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg1;
- (int)StringAsNavigationState:(id)arg1;
- (int)StringAsTrackedTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)guidanceLevel;
- (id)guidanceLevelAsString:(int)arg1;
- (int)guidanceLevelIgnoringTimeCriterion;
- (id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg1;
- (bool)hasGuidanceLevel;
- (bool)hasGuidanceLevelIgnoringTimeCriterion;
- (bool)hasNavigationState;
- (bool)hasShouldSuppressCellularDataAlerts;
- (bool)hasTrackedTransportType;
- (unsigned long long)hash;
- (id)initWithGuidanceLevel:(int)arg1;
- (id)initWithTransportType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)navigationState;
- (id)navigationStateAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGuidanceLevel:(int)arg1;
- (void)setGuidanceLevelIgnoringTimeCriterion:(int)arg1;
- (void)setHasGuidanceLevel:(bool)arg1;
- (void)setHasGuidanceLevelIgnoringTimeCriterion:(bool)arg1;
- (void)setHasNavigationState:(bool)arg1;
- (void)setHasShouldSuppressCellularDataAlerts:(bool)arg1;
- (void)setHasTrackedTransportType:(bool)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setShouldSuppressCellularDataAlerts:(bool)arg1;
- (void)setTrackedTransportType:(int)arg1;
- (bool)shouldSuppressCellularDataAlerts;
- (int)trackedTransportType;
- (id)trackedTransportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
