/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlayActivityMetadata : NSObject {
    NSString * _canonicalID;
    NSString * _canonicalShowID;
    unsigned long long  _contentType;
    NSString * _externalShowID;
    NSString * _internalLegID;
    NSNumber * _isCurrentEpisode;
    NSNumber * _isShowClosed;
    NSString * _key;
    NSString * _overrideChannelID;
}

@property (nonatomic, readonly) NSString *canonicalID;
@property (nonatomic, readonly) NSString *canonicalShowID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) NSString *externalShowID;
@property (nonatomic, readonly) NSString *internalLegID;
@property (nonatomic, readonly, copy) NSNumber *isCurrentEpisode;
@property (nonatomic, readonly, copy) NSNumber *isShowClosed;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *overrideChannelID;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)canonicalShowID;
- (unsigned long long)contentType;
- (id)externalShowID;
- (id)initWithKey:(id)arg1 dictionary:(id)arg2;
- (id)internalLegID;
- (id)isCurrentEpisode;
- (id)isShowClosed;
- (id)key;
- (id)overrideChannelID;

@end
