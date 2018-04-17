/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiCLTMSliceSpecific : PBCodable <NSCopying> {
    unsigned int  _batteryVoltage;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _batteryVoltageBucketeds;
    unsigned int  _cltmIndex;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _cltmIndexBucketeds;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int updateCount : 1; 
        unsigned int batteryVoltage : 1; 
        unsigned int cltmIndex : 1; 
        unsigned int numActiveChains : 1; 
        unsigned int ppm : 1; 
        unsigned int temperature : 1; 
        unsigned int txDutyCycle : 1; 
        unsigned int txPowerBackoff : 1; 
    }  _has;
    unsigned int  _numActiveChains;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _numActiveChainsBucketeds;
    unsigned int  _ppm;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _ppmBucketeds;
    int  _temperature;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _temperatureBucketeds;
    unsigned long long  _timestamp;
    unsigned int  _txDutyCycle;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txDutyCycleBucketeds;
    int  _txPowerBackoff;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txPowerBackoffBucketeds;
    unsigned long long  _updateCount;
}

@property (nonatomic) unsigned int batteryVoltage;
@property (nonatomic, readonly) unsigned int*batteryVoltageBucketeds;
@property (nonatomic, readonly) unsigned long long batteryVoltageBucketedsCount;
@property (nonatomic) unsigned int cltmIndex;
@property (nonatomic, readonly) unsigned int*cltmIndexBucketeds;
@property (nonatomic, readonly) unsigned long long cltmIndexBucketedsCount;
@property (nonatomic) bool hasBatteryVoltage;
@property (nonatomic) bool hasCltmIndex;
@property (nonatomic) bool hasNumActiveChains;
@property (nonatomic) bool hasPpm;
@property (nonatomic) bool hasTemperature;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTxDutyCycle;
@property (nonatomic) bool hasTxPowerBackoff;
@property (nonatomic) bool hasUpdateCount;
@property (nonatomic) unsigned int numActiveChains;
@property (nonatomic, readonly) unsigned int*numActiveChainsBucketeds;
@property (nonatomic, readonly) unsigned long long numActiveChainsBucketedsCount;
@property (nonatomic) unsigned int ppm;
@property (nonatomic, readonly) unsigned int*ppmBucketeds;
@property (nonatomic, readonly) unsigned long long ppmBucketedsCount;
@property (nonatomic) int temperature;
@property (nonatomic, readonly) int*temperatureBucketeds;
@property (nonatomic, readonly) unsigned long long temperatureBucketedsCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int txDutyCycle;
@property (nonatomic, readonly) unsigned int*txDutyCycleBucketeds;
@property (nonatomic, readonly) unsigned long long txDutyCycleBucketedsCount;
@property (nonatomic) int txPowerBackoff;
@property (nonatomic, readonly) int*txPowerBackoffBucketeds;
@property (nonatomic, readonly) unsigned long long txPowerBackoffBucketedsCount;
@property (nonatomic) unsigned long long updateCount;

- (void)addBatteryVoltageBucketed:(unsigned int)arg1;
- (void)addCltmIndexBucketed:(unsigned int)arg1;
- (void)addNumActiveChainsBucketed:(unsigned int)arg1;
- (void)addPpmBucketed:(unsigned int)arg1;
- (void)addTemperatureBucketed:(int)arg1;
- (void)addTxDutyCycleBucketed:(unsigned int)arg1;
- (void)addTxPowerBackoffBucketed:(int)arg1;
- (unsigned int)batteryVoltage;
- (unsigned int)batteryVoltageBucketedAtIndex:(unsigned long long)arg1;
- (unsigned int*)batteryVoltageBucketeds;
- (unsigned long long)batteryVoltageBucketedsCount;
- (void)clearBatteryVoltageBucketeds;
- (void)clearCltmIndexBucketeds;
- (void)clearNumActiveChainsBucketeds;
- (void)clearPpmBucketeds;
- (void)clearTemperatureBucketeds;
- (void)clearTxDutyCycleBucketeds;
- (void)clearTxPowerBackoffBucketeds;
- (unsigned int)cltmIndex;
- (unsigned int)cltmIndexBucketedAtIndex:(unsigned long long)arg1;
- (unsigned int*)cltmIndexBucketeds;
- (unsigned long long)cltmIndexBucketedsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBatteryVoltage;
- (bool)hasCltmIndex;
- (bool)hasNumActiveChains;
- (bool)hasPpm;
- (bool)hasTemperature;
- (bool)hasTimestamp;
- (bool)hasTxDutyCycle;
- (bool)hasTxPowerBackoff;
- (bool)hasUpdateCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numActiveChains;
- (unsigned int)numActiveChainsBucketedAtIndex:(unsigned long long)arg1;
- (unsigned int*)numActiveChainsBucketeds;
- (unsigned long long)numActiveChainsBucketedsCount;
- (unsigned int)ppm;
- (unsigned int)ppmBucketedAtIndex:(unsigned long long)arg1;
- (unsigned int*)ppmBucketeds;
- (unsigned long long)ppmBucketedsCount;
- (bool)readFrom:(id)arg1;
- (void)setBatteryVoltage:(unsigned int)arg1;
- (void)setBatteryVoltageBucketeds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setCltmIndex:(unsigned int)arg1;
- (void)setCltmIndexBucketeds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasBatteryVoltage:(bool)arg1;
- (void)setHasCltmIndex:(bool)arg1;
- (void)setHasNumActiveChains:(bool)arg1;
- (void)setHasPpm:(bool)arg1;
- (void)setHasTemperature:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTxDutyCycle:(bool)arg1;
- (void)setHasTxPowerBackoff:(bool)arg1;
- (void)setHasUpdateCount:(bool)arg1;
- (void)setNumActiveChains:(unsigned int)arg1;
- (void)setNumActiveChainsBucketeds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPpm:(unsigned int)arg1;
- (void)setPpmBucketeds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTemperature:(int)arg1;
- (void)setTemperatureBucketeds:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxDutyCycle:(unsigned int)arg1;
- (void)setTxDutyCycleBucketeds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTxPowerBackoff:(int)arg1;
- (void)setTxPowerBackoffBucketeds:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUpdateCount:(unsigned long long)arg1;
- (int)temperature;
- (int)temperatureBucketedAtIndex:(unsigned long long)arg1;
- (int*)temperatureBucketeds;
- (unsigned long long)temperatureBucketedsCount;
- (unsigned long long)timestamp;
- (unsigned int)txDutyCycle;
- (unsigned int)txDutyCycleBucketedAtIndex:(unsigned long long)arg1;
- (unsigned int*)txDutyCycleBucketeds;
- (unsigned long long)txDutyCycleBucketedsCount;
- (int)txPowerBackoff;
- (int)txPowerBackoffBucketedAtIndex:(unsigned long long)arg1;
- (int*)txPowerBackoffBucketeds;
- (unsigned long long)txPowerBackoffBucketedsCount;
- (unsigned long long)updateCount;
- (void)writeTo:(id)arg1;

@end
