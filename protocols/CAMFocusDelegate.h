/* Generated by RuntimeBrowser.
 */

@protocol CAMFocusDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didOutputFocusResult:(CAMFocusResult *)arg2;
- (bool)captureController:(CUCaptureController *)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
- (void)captureControllerWillResetFocusAndExposure:(CUCaptureController *)arg1;

@optional

- (double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(CUCaptureController *)arg1;

@end
