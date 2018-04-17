/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLMPRequestedInstance : PBCodable <NSCopying> {
    int  _confidence;
    NSString * _eventId;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int confidence : 1; 
        unsigned int occurrences : 1; 
        unsigned int reason : 1; 
        unsigned int suggested : 1; 
    }  _has;
    int  _occurrences;
    int  _reason;
    bool  _suggested;
    unsigned long long  _timestamp;
}

@property (nonatomic) int confidence;
@property (nonatomic, retain) NSString *eventId;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasEventId;
@property (nonatomic) bool hasOccurrences;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasSuggested;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int occurrences;
@property (nonatomic) int reason;
@property (nonatomic) bool suggested;
@property (nonatomic) unsigned long long timestamp;

- (int)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventId;
- (bool)hasConfidence;
- (bool)hasEventId;
- (bool)hasOccurrences;
- (bool)hasReason;
- (bool)hasSuggested;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)occurrences;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setConfidence:(int)arg1;
- (void)setEventId:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasOccurrences:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSuggested:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOccurrences:(int)arg1;
- (void)setReason:(int)arg1;
- (void)setSuggested:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)suggested;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
