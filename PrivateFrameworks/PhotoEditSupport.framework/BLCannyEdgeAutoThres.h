/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCannyEdgeAutoThres : NSObject {
    float * _anglePointer;
    int  _cols;
    char * _dataPointer;
    int * _deriv_x;
    int * _deriv_y;
    int * _magnitude;
    char * _nonMaxSup;
    int  _rows;
    float  _sigma;
    int * _smoothedImg;
}

- (void)CannyEdge:(char *)arg1 rows:(int)arg2 cols:(int)arg3 output:(char *)arg4 outputAngle:(float*)arg5;
- (void)apply_hysteresis:(char *)arg1;
- (void)derivative_x_y;
- (void)follow_edges:(char *)arg1 edgeMagPtr:(int*)arg2 lowVal:(int)arg3;
- (void)gaussianSmooth;
- (void)genGaussianKernel:(float*)arg1;
- (void)magnitude_x_y;
- (void)non_max_supp;

@end
