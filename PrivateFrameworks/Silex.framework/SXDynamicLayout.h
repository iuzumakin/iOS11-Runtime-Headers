/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDynamicLayout : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _columnRange;
    NSString * _identifier;
    unsigned long long  _ignoreDocumentMargin;
    <SXEdgeSpacing> * _margin;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } columnRange;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long ignoreDocumentMargin;
@property (nonatomic, readonly) <SXEdgeSpacing> *margin;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRange;
- (id)identifier;
- (unsigned long long)ignoreDocumentMargin;
- (id)initWithColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 margin:(id)arg2 andIgnoreDocumentMargin:(unsigned long long)arg3;
- (id)margin;

@end
