/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAFmfGeoFence *geoFence;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSURL *searchContext;
@property (readonly) Class superclass;

+ (id)geoFenceSetCompleted;
+ (id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)geoFence;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)searchContext;
- (void)setGeoFence:(id)arg1;
- (void)setSearchContext:(id)arg1;

@end
