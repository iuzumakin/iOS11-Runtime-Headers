/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppMediaItemBridge : NSObject {
    IKAppContext * _appContext;
    <IKAppMediaItem> * _appMediaItem;
    NSString * _artworkImageSrcset;
    NSString * _artworkImageURL;
    IKJSMediaItem * _jsMediaItem;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) <IKAppMediaItem> *appMediaItem;
@property (nonatomic, retain) NSString *artworkImageSrcset;
@property (nonatomic, retain) NSString *artworkImageURL;
@property (nonatomic, retain) NSArray *chapterGroups;
@property (nonatomic) double contentProposalAutomaticAcceptanceInterval;
@property (nonatomic) double contentProposalPresentationTime;
@property (nonatomic, retain) NSString *contentRatingDomain;
@property (nonatomic, retain) NSNumber *contentRatingRanking;
@property (nonatomic, retain) NSString *description;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic, retain) NSDictionary *extraMetadata;
@property (nonatomic, retain) NSArray *interstitials;
@property (nonatomic) bool isExplicit;
@property (nonatomic, readonly) IKJSMediaItem *jsMediaItem;
@property (nonatomic, retain) NSString *ratingBadge;
@property (nonatomic, retain) NSNumber *resumeTime;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *url;

- (void).cxx_destruct;
- (void)_resolveArtworkImageURL;
- (id)appContext;
- (id)appMediaItem;
- (id)artworkImageSrcset;
- (id)artworkImageURL;
- (id)chapterGroups;
- (void)cleanup;
- (double)contentProposalAutomaticAcceptanceInterval;
- (double)contentProposalPresentationTime;
- (id)contentRatingDomain;
- (id)contentRatingRanking;
- (id)description;
- (id)externalID;
- (id)extraMetadata;
- (id)initWithAppContext:(id)arg1 jsMediaItem:(id)arg2;
- (id)interstitials;
- (bool)isExplicit;
- (id)jsMediaItem;
- (void)loadCertificateDataForURL:(id)arg1 withCallback:(id /* block */)arg2;
- (void)loadContentIdentifierDataForURL:(id)arg1 withCallback:(id /* block */)arg2;
- (void)loadKeyDataForURL:(id)arg1 keyRequestData:(id)arg2 withCallback:(id /* block */)arg3;
- (void)prepareForLoadingWithCallback:(id /* block */)arg1;
- (id)ratingBadge;
- (id)resumeTime;
- (void)setArtworkImageSrcset:(id)arg1;
- (void)setArtworkImageURL:(id)arg1;
- (void)setChapterGroups:(id)arg1;
- (void)setContentProposalAutomaticAcceptanceInterval:(double)arg1;
- (void)setContentProposalPresentationTime:(double)arg1;
- (void)setContentRatingDomain:(id)arg1;
- (void)setContentRatingRanking:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExtraMetadata:(id)arg1;
- (void)setInterstitials:(id)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setRatingBadge:(id)arg1;
- (void)setResumeTime:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)type;
- (id)url;

@end
