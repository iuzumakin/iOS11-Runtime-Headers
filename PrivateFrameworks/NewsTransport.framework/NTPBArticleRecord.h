/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleRecord : PBCodable <NSCopying> {
    NSString * _accessoryText;
    NSMutableArray * _allowedStorefrontIDs;
    long long  _backendArticleVersion;
    NTPBRecordBase * _base;
    long long  _behaviorFlags;
    NSMutableArray * _blockedStorefrontIDs;
    NSString * _clusterID;
    int  _contentType;
    NSString * _contentURL;
    NSString * _coverArt;
    NSString * _displayTopicTagID;
    NSString * _excerptURL;
    NSString * _flintDocumentURL;
    NSMutableArray * _flintFontResourceIDs;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort * _globalCohort;
    struct { 
        unsigned int backendArticleVersion : 1; 
        unsigned int behaviorFlags : 1; 
        unsigned int minimumNewsVersion : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int thumbnailFocalFrame : 1; 
        unsigned int thumbnailHQMetadata : 1; 
        unsigned int thumbnailLQMetadata : 1; 
        unsigned int thumbnailMediumMetadata : 1; 
        unsigned int thumbnailMetadata : 1; 
        unsigned int thumbnailUltraHQMetadata : 1; 
        unsigned int thumbnailWidgetHQMetadata : 1; 
        unsigned int thumbnailWidgetLQMetadata : 1; 
        unsigned int thumbnailWidgetMetadata : 1; 
        unsigned int videoDuration : 1; 
        unsigned int contentType : 1; 
        unsigned int storyType : 1; 
        unsigned int isDraft : 1; 
        unsigned int isFeatureCandidate : 1; 
        unsigned int isPaid : 1; 
        unsigned int isSponsored : 1; 
    }  _has;
    NSMutableArray * _iAdCategories;
    NSMutableArray * _iAdKeywords;
    NSMutableArray * _iAdSectionIDs;
    bool  _isDraft;
    bool  _isFeatureCandidate;
    bool  _isPaid;
    bool  _isSponsored;
    long long  _minimumNewsVersion;
    NSMutableArray * _moreFromPublisherArticleIDs;
    NSString * _primaryAudience;
    NTPBDate * _publishDate;
    long long  _publisherArticleVersion;
    NSString * _referencedArticleID;
    NSMutableArray * _relatedArticleIDs;
    NSString * _shortExcerpt;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort * _sourceChannelCohort;
    NSString * _sourceChannelTagID;
    int  _storyType;
    NSString * _subtitle;
    long long  _thumbnailFocalFrame;
    long long  _thumbnailHQMetadata;
    NSString * _thumbnailHQURL;
    long long  _thumbnailLQMetadata;
    NSString * _thumbnailLQURL;
    long long  _thumbnailMediumMetadata;
    NSString * _thumbnailMediumURL;
    long long  _thumbnailMetadata;
    NSString * _thumbnailURL;
    long long  _thumbnailUltraHQMetadata;
    NSString * _thumbnailUltraHQURL;
    long long  _thumbnailWidgetHQMetadata;
    NSString * _thumbnailWidgetHQTaggedURL;
    NSString * _thumbnailWidgetHQURL;
    long long  _thumbnailWidgetLQMetadata;
    NSString * _thumbnailWidgetLQTaggedURL;
    NSString * _thumbnailWidgetLQURL;
    long long  _thumbnailWidgetMetadata;
    NSString * _thumbnailWidgetTaggedURL;
    NSString * _thumbnailWidgetURL;
    NSString * _title;
    NSMutableArray * _topics;
    double  _videoDuration;
    NSString * _videoURL;
}

