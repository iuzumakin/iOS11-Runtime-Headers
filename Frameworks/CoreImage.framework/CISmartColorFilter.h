/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISmartColorFilter : CIFilter {
    CIContext * _cubeContext;
    CIImage * _cubeImage;
    NSNumber * inputCast;
    NSNumber * inputContrast;
    CIImage * inputImage;
    NSNumber * inputUseCube;
    id  inputUseCubeColorSpace;
    NSNumber * inputVibrancy;
}

@property (nonatomic, retain) NSNumber *inputCast;
@property (nonatomic, retain) NSNumber *inputContrast;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputUseCube;
@property (nonatomic, retain) id inputUseCubeColorSpace;
@property (nonatomic, retain) NSNumber *inputVibrancy;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernelCNeg;
- (id)_kernelCPos;
- (id)_kernelCast;
- (id)_kernelV_gt1;
- (id)_kernelV_lt1;
- (void)dealloc;
- (id)inputCast;
- (id)inputContrast;
- (id)inputImage;
- (id)inputUseCube;
- (id)inputUseCubeColorSpace;
- (id)inputVibrancy;
- (id)outputImage;
- (void)setInputCast:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputUseCube:(id)arg1;
- (void)setInputUseCubeColorSpace:(id)arg1;
- (void)setInputVibrancy:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
