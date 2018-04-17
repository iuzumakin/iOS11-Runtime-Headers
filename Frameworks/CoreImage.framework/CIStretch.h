/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIStretch : CIFilter {
    CIImage * inputImage;
    CIVector * inputPoint;
    CIVector * inputSize;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputPoint;
@property (nonatomic, retain) CIVector *inputSize;

+ (id)customAttributes;

- (id)_kernel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeDOD:(struct vec4 { float x1; float x2; float x3; float x4; })arg1;
- (id)inputImage;
- (id)inputPoint;
- (id)inputSize;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputPoint:(id)arg1;
- (void)setInputSize:(id)arg1;

@end
