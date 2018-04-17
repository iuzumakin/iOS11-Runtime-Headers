/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKLinkIconParameters : NSObject {
    long long  _iconType;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _mimeType;
    struct RetainPtr<NSNumber> { 
        void *m_ptr; 
    }  _size;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _url;
}

@property (nonatomic, readonly) long long iconType;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (nonatomic, readonly, copy) NSNumber *size;
@property (nonatomic, readonly, copy) NSURL *url;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithLinkIcon:(const struct LinkIcon { struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_1_1_1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; } x1; int x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct optional<unsigned int> { bool x_4_1_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; } x4; }*)arg1;
- (long long)iconType;
- (id)mimeType;
- (id)size;
- (id)url;

@end
