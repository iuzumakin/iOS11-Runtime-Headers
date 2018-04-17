/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentBubbleView : UIView {
    unsigned long long  _action;
    PKContinuousButton * _actionButton;
    id /* block */  _actionHandler;
    UIActivityIndicatorView * _actionSpinner;
    NSDecimalNumber * _amount;
    UIImageView * _applePayLogoImageView;
    NSString * _currency;
    NSNumberFormatter * _currencyFormatter;
    bool  _displaysApplePayLogo;
    bool  _hasRoundedCorners;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastBoundsForRoundedCornerLayout;
    bool  _liveRenderingEnabled;
    CAShapeLayer * _maskLayer;
    UILabel * _messageLabel;
    PKPeerPayment3DTextView * _renderView;
    bool  _showsActionSpinner;
    unsigned long long  _state;
    UILabel * _statusLabel;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic) bool displaysApplePayLogo;
@property (nonatomic) bool hasRoundedCorners;
@property (getter=isLiveRenderingEnabled, nonatomic) bool liveRenderingEnabled;
@property (nonatomic) bool showsActionSpinner;
@property (nonatomic) unsigned long long state;

+ (struct CGSize { double x1; double x2; })referenceSize;
+ (struct CGSize { double x1; double x2; })referenceSizeForState:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })referenceSizeForState:(unsigned long long)arg1 andAction:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (id)_actionTitle;
- (id)_backgroundColor;
- (void)_commonInit;
- (id)_messageText;
- (id)_messageTextAttributes;
- (id)_messageTextColor;
- (id)_statusText;
- (void)_updateContent;
- (void)_updateCurrencyFormatter;
- (unsigned long long)action;
- (id /* block */)actionHandler;
- (id)amount;
- (void)awakeFromNib;
- (id)currency;
- (bool)displaysApplePayLogo;
- (bool)hasRoundedCorners;
- (id)init;
- (id)initWithAmount:(id)arg1 currency:(id)arg2 state:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLiveRenderingEnabled;
- (void)layoutSubviews;
- (void)setAction:(unsigned long long)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setDisplaysApplePayLogo:(bool)arg1;
- (void)setHasRoundedCorners:(bool)arg1;
- (void)setLiveRenderingEnabled:(bool)arg1;
- (void)setShowsActionSpinner:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)showsActionSpinner;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)state;
- (void)updateWithPaymentTransaction:(id)arg1;
- (void)updateWithPeerPaymentMessage:(id)arg1;
- (void)updateWithPeerPaymentStatus:(unsigned long long)arg1;
- (void)updateWithPeerPaymentStatusResponse:(id)arg1;

@end