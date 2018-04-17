/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface PricePopoverBar : UIView {
    UIImage * _backgroundImage;
    UIColor * _imageMaskColor;
    UILabel * _percentChangeLabel;
    UIImageView * _percentChangeSignView;
    UIImageView * _priceChangeSignView;
    UILabel * _priceLabel;
}

@property (nonatomic, retain) UIColor *imageMaskColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageMaskColor;
- (id)initWithBackgroundImage:(id)arg1;
- (void)layoutSubviews;
- (void)setChangeImage:(id)arg1;
- (void)setImageMaskColor:(id)arg1;
- (void)setPercentChange:(id)arg1;
- (void)setPriceString:(id)arg1;
- (void)sizeToFit;

@end
