/* Generated by RuntimeBrowser.
 */

@protocol _CPClearInputFeedback <NSObject>

@required

- (bool)hasTimestamp;
- (bool)hasTriggerEvent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;

@end
