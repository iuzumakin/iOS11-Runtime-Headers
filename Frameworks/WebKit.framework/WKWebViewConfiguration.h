/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebViewConfiguration : NSObject <NSCoding, NSCopying> {
    bool  _allowMediaContentTypesRequiringHardwareSupportAsFallback;
    bool  _allowUniversalAccessFromFileURLs;
    bool  _allowsAirPlayForMediaPlayback;
    bool  _allowsBlockSelection;
    bool  _allowsInlineMediaPlayback;
    bool  _allowsInlineMediaPlaybackAfterFullscreen;
    bool  _allowsJavaScriptMarkup;
    bool  _allowsMetaRefresh;
    bool  _allowsPictureInPictureMediaPlayback;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<WKWebView>="m_weakReference"@}' */ struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _alternateWebViewForNavigationGestures;
    bool  _alwaysRunsAtForegroundPriority;
    bool  _applePayEnabled;
    struct LazyInitialized<WTF::RetainPtr<NSString> > { 
        bool m_isInitialized; 
        struct RetainPtr<NSString> { 
            void *m_ptr; 
        } m_value; 
    }  _applicationNameForUserAgent;
    bool  _attachmentElementEnabled;
    struct LazyInitialized<WTF::RetainPtr<WKWebViewContentProviderRegistry> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKWebViewContentProviderRegistry> { 
            void *m_ptr; 
        } m_value; 
    }  _contentProviderRegistry;
    bool  _controlledByAutomation;
    bool  _convertsPositionStyleOnCopy;
    unsigned long long  _dataDetectorTypes;
    unsigned long long  _dragLiftDelay;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _groupIdentifier;
    bool  _ignoresViewportScaleLimits;
    double  _incrementalRenderingSuppressionTimeout;
    bool  _initialCapitalizationEnabled;
    bool  _inlineMediaPlaybackRequiresPlaysInlineAttribute;
    bool  _invisibleAutoplayNotPermitted;
    bool  _legacyEncryptedMediaAPIEnabled;
    bool  _mainContentUserGestureOverrideEnabled;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _mediaContentTypesRequiringHardwareSupport;
    bool  _mediaDataLoadsAutomatically;
    unsigned long long  _mediaTypesRequiringUserActionForPlayback;
    bool  _needsStorageAccessFromFileURLsQuirk;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _overrideContentSecurityPolicy;
    struct LazyInitialized<WTF::RetainPtr<WKPreferences> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKPreferences> { 
            void *m_ptr; 
        } m_value; 
    }  _preferences;
    bool  _printsBackgrounds;
    struct LazyInitialized<WTF::RetainPtr<WKProcessPool> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKProcessPool> { 
            void *m_ptr; 
        } m_value; 
    }  _processPool;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<WKWebView>="m_weakReference"@}' */ struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _relatedWebView;
    bool  _respectsImageOrientation;
    long long  _selectionGranularity;
    bool  _suppressesIncrementalRendering;
    bool  _treatsSHA1SignedCertificatesAsInsecure;
    struct LazyInitialized<WTF::RetainPtr<NSMutableDictionary<NSString *,id<WKURLSchemeHandler>> > > { 
        bool m_isInitialized; 
        struct RetainPtr<NSMutableDictionary<NSString *,id<WKURLSchemeHandler>> > { 
            void *m_ptr; 
        } m_value; 
    }  _urlSchemeHandlers;
    struct LazyInitialized<WTF::RetainPtr<WKUserContentController> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKUserContentController> { 
            void *m_ptr; 
        } m_value; 
    }  _userContentController;
    struct LazyInitialized<WTF::RetainPtr<_WKVisitedLinkStore> > { 
        bool m_isInitialized; 
        struct RetainPtr<_WKVisitedLinkStore> { 
            void *m_ptr; 
        } m_value; 
    }  _visitedLinkStore;
    bool  _waitsForPaintAfterViewDidMoveToWindow;
    struct LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKWebsiteDataStore> { 
            void *m_ptr; 
        } m_value; 
    }  _websiteDataStore;
}

