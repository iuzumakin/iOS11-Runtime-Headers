/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAppSessionEnd : PBCodable <NSCopying> {
    long long  _appSessionDuration;
    int  _appsAutoSubscribeFeedCount;
    NSMutableArray * _autoSubscribedFeedIds;
    bool  _breakingNewsAvailableDuringSession;
    bool  _breakingNewsDismissedDuringSession;
    int  _channelSubscriptionCount;
    NSMutableArray * _groupableFeedIds;
    struct { 
        unsigned int appSessionDuration : 1; 
        unsigned int appsAutoSubscribeFeedCount : 1; 
        unsigned int channelSubscriptionCount : 1; 
        unsigned int internalAutoSubscribeFeedCount : 1; 
        unsigned int notificationEnabledChannelsCount : 1; 
        unsigned int notitificationsEnabledChannelsCount : 1; 
        unsigned int portraitAutoSubscribeFeedCount : 1; 
        unsigned int safariAutoSubscribeFeedCount : 1; 
        unsigned int sessionEndReason : 1; 
        unsigned int topicSubscriptionCount : 1; 
        unsigned int breakingNewsAvailableDuringSession : 1; 
        unsigned int breakingNewsDismissedDuringSession : 1; 
    }  _has;
    int  _internalAutoSubscribeFeedCount;
    NSMutableArray * _lastVisibleViews;
    NSMutableArray * _notificationChannelIds;
    int  _notificationEnabledChannelsCount;
    int  _notitificationsEnabledChannelsCount;
    NSMutableArray * _paidSubscriptionChannelIds;
    int  _portraitAutoSubscribeFeedCount;
    int  _safariAutoSubscribeFeedCount;
    int  _sessionEndReason;
    NSMutableArray * _subscribedFeedIds;
    int  _topicSubscriptionCount;
}

@property (nonatomic) long long appSessionDuration;
@property (nonatomic) int appsAutoSubscribeFeedCount;
@property (nonatomic, retain) NSMutableArray *autoSubscribedFeedIds;
@property (nonatomic) bool breakingNewsAvailableDuringSession;
@property (nonatomic) bool breakingNewsDismissedDuringSession;
@property (nonatomic) int channelSubscriptionCount;
@property (nonatomic, retain) NSMutableArray *groupableFeedIds;
@property (nonatomic) bool hasAppSessionDuration;
@property (nonatomic) bool hasAppsAutoSubscribeFeedCount;
@property (nonatomic) bool hasBreakingNewsAvailableDuringSession;
@property (nonatomic) bool hasBreakingNewsDismissedDuringSession;
@property (nonatomic) bool hasChannelSubscriptionCount;
@property (nonatomic) bool hasInternalAutoSubscribeFeedCount;
@property (nonatomic) bool hasNotificationEnabledChannelsCount;
@property (nonatomic) bool hasNotitificationsEnabledChannelsCount;
@property (nonatomic) bool hasPortraitAutoSubscribeFeedCount;
@property (nonatomic) bool hasSafariAutoSubscribeFeedCount;
@property (nonatomic) bool hasSessionEndReason;
@property (nonatomic) bool hasTopicSubscriptionCount;
@property (nonatomic) int internalAutoSubscribeFeedCount;
@property (nonatomic, retain) NSMutableArray *lastVisibleViews;
@property (nonatomic, retain) NSMutableArray *notificationChannelIds;
@property (nonatomic) int notificationEnabledChannelsCount;
@property (nonatomic) int notitificationsEnabledChannelsCount;
@property (nonatomic, retain) NSMutableArray *paidSubscriptionChannelIds;
@property (nonatomic) int portraitAutoSubscribeFeedCount;
@property (nonatomic) int safariAutoSubscribeFeedCount;
@property (nonatomic) int sessionEndReason;
@property (nonatomic, retain) NSMutableArray *subscribedFeedIds;
@property (nonatomic) int topicSubscriptionCount;

+ (Class)autoSubscribedFeedIdsType;
+ (Class)groupableFeedIdsType;
+ (Class)lastVisibleViewsType;
+ (Class)notificationChannelIdsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)subscribedFeedIdsType;

