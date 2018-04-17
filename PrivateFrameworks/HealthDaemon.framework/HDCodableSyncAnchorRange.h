/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableSyncAnchorRange : PBCodable <NSCopying> {
    long long  _endAnchor;
    long long  _entityType;
    struct { 
        unsigned int endAnchor : 1; 
        unsigned int entityType : 1; 
        unsigned int startAnchor : 1; 
    }  _has;
    long long  _startAnchor;
}

@property (nonatomic) long long endAnchor;
@property (nonatomic) long long entityType;
@property (nonatomic) bool hasEndAnchor;
@property (nonatomic) bool hasEntityType;
@property (nonatomic) bool hasStartAnchor;
@property (nonatomic) long long startAnchor;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endAnchor;
- (long long)entityType;
- (bool)hasEndAnchor;
- (bool)hasEntityType;
- (bool)hasStartAnchor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndAnchor:(long long)arg1;
- (void)setEntityType:(long long)arg1;
- (void)setHasEndAnchor:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasStartAnchor:(bool)arg1;
- (void)setStartAnchor:(long long)arg1;
- (long long)startAnchor;
- (void)writeTo:(id)arg1;

@end
