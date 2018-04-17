/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSPlayerInfoContextRequestToken : PBCodable <NSCopying> {
    unsigned long long  _accountID;
    struct { 
        unsigned int accountID : 1; 
        unsigned int sessionID : 1; 
    }  _has;
    unsigned long long  _sessionID;
    NSData * _token;
}

@property (nonatomic) unsigned long long accountID;
@property (nonatomic) bool hasAccountID;
@property (nonatomic) bool hasSessionID;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic, retain) NSData *token;

- (void).cxx_destruct;
- (unsigned long long)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountID;
- (bool)hasSessionID;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sessionID;
- (void)setAccountID:(unsigned long long)arg1;
- (void)setHasAccountID:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (void)writeTo:(id)arg1;

@end
