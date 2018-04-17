/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface CAMBadgeTextView : CAMBadgeView {
    NSString * __text;
    NSDictionary * __textAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __textInsets;
}

@property (setter=_setText:, nonatomic, copy) NSString *_text;
@property (setter=_setTextAttributes:, nonatomic, copy) NSDictionary *_textAttributes;
@property (setter=_setTextInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _textInsets;

- (void).cxx_destruct;
- (id)_maskImage;
- (void)_setText:(id)arg1;
- (void)_setTextAttributes:(id)arg1;
- (void)_setTextInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_text;
- (id)_textAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textInsets;
- (struct CGSize { double x1; double x2; })_textSize;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;

@end
