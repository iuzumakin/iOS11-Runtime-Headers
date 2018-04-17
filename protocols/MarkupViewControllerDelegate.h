/* Generated by RuntimeBrowser.
 */

@protocol MarkupViewControllerDelegate <NSObject>

@optional

- (void)controller:(MarkupViewController *)arg1 didChangeToPDFPageIndex:(unsigned long long)arg2;
- (void)controller:(MarkupViewController *)arg1 didReadCGPDFDocument:(struct CGPDFDocument { }*)arg2;
- (bool)controller:(MarkupViewController *)arg1 shouldOpenLinkAtURL:(NSURL *)arg2;
- (NSArray *)controller:(MarkupViewController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)controller:(MarkupViewController *)arg1 willWriteCGPDFDocument:(struct CGPDFDocument { }*)arg2 toContext:(struct CGContext { }*)arg3;
- (void)controllerWantsToShowShareSheet:(MarkupViewController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customSketchOverlayInsets;

@end
