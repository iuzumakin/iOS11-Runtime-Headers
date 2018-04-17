/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardStringStorage : NSObject <CNVCardSerializationStorage> {
    NSMutableString * _string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)storageWithString:(id)arg1;

- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (unsigned long long)currentLength;
- (unsigned long long)estimatedDataLength;
- (id)initWithString:(id)arg1;
- (void)insertString:(id)arg1 atMarker:(id)arg2;
- (id)insertionMarker;

@end
