/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSHandle : NSObject {
    IDSURI * _URI;
    bool  _isUserVisible;
    long long  _validationStatus;
}

@property (nonatomic, readonly) IDSURI *URI;
@property (nonatomic, readonly) bool isUserVisible;
@property (nonatomic, readonly) long long validationStatus;

- (void).cxx_destruct;
- (id)URI;
- (id)description;
- (unsigned long long)hash;
- (id)initWithURI:(id)arg1 isUserVisible:(bool)arg2 validationStatus:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandle:(id)arg1;
- (bool)isUserVisible;
- (long long)validationStatus;

@end