@property (nonatomic, retain) NSString *accessoryText;
@property (nonatomic, retain) NSMutableArray *allowedStorefrontIDs;
@property (nonatomic) long long backendArticleVersion;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic) long long behaviorFlags;
@property (nonatomic, retain) NSMutableArray *blockedStorefrontIDs;
@property (nonatomic, retain) NSString *clusterID;
@property (nonatomic) int contentType;
@property (nonatomic, retain) NSString *contentURL;
@property (nonatomic, retain) NSString *coverArt;
@property (nonatomic, retain) NSString *displayTopicTagID;
@property (nonatomic, readonly) NSArray *endOfArticleTopicIDs;
@property (nonatomic, retain) NSString *excerptURL;
@property (nonatomic, retain) NSString *flintDocumentURL;
@property (nonatomic, retain) NSMutableArray *flintFontResourceIDs;
@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *globalCohort;
@property (nonatomic, readonly) bool hasAccessoryText;
@property (nonatomic) bool hasBackendArticleVersion;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic) bool hasBehaviorFlags;
@property (nonatomic, readonly) bool hasClusterID;
@property (nonatomic) bool hasContentType;
@property (nonatomic, readonly) bool hasContentURL;
@property (nonatomic, readonly) bool hasCoverArt;
@property (nonatomic, readonly) bool hasDisplayTopicTagID;
@property (nonatomic, readonly) bool hasExcerptURL;
@property (nonatomic, readonly) bool hasFlintDocumentURL;
@property (nonatomic, readonly) bool hasGlobalCohort;
@property (nonatomic) bool hasIsDraft;
@property (nonatomic) bool hasIsFeatureCandidate;
@property (nonatomic) bool hasIsPaid;
@property (nonatomic) bool hasIsSponsored;
@property (nonatomic) bool hasMinimumNewsVersion;
@property (nonatomic, readonly) bool hasPrimaryAudience;
@property (nonatomic, readonly) bool hasPublishDate;
@property (nonatomic) bool hasPublisherArticleVersion;
@property (nonatomic, readonly) bool hasReferencedArticleID;
@property (nonatomic, readonly) bool hasShortExcerpt;
@property (nonatomic, readonly) bool hasSourceChannelCohort;
@property (nonatomic, readonly) bool hasSourceChannelTagID;
@property (nonatomic) bool hasStoryType;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic) bool hasThumbnailFocalFrame;
@property (nonatomic) bool hasThumbnailHQMetadata;
@property (nonatomic, readonly) bool hasThumbnailHQURL;
@property (nonatomic) bool hasThumbnailLQMetadata;
@property (nonatomic, readonly) bool hasThumbnailLQURL;
@property (nonatomic) bool hasThumbnailMediumMetadata;
@property (nonatomic, readonly) bool hasThumbnailMediumURL;
@property (nonatomic) bool hasThumbnailMetadata;
@property (nonatomic, readonly) bool hasThumbnailURL;
@property (nonatomic) bool hasThumbnailUltraHQMetadata;
@property (nonatomic, readonly) bool hasThumbnailUltraHQURL;
@property (nonatomic) bool hasThumbnailWidgetHQMetadata;
@property (nonatomic, readonly) bool hasThumbnailWidgetHQTaggedURL;
@property (nonatomic, readonly) bool hasThumbnailWidgetHQURL;
@property (nonatomic) bool hasThumbnailWidgetLQMetadata;
@property (nonatomic, readonly) bool hasThumbnailWidgetLQTaggedURL;
@property (nonatomic, readonly) bool hasThumbnailWidgetLQURL;
@property (nonatomic) bool hasThumbnailWidgetMetadata;
@property (nonatomic, readonly) bool hasThumbnailWidgetTaggedURL;
@property (nonatomic, readonly) bool hasThumbnailWidgetURL;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasVideoDuration;
@property (nonatomic, readonly) bool hasVideoURL;
@property (nonatomic, retain) NSMutableArray *iAdCategories;
@property (nonatomic, retain) NSMutableArray *iAdKeywords;
@property (nonatomic, retain) NSMutableArray *iAdSectionIDs;
@property (nonatomic) bool isDraft;
@property (nonatomic) bool isFeatureCandidate;
@property (nonatomic) bool isPaid;
@property (nonatomic) bool isSponsored;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic, retain) NSMutableArray *moreFromPublisherArticleIDs;
@property (nonatomic, retain) NSString *primaryAudience;
@property (nonatomic, retain) NTPBDate *publishDate;
@property (nonatomic) long long publisherArticleVersion;
@property (nonatomic, retain) NSString *referencedArticleID;
@property (nonatomic, retain) NSMutableArray *relatedArticleIDs;
@property (nonatomic, retain) NSString *shortExcerpt;
@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *sourceChannelCohort;
@property (nonatomic, retain) NSString *sourceChannelTagID;
@property (nonatomic) int storyType;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic) long long thumbnailFocalFrame;
@property (nonatomic) long long thumbnailHQMetadata;
@property (nonatomic, retain) NSString *thumbnailHQURL;
@property (nonatomic) long long thumbnailLQMetadata;
@property (nonatomic, retain) NSString *thumbnailLQURL;
@property (nonatomic) long long thumbnailMediumMetadata;
@property (nonatomic, retain) NSString *thumbnailMediumURL;
@property (nonatomic) long long thumbnailMetadata;
@property (nonatomic, retain) NSString *thumbnailURL;
@property (nonatomic) long long thumbnailUltraHQMetadata;
@property (nonatomic, retain) NSString *thumbnailUltraHQURL;
@property (nonatomic) long long thumbnailWidgetHQMetadata;
@property (nonatomic, retain) NSString *thumbnailWidgetHQTaggedURL;
@property (nonatomic, retain) NSString *thumbnailWidgetHQURL;
@property (nonatomic) long long thumbnailWidgetLQMetadata;
@property (nonatomic, retain) NSString *thumbnailWidgetLQTaggedURL;
@property (nonatomic, retain) NSString *thumbnailWidgetLQURL;
@property (nonatomic) long long thumbnailWidgetMetadata;
@property (nonatomic, retain) NSString *thumbnailWidgetTaggedURL;
@property (nonatomic, retain) NSString *thumbnailWidgetURL;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSArray *topicIDs;
@property (nonatomic, retain) NSMutableArray *topics;
@property (nonatomic) double videoDuration;
@property (nonatomic, retain) NSString *videoURL;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)allowedStorefrontIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)flintFontResourceIDsType;
+ (Class)iAdCategoriesType;
+ (Class)iAdKeywordsType;
+ (Class)iAdSectionIDsType;
+ (Class)moreFromPublisherArticleIDsType;
+ (Class)relatedArticleIDsType;
+ (Class)topicsType;

