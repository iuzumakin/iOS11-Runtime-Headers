/* Generated by RuntimeBrowser.
 */

@protocol AVVideoCompositionInstruction <NSObject>

@required

- (bool)containsTweening;
- (bool)enablePostProcessing;
- (int)passthroughTrackID;
- (NSArray *)requiredSourceTrackIDs;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
