/* Generated by RuntimeBrowser.
 */

@protocol Endpointer <NSObject>

@required

- (double)endWaitTime;
- (int)endpointMode;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (double)interspeechWaitTime;
- (void)reset;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(int)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (double)startWaitTime;

@optional

- (bool)configureWithASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 andFrameRate:(unsigned int)arg2;
- (bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;

@end
