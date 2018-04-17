/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAttachmentDownloadOperation : NSOperation <MPStoreDownloadManagerObserver> {
    MSCLAttachment * _attachment;
    MPStoreDownload * _download;
    double  _downloadProgress;
    bool  _executing;
    bool  _finished;
}

@property (nonatomic, copy) MSCLAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPStoreDownload *download;
@property (nonatomic) double downloadProgress;
@property (getter=isExecuting, nonatomic) bool executing;
@property (getter=isFinished, nonatomic) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishDownload;
- (id)attachment;
- (id)download;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (double)downloadProgress;
- (id)initWithAttachment:(id)arg1;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setAttachment:(id)arg1;
- (void)setDownload:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;

@end
