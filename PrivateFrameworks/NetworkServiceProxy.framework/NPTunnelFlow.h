/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelFlow : NSObject <NSPConnectionInfoSource> {
    NSPAppRule * _appRule;
    bool  _enableDirectRace;
    NPFlowProperties * _extraFlowProperties;
    double  _fallbackDelay;
    bool  _fallbackDisabled;
    long long  _fallbackReason;
    void * _fallbackTimer;
    NSDate * _firstTxByteTimestamp;
    bool  _hasTunnel;
    unsigned long long  _hashKey;
    unsigned long long  _identifier;
    unsigned long long  _initialBytesLeftOver;
    bool  _isDirectConnectionViable;
    long long  _latestByteDate;
    NSObject<OS_dispatch_data> * _savedData;
    bool  _shouldComposeIntialData;
    NSDate * _startDate;
    long long  _state;
    NetworkServiceProxyRequestStats * _stats;
    void * _telemetryTimer;
    NPTunnel * _tunnel;
    int  _tunnelError;
    bool  _useCustomHostnameValidation;
    void * _window;
}

@property (retain) NSData *appData;
@property (readonly) NSPAppRule *appRule;
@property bool enableDirectRace;
@property (readonly) NPFlowProperties *extraFlowProperties;
@property double fallbackDelay;
@property bool fallbackDisabled;
@property long long fallbackReason;
@property void*fallbackTimer;
@property (retain) NSDate *firstTxByteTimestamp;
@property bool hasTunnel;
@property (readonly) unsigned long long hashKey;
@property unsigned long long identifier;
@property unsigned long long initialBytesLeftOver;
@property (readonly) bool isBestEffort;
@property (readonly) bool isClientFlowClosed;
@property bool isDirectConnectionViable;
@property long long latestByteDate;
@property (retain) NSObject<OS_dispatch_data> *savedData;
@property bool shouldComposeIntialData;
@property (readonly) NSDate *startDate;
@property long long state;
@property (readonly) NetworkServiceProxyRequestStats *stats;
@property void*telemetryTimer;
@property (readonly) NPTunnel *tunnel;
@property int tunnelError;
@property bool useCustomHostnameValidation;
@property void*window;

- (void).cxx_destruct;
- (id)appData;
- (id)appRule;
- (void)cleanupLosingConnection:(bool)arg1;
- (void)closeClientFlowWithError:(int)arg1;
- (void)closeFromDirectConnectionWithError:(int)arg1;
- (void)closeFromTunnel;
- (void)closeWithError:(int)arg1;
- (id)combineStateInfo:(id)arg1 andConnectionInfo:(id)arg2;
- (id)copyConnectionInfo;
- (void)copyConnectionInfoWithCompletionHandler:(id /* block */)arg1;
- (void)createTelemetryDataWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (bool)enableDirectRace;
- (id)extraFlowProperties;
- (double)fallbackDelay;
- (bool)fallbackDisabled;
- (long long)fallbackReason;
- (void*)fallbackTimer;
- (id)firstTxByteTimestamp;
- (void)handleAppData:(id)arg1;
- (void)handleTunnelCanHandleMoreData;
- (void)handleTunnelConnected;
- (void)handleTunnelDisconnected;
- (bool)hasTunnel;
- (unsigned long long)hashKey;
- (unsigned long long)identifier;
- (void)increaseWindowSize:(unsigned long long)arg1;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 hashKey:(unsigned long long)arg3 extraFlowProperties:(id)arg4;
- (unsigned long long)initialBytesLeftOver;
- (bool)isBestEffort;
- (bool)isClientFlowClosed;
- (bool)isDirectConnectionViable;
- (long long)latestByteDate;
- (void)processConnectionInfo:(id)arg1;
- (void)readDataFromClient;
- (void)reportMetrics;
- (void)reportTelemetry:(id)arg1 withService:(id)arg2 url:(id)arg3;
- (id)savedData;
- (void)sendDataToClient:(id)arg1 fromTunnel:(bool)arg2;
- (void)setAppData:(id)arg1;
- (void)setEnableDirectRace:(bool)arg1;
- (void)setFallbackDelay:(double)arg1;
- (void)setFallbackDisabled:(bool)arg1;
- (void)setFallbackReason:(long long)arg1;
- (void)setFallbackTimer:(void*)arg1;
- (void)setFirstTxByteTimestamp:(id)arg1;
- (void)setHasTunnel:(bool)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setInitialBytesLeftOver:(unsigned long long)arg1;
- (void)setIsDirectConnectionViable:(bool)arg1;
- (void)setLatestByteDate:(long long)arg1;
- (void)setSavedData:(id)arg1;
- (void)setShouldComposeIntialData:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setTelemetryTimer:(void*)arg1;
- (void)setTunnelError:(int)arg1;
- (void)setUseCustomHostnameValidation:(bool)arg1;
- (void)setWindow:(void*)arg1;
- (bool)shouldComposeIntialData;
- (bool)shouldSendDataToClient:(id)arg1 fromTunnel:(bool)arg2;
- (id)startDate;
- (void)startDirectConnection;
- (long long)state;
- (id)stats;
- (void)stopDirectConnection;
- (void*)telemetryTimer;
- (id)tunnel;
- (int)tunnelError;
- (bool)useCustomHostnameValidation;
- (void*)window;

@end
