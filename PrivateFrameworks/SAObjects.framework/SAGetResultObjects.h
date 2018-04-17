/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetResultObjects : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *objectIdentifiers;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getResultObjects;
+ (id)getResultObjectsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)objectIdentifiers;
- (bool)requiresResponse;
- (void)setObjectIdentifiers:(id)arg1;

@end
