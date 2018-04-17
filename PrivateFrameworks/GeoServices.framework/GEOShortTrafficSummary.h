/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOShortTrafficSummary : PBCodable <NSCopying> {
    GEOFormattedString * _detail;
    NSMutableArray * _titles;
}

@property (nonatomic, retain) GEOFormattedString *detail;
@property (nonatomic, readonly) bool hasDetail;
@property (nonatomic, retain) NSMutableArray *titles;

+ (Class)titleType;

- (void).cxx_destruct;
- (void)addTitle:(id)arg1;
- (void)clearTitles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (bool)hasDetail;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)titleAtIndex:(unsigned long long)arg1;
- (id)titles;
- (unsigned long long)titlesCount;
- (void)writeTo:(id)arg1;

@end
