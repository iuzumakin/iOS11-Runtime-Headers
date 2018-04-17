/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailAttendeesListView : UIView {
    double  _actualHeight;
    long long  _columnAItems;
    long long  _columnBItems;
    NSArray * _finalizedNames;
    int  _firstColumnBType;
    bool  _groupsNames;
    bool  _highlighted;
    UIColor * _highlightedTextColor;
    NSMutableArray * _inviteeNames;
    double  _maxHeight;
    bool  _shouldEvenOutBlocks;
    long long  _statusCounts;
    UIColor * _textColor;
    NSArray * _ungrouped;
    UIViewController * _viewController;
}

@property (nonatomic) bool groupsNames;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NSArray *ungrouped;
@property (nonatomic) UIViewController *viewController;

+ (id)statusGlyphs;

- (void).cxx_destruct;
- (bool)_shouldAlwaysDrawSingleColumn;
- (double)calculateHeightForItemCounts:(long long)arg1;
- (double)calculatedHeight;
- (void)contentSizeCategoryChanged;
- (void)dealloc;
- (void)drawNames:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)finalizeInviteNames;
- (id)generateAttributedStringsFromNames:(id)arg1 glyph:(id)arg2 displayCount:(long long)arg3;
- (bool)groupsNames;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isHighlighted;
- (double)maxColumnHeight;
- (double)maxHeight;
- (void)setGroupsNames:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setInvitees:(id)arg1 forStatus:(int)arg2;
- (void)setTextColor:(id)arg1;
- (void)setUngrouped:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setup;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (id)ungrouped;
- (id)viewController;

@end