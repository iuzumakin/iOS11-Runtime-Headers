/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIConvolution : CIFilter {
    CIImage * inputImage;
    NSNumber * inputLinearFilterModeEnabled;
    NSArray * inputPoints;
    NSArray * inputWeights;
}

- (id)_CIConvolutionAdd_1;
- (id)_CIConvolutionAdd_2;
- (id)_CIConvolutionAdd_3;
- (id)_CIConvolutionAdd_4;
- (id)_CIConvolutionAdd_5;
- (id)_CIConvolutionAdd_6;
- (id)_CIConvolutionAdd_7;
- (id)_CIConvolutionAdd_8;
- (id)doConvolutionPass:(id)arg1 weights:(id)arg2 sums:(id)arg3;
- (id)outputImage;
- (int)samplesPerPass;

@end