- (id)accessoryText;
- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)addFlintFontResourceIDs:(id)arg1;
- (void)addIAdCategories:(id)arg1;
- (void)addIAdKeywords:(id)arg1;
- (void)addIAdSectionIDs:(id)arg1;
- (void)addMoreFromPublisherArticleIDs:(id)arg1;
- (void)addRelatedArticleIDs:(id)arg1;
- (void)addTopics:(id)arg1;
- (id)allowedStorefrontIDs;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedStorefrontIDsCount;
- (long long)backendArticleVersion;
- (id)base;
- (long long)behaviorFlags;
- (id)blockedStorefrontIDs;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)clearAllowedStorefrontIDs;
- (void)clearBlockedStorefrontIDs;
- (void)clearFlintFontResourceIDs;
- (void)clearIAdCategories;
- (void)clearIAdKeywords;
- (void)clearIAdSectionIDs;
- (void)clearMoreFromPublisherArticleIDs;
- (void)clearRelatedArticleIDs;
- (void)clearTopics;
- (id)clusterID;
- (int)contentType;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArt;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayTopicTagID;
- (id)excerptURL;
- (id)flintDocumentURL;
- (id)flintFontResourceIDs;
- (id)flintFontResourceIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flintFontResourceIDsCount;
- (id)globalCohort;
- (bool)hasAccessoryText;
- (bool)hasBackendArticleVersion;
- (bool)hasBase;
- (bool)hasBehaviorFlags;
- (bool)hasClusterID;
- (bool)hasContentType;
- (bool)hasContentURL;
- (bool)hasCoverArt;
- (bool)hasDisplayTopicTagID;
- (bool)hasExcerptURL;
- (bool)hasFlintDocumentURL;
- (bool)hasGlobalCohort;
- (bool)hasIsDraft;
- (bool)hasIsFeatureCandidate;
- (bool)hasIsPaid;
- (bool)hasIsSponsored;
- (bool)hasMinimumNewsVersion;
- (bool)hasPrimaryAudience;
- (bool)hasPublishDate;
- (bool)hasPublisherArticleVersion;
- (bool)hasReferencedArticleID;
- (bool)hasShortExcerpt;
- (bool)hasSourceChannelCohort;
- (bool)hasSourceChannelTagID;
- (bool)hasStoryType;
- (bool)hasSubtitle;
- (bool)hasThumbnailFocalFrame;
- (bool)hasThumbnailHQMetadata;
- (bool)hasThumbnailHQURL;
- (bool)hasThumbnailLQMetadata;
- (bool)hasThumbnailLQURL;
- (bool)hasThumbnailMediumMetadata;
- (bool)hasThumbnailMediumURL;
- (bool)hasThumbnailMetadata;
- (bool)hasThumbnailURL;
- (bool)hasThumbnailUltraHQMetadata;
- (bool)hasThumbnailUltraHQURL;
- (bool)hasThumbnailWidgetHQMetadata;
- (bool)hasThumbnailWidgetHQTaggedURL;
- (bool)hasThumbnailWidgetHQURL;
- (bool)hasThumbnailWidgetLQMetadata;
- (bool)hasThumbnailWidgetLQTaggedURL;
- (bool)hasThumbnailWidgetLQURL;
- (bool)hasThumbnailWidgetMetadata;
- (bool)hasThumbnailWidgetTaggedURL;
- (bool)hasThumbnailWidgetURL;
- (bool)hasTitle;
- (bool)hasVideoDuration;
- (bool)hasVideoURL;
- (unsigned long long)hash;
- (id)iAdCategories;
- (id)iAdCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdCategoriesCount;
- (id)iAdKeywords;
- (id)iAdKeywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdKeywordsCount;
- (id)iAdSectionIDs;
- (id)iAdSectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdSectionIDsCount;
- (bool)isDraft;
- (bool)isEqual:(id)arg1;
- (bool)isFeatureCandidate;
- (bool)isPaid;
- (bool)isSponsored;
- (void)mergeFrom:(id)arg1;
- (long long)minimumNewsVersion;
- (id)moreFromPublisherArticleIDs;
- (id)moreFromPublisherArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moreFromPublisherArticleIDsCount;
- (id)primaryAudience;
- (id)publishDate;
- (long long)publisherArticleVersion;
- (bool)readFrom:(id)arg1;
- (id)referencedArticleID;
- (id)relatedArticleIDs;
- (id)relatedArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedArticleIDsCount;
- (void)setAccessoryText:(id)arg1;
- (void)setAllowedStorefrontIDs:(id)arg1;
- (void)setBackendArticleVersion:(long long)arg1;
- (void)setBase:(id)arg1;
- (void)setBehaviorFlags:(long long)arg1;
- (void)setBlockedStorefrontIDs:(id)arg1;
- (void)setClusterID:(id)arg1;
- (void)setContentType:(int)arg1;
- (void)setContentURL:(id)arg1;
- (void)setCoverArt:(id)arg1;
- (void)setDisplayTopicTagID:(id)arg1;
- (void)setExcerptURL:(id)arg1;
- (void)setFlintDocumentURL:(id)arg1;
- (void)setFlintFontResourceIDs:(id)arg1;
- (void)setGlobalCohort:(id)arg1;
- (void)setHasBackendArticleVersion:(bool)arg1;
- (void)setHasBehaviorFlags:(bool)arg1;
- (void)setHasContentType:(bool)arg1;
- (void)setHasIsDraft:(bool)arg1;
- (void)setHasIsFeatureCandidate:(bool)arg1;
- (void)setHasIsPaid:(bool)arg1;
- (void)setHasIsSponsored:(bool)arg1;
- (void)setHasMinimumNewsVersion:(bool)arg1;
- (void)setHasPublisherArticleVersion:(bool)arg1;
- (void)setHasStoryType:(bool)arg1;
- (void)setHasThumbnailFocalFrame:(bool)arg1;
- (void)setHasThumbnailHQMetadata:(bool)arg1;
- (void)setHasThumbnailLQMetadata:(bool)arg1;
- (void)setHasThumbnailMediumMetadata:(bool)arg1;
- (void)setHasThumbnailMetadata:(bool)arg1;
- (void)setHasThumbnailUltraHQMetadata:(bool)arg1;
- (void)setHasThumbnailWidgetHQMetadata:(bool)arg1;
- (void)setHasThumbnailWidgetLQMetadata:(bool)arg1;
- (void)setHasThumbnailWidgetMetadata:(bool)arg1;
- (void)setHasVideoDuration:(bool)arg1;
- (void)setIAdCategories:(id)arg1;
- (void)setIAdKeywords:(id)arg1;
- (void)setIAdSectionIDs:(id)arg1;
- (void)setIsDraft:(bool)arg1;
- (void)setIsFeatureCandidate:(bool)arg1;
- (void)setIsPaid:(bool)arg1;
- (void)setIsSponsored:(bool)arg1;
- (void)setMinimumNewsVersion:(long long)arg1;
- (void)setMoreFromPublisherArticleIDs:(id)arg1;
- (void)setPrimaryAudience:(id)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setPublisherArticleVersion:(long long)arg1;
- (void)setReferencedArticleID:(id)arg1;
- (void)setRelatedArticleIDs:(id)arg1;
- (void)setShortExcerpt:(id)arg1;
- (void)setSourceChannelCohort:(id)arg1;
- (void)setSourceChannelTagID:(id)arg1;
- (void)setStoryType:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailFocalFrame:(long long)arg1;
- (void)setThumbnailHQMetadata:(long long)arg1;
- (void)setThumbnailHQURL:(id)arg1;
- (void)setThumbnailLQMetadata:(long long)arg1;
- (void)setThumbnailLQURL:(id)arg1;
- (void)setThumbnailMediumMetadata:(long long)arg1;
- (void)setThumbnailMediumURL:(id)arg1;
- (void)setThumbnailMetadata:(long long)arg1;
- (void)setThumbnailURL:(id)arg1;
- (void)setThumbnailUltraHQMetadata:(long long)arg1;
- (void)setThumbnailUltraHQURL:(id)arg1;
- (void)setThumbnailWidgetHQMetadata:(long long)arg1;
- (void)setThumbnailWidgetHQTaggedURL:(id)arg1;
- (void)setThumbnailWidgetHQURL:(id)arg1;
- (void)setThumbnailWidgetLQMetadata:(long long)arg1;
- (void)setThumbnailWidgetLQTaggedURL:(id)arg1;
- (void)setThumbnailWidgetLQURL:(id)arg1;
- (void)setThumbnailWidgetMetadata:(long long)arg1;
- (void)setThumbnailWidgetTaggedURL:(id)arg1;
- (void)setThumbnailWidgetURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopics:(id)arg1;
- (void)setVideoDuration:(double)arg1;
- (void)setVideoURL:(id)arg1;
- (id)shortExcerpt;
- (id)sourceChannelCohort;
- (id)sourceChannelTagID;
- (int)storyType;
- (id)subtitle;
- (long long)thumbnailFocalFrame;
- (long long)thumbnailHQMetadata;
- (id)thumbnailHQURL;
- (long long)thumbnailLQMetadata;
- (id)thumbnailLQURL;
- (long long)thumbnailMediumMetadata;
- (id)thumbnailMediumURL;
- (long long)thumbnailMetadata;
- (id)thumbnailURL;
- (long long)thumbnailUltraHQMetadata;
- (id)thumbnailUltraHQURL;
- (long long)thumbnailWidgetHQMetadata;
- (id)thumbnailWidgetHQTaggedURL;
- (id)thumbnailWidgetHQURL;
- (long long)thumbnailWidgetLQMetadata;
- (id)thumbnailWidgetLQTaggedURL;
- (id)thumbnailWidgetLQURL;
- (long long)thumbnailWidgetMetadata;
- (id)thumbnailWidgetTaggedURL;
- (id)thumbnailWidgetURL;
- (id)title;
- (id)topics;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (double)videoDuration;
- (id)videoURL;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)endOfArticleTopicIDs;
- (id)generateFlintDocumentAssetHandleWithAssetManager:(id)arg1;
- (id)generateThumbnailAssetHandleForURL:(id)arg1 withAssetManager:(id)arg2;
- (id)generateWebExcerptAssetHandleWithAssetManager:(id)arg1;
- (id)topicIDs;

@end
