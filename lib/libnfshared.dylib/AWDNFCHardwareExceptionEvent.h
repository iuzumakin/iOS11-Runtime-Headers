/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCHardwareExceptionEvent : PBCodable <NSCopying> {
    NSString * _exceptionData;
    unsigned int  _hardwareType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int hardwareType : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _type;
    NSData * _uuidReference;
}

@property (nonatomic, retain) NSString *exceptionData;
@property (nonatomic) unsigned int hardwareType;
@property (nonatomic, readonly) bool hasExceptionData;
@property (nonatomic) bool hasHardwareType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSData *uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exceptionData;
- (unsigned int)hardwareType;
- (bool)hasExceptionData;
- (bool)hasHardwareType;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExceptionData:(id)arg1;
- (void)setHardwareType:(unsigned int)arg1;
- (void)setHasHardwareType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned long long)timestamp;
- (unsigned int)type;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