@property (setter=_setAllowMediaContentTypesRequiringHardwareSupportAsFallback:, nonatomic) bool _allowMediaContentTypesRequiringHardwareSupportAsFallback;
@property (setter=_setAllowUniversalAccessFromFileURLs:, nonatomic) bool _allowUniversalAccessFromFileURLs;
@property (setter=_setAllowsBlockSelection:, nonatomic) bool _allowsBlockSelection;
@property (setter=_setAllowsInlineMediaPlaybackAfterFullscreen:, nonatomic) bool _allowsInlineMediaPlaybackAfterFullscreen;
@property (setter=_setAllowsJavaScriptMarkup:, nonatomic) bool _allowsJavaScriptMarkup;
@property (setter=_setAllowsMetaRefresh:, nonatomic) bool _allowsMetaRefresh;
@property (setter=_setAlternateWebViewForNavigationGestures:, nonatomic) WKWebView *_alternateWebViewForNavigationGestures;
@property (setter=_setAlwaysRunsAtForegroundPriority:, nonatomic) bool _alwaysRunsAtForegroundPriority;
@property (setter=_setApplePayEnabled:, nonatomic) bool _applePayEnabled;
@property (setter=_setAttachmentElementEnabled:, nonatomic) bool _attachmentElementEnabled;
@property (setter=_setContentProviderRegistry:, nonatomic) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property (getter=_isControlledByAutomation, setter=_setControlledByAutomation:, nonatomic) bool _controlledByAutomation;
@property (setter=_setConvertsPositionStyleOnCopy:, nonatomic) bool _convertsPositionStyleOnCopy;
@property (setter=_setDragLiftDelay:, nonatomic) unsigned long long _dragLiftDelay;
@property (setter=_setGroupIdentifier:, nonatomic, copy) NSString *_groupIdentifier;
@property (setter=_setIncrementalRenderingSuppressionTimeout:, nonatomic) double _incrementalRenderingSuppressionTimeout;
@property (setter=_setInitialCapitalizationEnabled:, nonatomic) bool _initialCapitalizationEnabled;
@property (setter=_setInlineMediaPlaybackRequiresPlaysInlineAttribute:, nonatomic) bool _inlineMediaPlaybackRequiresPlaysInlineAttribute;
@property (setter=_setInvisibleAutoplayNotPermitted:, nonatomic) bool _invisibleAutoplayNotPermitted;
@property (setter=_setLegacyEncryptedMediaAPIEnabled:, nonatomic) bool _legacyEncryptedMediaAPIEnabled;
@property (setter=_setMainContentUserGestureOverrideEnabled:, nonatomic) bool _mainContentUserGestureOverrideEnabled;
@property (setter=_setMediaContentTypesRequiringHardwareSupport:, nonatomic) NSString *_mediaContentTypesRequiringHardwareSupport;
@property (setter=_setMediaDataLoadsAutomatically:, nonatomic) bool _mediaDataLoadsAutomatically;
@property (setter=_setNeedsStorageAccessFromFileURLsQuirk:, nonatomic) bool _needsStorageAccessFromFileURLsQuirk;
@property (setter=_setOverrideContentSecurityPolicy:, nonatomic) NSString *_overrideContentSecurityPolicy;
@property (setter=_setPrintsBackgrounds:, nonatomic) bool _printsBackgrounds;
@property (setter=_setRelatedWebView:, nonatomic) WKWebView *_relatedWebView;
@property (setter=_setRequiresUserActionForAudioPlayback:, nonatomic) bool _requiresUserActionForAudioPlayback;
@property (setter=_setRequiresUserActionForVideoPlayback:, nonatomic) bool _requiresUserActionForVideoPlayback;
@property (setter=_setRespectsImageOrientation:, nonatomic) bool _respectsImageOrientation;
@property (setter=_setTreatsSHA1SignedCertificatesAsInsecure:, nonatomic) bool _treatsSHA1SignedCertificatesAsInsecure;
@property (nonatomic, readonly) NSMutableDictionary *_urlSchemeHandlers;
@property (setter=_setVisitedLinkStore:, nonatomic, retain) _WKVisitedLinkStore *_visitedLinkStore;
@property (setter=_setWaitsForPaintAfterViewDidMoveToWindow:, nonatomic) bool _waitsForPaintAfterViewDidMoveToWindow;
@property (setter=_setWebsiteDataStore:, nonatomic, retain) _WKWebsiteDataStore *_websiteDataStore;
@property (nonatomic) bool allowsAirPlayForMediaPlayback;
@property (nonatomic) bool allowsInlineMediaPlayback;
@property (nonatomic) bool allowsPictureInPictureMediaPlayback;
@property (nonatomic, copy) NSString *applicationNameForUserAgent;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) bool ignoresViewportScaleLimits;
@property (nonatomic) bool mediaPlaybackAllowsAirPlay;
@property (nonatomic) bool mediaPlaybackRequiresUserAction;
@property (nonatomic) unsigned long long mediaTypesRequiringUserActionForPlayback;
@property (nonatomic, retain) WKPreferences *preferences;
@property (nonatomic, retain) WKProcessPool *processPool;
@property (nonatomic) bool requiresUserActionForMediaPlayback;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic) bool suppressesIncrementalRendering;
@property (nonatomic, retain) WKUserContentController *userContentController;
@property (nonatomic, retain) WKWebsiteDataStore *websiteDataStore;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_allowMediaContentTypesRequiringHardwareSupportAsFallback;
- (bool)_allowUniversalAccessFromFileURLs;
- (bool)_allowsBlockSelection;
- (bool)_allowsInlineMediaPlaybackAfterFullscreen;
- (bool)_allowsJavaScriptMarkup;
- (bool)_allowsMetaRefresh;
- (id)_alternateWebViewForNavigationGestures;
- (bool)_alwaysRunsAtForegroundPriority;
- (bool)_applePayEnabled;
- (bool)_attachmentElementEnabled;
- (id)_contentProviderRegistry;
- (bool)_convertsPositionStyleOnCopy;
- (unsigned long long)_dragLiftDelay;
- (id)_groupIdentifier;
- (double)_incrementalRenderingSuppressionTimeout;
- (bool)_initialCapitalizationEnabled;
- (bool)_inlineMediaPlaybackRequiresPlaysInlineAttribute;
- (bool)_invisibleAutoplayNotPermitted;
- (bool)_isControlledByAutomation;
- (bool)_legacyEncryptedMediaAPIEnabled;
- (bool)_mainContentUserGestureOverrideEnabled;
- (id)_mediaContentTypesRequiringHardwareSupport;
- (bool)_mediaDataLoadsAutomatically;
- (bool)_needsStorageAccessFromFileURLsQuirk;
- (id)_overrideContentSecurityPolicy;
- (bool)_printsBackgrounds;
- (id)_relatedWebView;
- (bool)_requiresUserActionForAudioPlayback;
- (bool)_requiresUserActionForVideoPlayback;
- (bool)_respectsImageOrientation;
- (void)_setAllowMediaContentTypesRequiringHardwareSupportAsFallback:(bool)arg1;
- (void)_setAllowUniversalAccessFromFileURLs:(bool)arg1;
- (void)_setAllowsBlockSelection:(bool)arg1;
- (void)_setAllowsInlineMediaPlaybackAfterFullscreen:(bool)arg1;
- (void)_setAllowsJavaScriptMarkup:(bool)arg1;
- (void)_setAllowsMetaRefresh:(bool)arg1;
- (void)_setAlternateWebViewForNavigationGestures:(id)arg1;
- (void)_setAlwaysRunsAtForegroundPriority:(bool)arg1;
- (void)_setApplePayEnabled:(bool)arg1;
- (void)_setAttachmentElementEnabled:(bool)arg1;
- (void)_setContentProviderRegistry:(id)arg1;
- (void)_setControlledByAutomation:(bool)arg1;
- (void)_setConvertsPositionStyleOnCopy:(bool)arg1;
- (void)_setDragLiftDelay:(unsigned long long)arg1;
- (void)_setGroupIdentifier:(id)arg1;
- (void)_setIncrementalRenderingSuppressionTimeout:(double)arg1;
- (void)_setInitialCapitalizationEnabled:(bool)arg1;
- (void)_setInlineMediaPlaybackRequiresPlaysInlineAttribute:(bool)arg1;
- (void)_setInvisibleAutoplayNotPermitted:(bool)arg1;
- (void)_setLegacyEncryptedMediaAPIEnabled:(bool)arg1;
- (void)_setMainContentUserGestureOverrideEnabled:(bool)arg1;
- (void)_setMediaContentTypesRequiringHardwareSupport:(id)arg1;
- (void)_setMediaDataLoadsAutomatically:(bool)arg1;
- (void)_setNeedsStorageAccessFromFileURLsQuirk:(bool)arg1;
- (void)_setOverrideContentSecurityPolicy:(id)arg1;
- (void)_setPrintsBackgrounds:(bool)arg1;
- (void)_setRelatedWebView:(id)arg1;
- (void)_setRequiresUserActionForAudioPlayback:(bool)arg1;
- (void)_setRequiresUserActionForVideoPlayback:(bool)arg1;
- (void)_setRespectsImageOrientation:(bool)arg1;
- (void)_setTreatsSHA1SignedCertificatesAsInsecure:(bool)arg1;
- (void)_setVisitedLinkProvider:(id)arg1;
- (void)_setVisitedLinkStore:(id)arg1;
- (void)_setWaitsForPaintAfterViewDidMoveToWindow:(bool)arg1;
- (void)_setWebsiteDataStore:(id)arg1;
- (bool)_treatsSHA1SignedCertificatesAsInsecure;
- (id)_urlSchemeHandlers;
- (void)_validate;
- (id)_visitedLinkProvider;
- (id)_visitedLinkStore;
- (bool)_waitsForPaintAfterViewDidMoveToWindow;
- (id)_websiteDataStore;
- (bool)allowsAirPlayForMediaPlayback;
- (bool)allowsInlineMediaPlayback;
- (bool)allowsPictureInPictureMediaPlayback;
- (id)applicationNameForUserAgent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataDetectorTypes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoresViewportScaleLimits;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)mediaPlaybackRequiresUserAction;
- (unsigned long long)mediaTypesRequiringUserActionForPlayback;
- (id)preferences;
- (id)processPool;
- (bool)requiresUserActionForMediaPlayback;
- (long long)selectionGranularity;
- (void)setAllowsAirPlayForMediaPlayback:(bool)arg1;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (void)setAllowsPictureInPictureMediaPlayback:(bool)arg1;
- (void)setApplicationNameForUserAgent:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setIgnoresViewportScaleLimits:(bool)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (void)setMediaTypesRequiringUserActionForPlayback:(unsigned long long)arg1;
- (void)setPreferences:(id)arg1;
- (void)setProcessPool:(id)arg1;
- (void)setRequiresUserActionForMediaPlayback:(bool)arg1;
- (void)setSelectionGranularity:(long long)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (void)setURLSchemeHandler:(id)arg1 forURLScheme:(id)arg2;
- (void)setUserContentController:(id)arg1;
- (void)setWebsiteDataStore:(id)arg1;
- (bool)suppressesIncrementalRendering;
- (id)urlSchemeHandlerForURLScheme:(id)arg1;
- (id)userContentController;
- (id)websiteDataStore;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (id)sharedAdvertisingConfiguration:(bool)arg1;

@end
