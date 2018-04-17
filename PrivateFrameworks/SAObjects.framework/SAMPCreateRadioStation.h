/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSNumber *startPlaying;
@property (nonatomic, copy) NSURL *stationUrl;

+ (id)createRadioStation;
+ (id)createRadioStationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setStartPlaying:(id)arg1;
- (void)setStationUrl:(id)arg1;
- (id)startPlaying;
- (id)stationUrl;

@end
