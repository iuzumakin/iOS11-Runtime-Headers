/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsObject : NSObject {
    MTLToolsObject * _baseObject;
    MTLToolsDevice * _device;
    struct ILayerLockingPolicy { int (**x1)(); } * _lockingPolicy;
    MTLToolsObject * _parent;
    MTLToolsPointerArray * _tracker;
}

@property (nonatomic, retain) id baseObject;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic) struct ILayerLockingPolicy { int (**x1)(); }*lockingPolicy;
@property (nonatomic) MTLToolsPointerArray *tracker;

+ (id)dispatchQueue;
+ (void)visitObjects:(id)arg1 withVisitor:(id)arg2;

- (void)acceptVisitor:(id)arg1;
- (id)baseObject;
- (id)baseObjectWithClass:(Class)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy { int (**x1)(); }*)arg3;
- (struct ILayerLockingPolicy { int (**x1)(); }*)lockingPolicy;
- (id)originalObject;
- (id)parent;
- (void)setBaseObject:(id)arg1;
- (void)setLockingPolicy:(struct ILayerLockingPolicy { int (**x1)(); }*)arg1;
- (void)setOriginalObject:(id)arg1;
- (void)setTracker:(id)arg1;
- (id)strongParent;
- (id)tracker;

@end
