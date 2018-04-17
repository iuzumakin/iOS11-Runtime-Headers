/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASComment : NSObject <NSSecureCoding> {
    NSString * _GUID;
    int  _ID;
    NSDate * _clientTimestamp;
    NSString * _content;
    NSString * _email;
    NSString * _firstName;
    NSString * _fullName;
    bool  _isBatchComment;
    bool  _isCaption;
    bool  _isDeletable;
    bool  _isLike;
    bool  _isMine;
    NSString * _lastName;
    NSString * _personID;
    NSDate * _timestamp;
}

@property (nonatomic, retain) NSString *GUID;
@property (nonatomic) int ID;
@property (nonatomic, retain) NSDate *clientTimestamp;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic) bool isBatchComment;
@property (nonatomic) bool isCaption;
@property (nonatomic) bool isDeletable;
@property (nonatomic) bool isLike;
@property (nonatomic) bool isMine;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)MSASPCommentFromProtocolDictionary:(id)arg1;
+ (id)comment;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (int)ID;
- (id)clientTimestamp;
- (id)content;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)fullName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBatchComment;
- (bool)isCaption;
- (bool)isDeletable;
- (bool)isEqual:(id)arg1;
- (bool)isLike;
- (bool)isMine;
- (id)lastName;
- (id)personID;
- (void)setClientTimestamp:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setID:(int)arg1;
- (void)setIsBatchComment:(bool)arg1;
- (void)setIsCaption:(bool)arg1;
- (void)setIsDeletable:(bool)arg1;
- (void)setIsLike:(bool)arg1;
- (void)setIsMine:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end