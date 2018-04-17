/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRenderingExporter : TSARenderingExporter <TSDCanvasDelegate> {
    unsigned long long  mCurrentBuildIndex;
    unsigned long long  mCurrentPage;
    KNSlideNode * mCurrentSlideNode;
    NSMutableArray * mCurrentSlidesOnPage;
    KNPdfHyperlinkController * mHyperlinkController;
    KNOffscreenController * mOffscreenController;
    double  mPageMargin;
    long long  mPrintLayout;
    NSString * mPrintTitle;
    id  mPrintView;
    bool  mPrintingBackgrounds;
    bool  mPrintingBorders;
    bool  mPrintingBuilds;
    bool  mPrintingDate;
    bool  mPrintingDraftQuality;
    bool  mPrintingPageMargins;
    bool  mPrintingSelectedSlides;
    bool  mPrintingSkippedSlides;
    bool  mPrintingSlideNumbers;
    NSOrderedSet * mSelectedSlideNodes;
    unsigned long long  mSlidesPerPage;
}

@property (nonatomic, readonly) <TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (nonatomic, readonly) unsigned long long currentBuildIndex;
@property (nonatomic, retain) KNSlideNode *currentSlideNode;
@property (nonatomic, readonly) unsigned long long currentSlideNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heightOfPrintedText;
@property (nonatomic, retain) KNOffscreenController *offscreenController;
@property (nonatomic) double pageMargin;
@property (nonatomic) long long printLayout;
@property (nonatomic, copy) NSString *printTitle;
@property (nonatomic) id printView;
@property (getter=isPrintingBackgrounds, nonatomic) bool printingBackgrounds;
@property (getter=isPrintingBorders, nonatomic) bool printingBorders;
@property (getter=isPrintingBuilds, nonatomic) bool printingBuilds;
@property (getter=isPrintingDate, nonatomic) bool printingDate;
@property (getter=isPrintingDraftQuality, nonatomic) bool printingDraftQuality;
@property (getter=isPrintingPageMargins, nonatomic) bool printingPageMargins;
@property (getter=isPrintingSelectedSlides, nonatomic) bool printingSelectedSlides;
@property (getter=isPrintingSkippedSlides, nonatomic) bool printingSkippedSlides;
@property (getter=isPrintingSlideNumbers, nonatomic) bool printingSlideNumbers;
@property (nonatomic, readonly) unsigned long long rangeEnd;
@property (nonatomic, readonly) unsigned long long rangeStart;
@property (nonatomic, copy) NSOrderedSet *selectedSlideNodes;
@property (nonatomic, readonly) NSArray *slidesForPrinting;
@property (nonatomic) unsigned long long slidesPerPage;
@property (nonatomic, readonly) double spaceForSlideNumbers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesViewForDrawing;

- (void)addAnchorPointForSlide:(id)arg1 context:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (unsigned long long)currentBuildIndex;
- (id)currentInfos;
- (id)currentSlideNode;
- (unsigned long long)currentSlideNumber;
- (void)dealloc;
- (id)documentRoot;
- (void)drawBorderForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawDateForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (bool)drawImageForSlideNode:(id)arg1 andEvent:(unsigned long long)arg2 slideSize:(struct CGSize { double x1; double x2; })arg3 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5 createPage:(bool)arg6;
- (void)drawInView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawNSStringDateForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawSlideNumberForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 position:(long long)arg5;
- (void)enableRenderAllContent;
- (bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
- (double)heightOfPrintedText;
- (bool)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isCanvasDrawingIntoPDF:(id)arg1;
- (bool)isPrintingBackgrounds;
- (bool)isPrintingBorders;
- (bool)isPrintingBuilds;
- (bool)isPrintingCanvas;
- (bool)isPrintingDate;
- (bool)isPrintingDraftQuality;
- (bool)isPrintingPageMargins;
- (bool)isPrintingSelectedSlides;
- (bool)isPrintingSkippedSlides;
- (bool)isPrintingSlideNumbers;
- (id)offscreenController;
- (unsigned long long)p_slideNumberForSlideNode:(id)arg1;
- (id)p_slideNumberStringForSlideNode:(id)arg1 buildIndex:(unsigned long long)arg2;
- (unsigned long long)pageCount;
- (long long)pageIndexFromQuickLookSlideNode:(id)arg1;
- (double)pageMargin;
- (bool)preparePage:(unsigned long long)arg1;
- (long long)printLayout;
- (id)printTitle;
- (id)printView;
- (double)progressForCurrentPage;
- (id)quickLookSlideNodes;
- (unsigned long long)rangeEnd;
- (unsigned long long)rangeStart;
- (id)selectedSlideNodes;
- (void)setCurrentSlideNode:(id)arg1;
- (void)setOffscreenController:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPageMargin:(double)arg1;
- (void)setPrintLayout:(long long)arg1;
- (void)setPrintTitle:(id)arg1;
- (void)setPrintView:(id)arg1;
- (void)setPrintingBackgrounds:(bool)arg1;
- (void)setPrintingBorders:(bool)arg1;
- (void)setPrintingBuilds:(bool)arg1;
- (void)setPrintingDate:(bool)arg1;
- (void)setPrintingDraftQuality:(bool)arg1;
- (void)setPrintingPageMargins:(bool)arg1;
- (void)setPrintingSelectedSlides:(bool)arg1;
- (void)setPrintingSkippedSlides:(bool)arg1;
- (void)setPrintingSlideNumbers:(bool)arg1;
- (void)setSelectedSlideNodes:(id)arg1;
- (void)setSlidesPerPage:(unsigned long long)arg1;
- (void)setup;
- (bool)shouldSuppressBackgrounds;
- (id)slideIndexesToPrint;
- (id)slidesForPrinting;
- (unsigned long long)slidesPerPage;
- (double)spaceForSlideNumbers;
- (void)teardown;
- (bool)usesViewForDrawing;

@end
