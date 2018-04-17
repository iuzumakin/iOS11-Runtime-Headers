/* Generated by RuntimeBrowser.
 */

@protocol FRRingBufferContainer <NSObject>

@required

- (bool)hasMaxForKey:(NSString *)arg1;
- (bool)hasMinForKey:(NSString *)arg1;
- (double)maxForKey:(NSString *)arg1;
- (double)minForKey:(NSString *)arg1;
- (FRRingBuffer *)ringBufferForKey:(NSString *)arg1;
- (FRRingBuffer *)ringBufferForKey:(NSString *)arg1 capacity:(unsigned long long)arg2;
- (void)setRingBuffers:(NSDictionary *)arg1;

@end