- (void).cxx_destruct;
- (void)addAutoSubscribedFeedIds:(id)arg1;
- (void)addGroupableFeedIds:(id)arg1;
- (void)addLastVisibleViews:(id)arg1;
- (void)addNotificationChannelIds:(id)arg1;
- (void)addPaidSubscriptionChannelIds:(id)arg1;
- (void)addSubscribedFeedIds:(id)arg1;
- (long long)appSessionDuration;
- (int)appsAutoSubscribeFeedCount;
- (id)autoSubscribedFeedIds;
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)autoSubscribedFeedIdsCount;
- (bool)breakingNewsAvailableDuringSession;
- (bool)breakingNewsDismissedDuringSession;
- (int)channelSubscriptionCount;
- (void)clearAutoSubscribedFeedIds;
- (void)clearGroupableFeedIds;
- (void)clearLastVisibleViews;
- (void)clearNotificationChannelIds;
- (void)clearPaidSubscriptionChannelIds;
- (void)clearSubscribedFeedIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupableFeedIds;
- (id)groupableFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupableFeedIdsCount;
- (bool)hasAppSessionDuration;
- (bool)hasAppsAutoSubscribeFeedCount;
- (bool)hasBreakingNewsAvailableDuringSession;
- (bool)hasBreakingNewsDismissedDuringSession;
- (bool)hasChannelSubscriptionCount;
- (bool)hasInternalAutoSubscribeFeedCount;
- (bool)hasNotificationEnabledChannelsCount;
- (bool)hasNotitificationsEnabledChannelsCount;
- (bool)hasPortraitAutoSubscribeFeedCount;
- (bool)hasSafariAutoSubscribeFeedCount;
- (bool)hasSessionEndReason;
- (bool)hasTopicSubscriptionCount;
- (unsigned long long)hash;
- (int)internalAutoSubscribeFeedCount;
- (bool)isEqual:(id)arg1;
- (id)lastVisibleViews;
- (id)lastVisibleViewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)lastVisibleViewsCount;
- (void)mergeFrom:(id)arg1;
- (id)notificationChannelIds;
- (id)notificationChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationChannelIdsCount;
- (int)notificationEnabledChannelsCount;
- (int)notitificationsEnabledChannelsCount;
- (id)paidSubscriptionChannelIds;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (int)portraitAutoSubscribeFeedCount;
- (bool)readFrom:(id)arg1;
- (int)safariAutoSubscribeFeedCount;
- (int)sessionEndReason;
- (void)setAppSessionDuration:(long long)arg1;
- (void)setAppsAutoSubscribeFeedCount:(int)arg1;
- (void)setAutoSubscribedFeedIds:(id)arg1;
- (void)setBreakingNewsAvailableDuringSession:(bool)arg1;
- (void)setBreakingNewsDismissedDuringSession:(bool)arg1;
- (void)setChannelSubscriptionCount:(int)arg1;
- (void)setGroupableFeedIds:(id)arg1;
- (void)setHasAppSessionDuration:(bool)arg1;
- (void)setHasAppsAutoSubscribeFeedCount:(bool)arg1;
- (void)setHasBreakingNewsAvailableDuringSession:(bool)arg1;
- (void)setHasBreakingNewsDismissedDuringSession:(bool)arg1;
- (void)setHasChannelSubscriptionCount:(bool)arg1;
- (void)setHasInternalAutoSubscribeFeedCount:(bool)arg1;
- (void)setHasNotificationEnabledChannelsCount:(bool)arg1;
- (void)setHasNotitificationsEnabledChannelsCount:(bool)arg1;
- (void)setHasPortraitAutoSubscribeFeedCount:(bool)arg1;
- (void)setHasSafariAutoSubscribeFeedCount:(bool)arg1;
- (void)setHasSessionEndReason:(bool)arg1;
- (void)setHasTopicSubscriptionCount:(bool)arg1;
- (void)setInternalAutoSubscribeFeedCount:(int)arg1;
- (void)setLastVisibleViews:(id)arg1;
- (void)setNotificationChannelIds:(id)arg1;
- (void)setNotificationEnabledChannelsCount:(int)arg1;
- (void)setNotitificationsEnabledChannelsCount:(int)arg1;
- (void)setPaidSubscriptionChannelIds:(id)arg1;
- (void)setPortraitAutoSubscribeFeedCount:(int)arg1;
- (void)setSafariAutoSubscribeFeedCount:(int)arg1;
- (void)setSessionEndReason:(int)arg1;
- (void)setSubscribedFeedIds:(id)arg1;
- (void)setTopicSubscriptionCount:(int)arg1;
- (id)subscribedFeedIds;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscribedFeedIdsCount;
- (int)topicSubscriptionCount;
- (void)writeTo:(id)arg1;

@end
