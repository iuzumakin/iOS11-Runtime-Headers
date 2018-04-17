/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCReportingController : NSObject <ICEnvironmentMonitorObserver> {
    MPAssistantAnalyticsReportingController * _assistantAnalyticsController;
    MPCJinglePlayActivityReportingController * _jinglePlayActivityReportingController;
    MPCLyricsReportingController * _lyricsReportingController;
    MPCPlaybackEngine * _playbackEngine;
    MPCPlaybackHistoryController * _playbackHistoryController;
    MPCReportingPlaybackObserver * _reportingPlaybackObserver;
    MPRTCReportingController * _rtcReportingController;
}

@property (nonatomic, retain) MPAssistantAnalyticsReportingController *assistantAnalyticsController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController;
@property (nonatomic, retain) MPCLyricsReportingController *lyricsReportingController;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, retain) MPCPlaybackHistoryController *playbackHistoryController;
@property (nonatomic, retain) MPCReportingPlaybackObserver *reportingPlaybackObserver;
@property (nonatomic, retain) MPRTCReportingController *rtcReportingController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assistantAnalyticsController;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)jinglePlayActivityReportingController;
- (id)lyricsReportingController;
- (id)playbackEngine;
- (id)playbackHistoryController;
- (void)recordLyricsViewEvent:(id)arg1;
- (id)reportingPlaybackObserver;
- (id)rtcReportingController;
- (void)setAssistantAnalyticsController:(id)arg1;
- (void)setJinglePlayActivityReportingController:(id)arg1;
- (void)setLyricsReportingController:(id)arg1;
- (void)setPlaybackHistoryController:(id)arg1;
- (void)setReportingPlaybackObserver:(id)arg1;
- (void)setRtcReportingController:(id)arg1;

@end
