/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationURLMapping : NSObject <NSCopying, NSSecureCoding> {
    NTPBURLMapping * _pbURLMapping;
    NSDictionary * _urlMappingByDomain;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSDictionary *urlMappingByDomain;

+ (id)domainForURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBURLMapping:(id)arg1;
- (id)popularityForURL:(id)arg1;
- (void)setUrlMappingByDomain:(id)arg1;
- (id)tagScoresForURL:(id)arg1;
- (id)urlMappingByDomain;

@end
