/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDFactoid : PBCodable <NSCopying> {
    NSString * _text;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasText;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)factoidPairAvailableForPlaceData:(id)arg1;
+ (id)factoidsForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasText;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)text;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
