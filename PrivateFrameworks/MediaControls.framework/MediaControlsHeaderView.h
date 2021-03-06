/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsHeaderView : UIView {
    UIView * _artworkBackgroundView;
    MPArtworkCatalog * _artworkCatalog;
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    UIImageView * _artworkView;
    UIView * _buttonBackground;
    MPButton * _doneButton;
    bool  _headerViewOnScreen;
    UIButton * _launchNowPlayingAppButton;
    NSString * _mediaSourceBundleID;
    bool  _onlyShowsRoutingPicker;
    struct CGSize { 
        double width; 
        double height; 
    }  _overrideSize;
    UIImageView * _placeholderArtworkView;
    MPButton * _playPauseButton;
    UILabel * _primaryLabel;
    MPUMarqueeView * _primaryMarqueeView;
    NSString * _primaryString;
    MPButton * _routingButton;
    UILabel * _secondaryLabel;
    MPUMarqueeView * _secondaryMarqueeView;
    NSString * _secondaryString;
    UIView * _shadow;
    bool  _shouldEnableMarquee;
    bool  _shouldUseOverrideSize;
    bool  _shouldUsePlaceholderArtwork;
    bool  _showingRoutingPicker;
    long long  _style;
    UILabel * _titleLabel;
    MPUMarqueeView * _titleMarqueeView;
    NSString * _titleString;
    bool  _transitioning;
}

@property (nonatomic, retain) UIView *artworkBackgroundView;
@property (nonatomic, retain) MPArtworkCatalog *artworkCatalog;
@property (nonatomic) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic, retain) UIImageView *artworkView;
@property (nonatomic, retain) UIView *buttonBackground;
@property (nonatomic, retain) MPButton *doneButton;
@property (getter=isHeaderViewOnScreen, nonatomic) bool headerViewOnScreen;
@property (nonatomic, retain) UIButton *launchNowPlayingAppButton;
@property (nonatomic, retain) NSString *mediaSourceBundleID;
@property (nonatomic) bool onlyShowsRoutingPicker;
@property (nonatomic) struct CGSize { double x1; double x2; } overrideSize;
@property (nonatomic, retain) UIImageView *placeholderArtworkView;
@property (nonatomic, retain) MPButton *playPauseButton;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) MPUMarqueeView *primaryMarqueeView;
@property (nonatomic, retain) NSString *primaryString;
@property (nonatomic, retain) MPButton *routingButton;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) MPUMarqueeView *secondaryMarqueeView;
@property (nonatomic, retain) NSString *secondaryString;
@property (nonatomic, retain) UIView *shadow;
@property (nonatomic) bool shouldEnableMarquee;
@property (nonatomic) bool shouldUseOverrideSize;
@property (nonatomic) bool shouldUsePlaceholderArtwork;
@property (getter=isShowingRoutingPicker, nonatomic) bool showingRoutingPicker;
@property (nonatomic) long long style;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) MPUMarqueeView *titleMarqueeView;
@property (nonatomic, retain) NSString *titleString;
@property (getter=isTransitioning, nonatomic) bool transitioning;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateRTL;
- (void)_updateStyle;
- (id)artworkBackgroundView;
- (id)artworkCatalog;
- (struct CGSize { double x1; double x2; })artworkSize;
- (id)artworkView;
- (id)buttonBackground;
- (void)clearOverrideSize;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)doneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHeaderViewOnScreen;
- (bool)isShowingRoutingPicker;
- (bool)isTransitioning;
- (id)launchNowPlayingAppButton;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })layoutTextInAvailableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 setFrames:(bool)arg2;
- (id)mediaSourceBundleID;
- (bool)onlyShowsRoutingPicker;
- (struct CGSize { double x1; double x2; })overrideSize;
- (id)placeholderArtworkView;
- (id)playPauseButton;
- (id)primaryLabel;
- (id)primaryMarqueeView;
- (id)primaryString;
- (id)routingButton;
- (id)secondaryLabel;
- (id)secondaryMarqueeView;
- (id)secondaryString;
- (void)setArtworkBackgroundView:(id)arg1;
- (void)setArtworkCatalog:(id)arg1;
- (void)setArtworkSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setArtworkView:(id)arg1;
- (void)setButtonBackground:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setHeaderViewOnScreen:(bool)arg1;
- (void)setLaunchNowPlayingAppButton:(id)arg1;
- (void)setMediaSourceBundleID:(id)arg1;
- (void)setOnlyShowsRoutingPicker:(bool)arg1;
- (void)setOverrideSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaceholderArtworkView:(id)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setPrimaryMarqueeView:(id)arg1;
- (void)setPrimaryString:(id)arg1;
- (void)setRoutingButton:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryMarqueeView:(id)arg1;
- (void)setSecondaryString:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setShouldEnableMarquee:(bool)arg1;
- (void)setShouldUseOverrideSize:(bool)arg1;
- (void)setShouldUsePlaceholderArtwork:(bool)arg1;
- (void)setShowingRoutingPicker:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleMarqueeView:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (id)shadow;
- (bool)shouldEnableMarquee;
- (bool)shouldUseOverrideSize;
- (bool)shouldUsePlaceholderArtwork;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)titleLabel;
- (id)titleMarqueeView;
- (id)titleString;
- (void)updatePlaceholderArtwork;

@end
