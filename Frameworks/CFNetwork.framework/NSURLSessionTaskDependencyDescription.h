/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionTaskDependencyDescription : NSObject {
    NSString * _dependentMimeType;
    NSString * _dependentURLPath;
    NSString * _parentMimeType;
    NSString * _parentURLPath;
}

@property (nonatomic, retain) __NSURLSessionTaskDependencyResourceIdentifier *_dependent;
@property (nonatomic, retain) __NSURLSessionTaskDependencyResourceIdentifier *_parent;
@property (readonly) NSString *dependentMimeType;
@property (readonly) NSString *dependentURLPath;
@property (nonatomic) bool exclusive;
@property (readonly) NSString *parentMimeType;
@property (readonly) NSString *parentURLPath;
@property (nonatomic) float priority;

+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentURLPath:(id)arg2;
+ (id)taskDependencyDescriptionWithParentMimeType:(id)arg1;
+ (id)taskDependencyDescriptionWithParentURLPath:(id)arg1;
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentURLPath:(id)arg2;

- (id)dependentMimeType;
- (id)dependentURLPath;
- (id)parentMimeType;
- (id)parentURLPath;

@end
