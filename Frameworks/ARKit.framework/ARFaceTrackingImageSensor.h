/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingImageSensor : ARImageSensor <AVCaptureDataOutputSynchronizerDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    NSMutableDictionary * _avFaceMeshPayload;
    NSArray * _availableMetadataObjectTypes;
    AVCaptureDepthDataOutput * _depthDataOutput;
    unsigned long long  _droppedFramesPerSec;
    NSMutableArray * _faceDetections;
    NSObject<OS_dispatch_semaphore> * _faceSemaphore;
    AVCaptureMetadataOutput * _metaDataOutput;
    bool  _mirrorVideoOutput;
    AVCaptureDataOutputSynchronizer * _outputSynchronizer;
    NSObject<OS_dispatch_queue> * _outputSynchronizerQueue;
    bool  _signpostFirstFaceDone;
    bool  _signpostFirstFrameDone;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMirrored;
@property (readonly) Class superclass;

+ (void)faceDataFromMetadataObjects:(id)arg1 mirroredVideoInput:(bool)arg2 pFaceBoundingBoxes:(id*)arg3 pFacePayload:(id*)arg4;
+ (id)new;

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)capturedSynchedOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromVideoConnection:(id)arg3 metaDataOutput:(id)arg4 didOutputMetadataObjects:(id)arg5 didOutputDepthData:(id)arg6 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
- (id)configureCaptureDevice;
- (id)configureCaptureSession;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDeviceType:(id)arg1;
- (id)initWithDeviceType:(id)arg1 mirrorVideoOutput:(bool)arg2 captureSession:(id)arg3;
- (bool)isMirrored;
- (unsigned long long)providedDataTypes;
- (void)setRequiredMetaDataObjectTypes:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronizeOutputs:(id)arg1;

@end
