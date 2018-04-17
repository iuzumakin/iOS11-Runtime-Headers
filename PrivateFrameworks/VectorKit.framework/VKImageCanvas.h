/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKImageCanvas : NSObject {
    VKScreenCameraController * _cameraController;
    <VKImageCanvasDelegate> * _delegate;
    <MDRenderTarget> * _displayTarget;
    unsigned char  _emphasis;
    struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; } * _layoutContext;
    struct DisplayStyle { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        unsigned char mapHasLabels; 
    }  _mapDisplayStyle;
    struct Renderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_3_1_1; } x3; struct RenderLayer {} *x4[28]; struct RenderLayer {} *x5[65]; struct RunLoopController {} *x6; struct MapEngine {} *x7; } * _mapRenderer;
    long long  _mapType;
    struct RunLoopController { struct MapEngine {} *x1; } * _runLoopController;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
}

@property (nonatomic) <VKImageCanvasDelegate> *delegate;
@property (nonatomic) unsigned char emphasis;
@property (nonatomic) struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; } mapDisplayStyle;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic) long long mapType;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; } taskContext;
@property (nonatomic, readonly) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelLoad;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)dealloc;
- (id)delegate;
- (void)didLayout;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (unsigned char)emphasis;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1;
- (void)loadScene;
- (struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })mapDisplayStyle;
- (id)mapRegion;
- (long long)mapType;
- (double)pitch;
- (void)renderSceneWithEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 completion:(struct function<void ()>={type=[24C] {})arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setDelegate:(id)arg1;
- (void)setEmphasis:(unsigned char)arg1;
- (void)setMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(long long)arg1;
- (struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })taskContext;
- (void)update;
- (double)yaw;

@end
