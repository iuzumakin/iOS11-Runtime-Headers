/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroup : PSIReusableObject {
    struct __CFArray { } * _assetIds;
    short  _category;
    unsigned long long  _compressedRanges;
    NSMutableString * _contentString;
    unsigned long long  _groupId;
    unsigned long long  _owningGroupId;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _tokenRanges;
    unsigned long long  _tokenRangesCount;
}

@property (nonatomic, retain) struct __CFArray { }*assetIds;
@property (nonatomic) short category;
@property (nonatomic, readonly, retain) NSString *contentString;
@property (nonatomic) unsigned long long groupId;
@property (nonatomic) unsigned long long owningGroupId;

+ (void)_getTokenRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromCompressedRanges:(unsigned long long)arg2;
+ (void)getCompressedRanges:(unsigned long long)arg1 fromTokenRanges:(struct { long long x1; long long x2; }*)arg2 count:(long long)arg3;

- (id)_tokenRangesDescription;
- (struct __CFArray { }*)assetIds;
- (short)category;
- (long long)compareToGroup:(id)arg1;
- (id)contentString;
- (void)dealloc;
- (id)description;
- (unsigned long long)groupId;
- (unsigned long long)groupIdForAssetLookup;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)owningGroupId;
- (void)prepareForReuse;
- (void)prepareFromStatement:(struct sqlite3_stmt { }*)arg1;
- (void)setAssetIds:(struct __CFArray { }*)arg1;
- (void)setCategory:(short)arg1;
- (void)setGroupId:(unsigned long long)arg1;
- (void)setOwningGroupId:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokenRangesCount;

@end
