/* Generated by RuntimeBrowser.
 */

@protocol TSARenderingExporterDelegate

@required

- (struct CGContext { }*)newCGContextForURL:(NSURL *)arg1;
- (void)releaseCGContext:(struct CGContext { }*)arg1;
- (void)setup;
- (bool)supportsPaging;
- (bool)supportsRenderingQuality;
- (void)teardown;
- (double)viewScale;

@optional

- (int)renderingQuality;

@end
