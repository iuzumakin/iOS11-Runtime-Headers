/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentGeneration : NSObject {
    PLMomentAnalyzer * _analyzer;
    unsigned long long  _inProgressCount;
    NSObject<OS_dispatch_queue> * _incrementalGenerationStateQueue;
    bool  _isGenerationPassInProgress;
    bool  _isInStressTestMode;
    <PLMomentGenerationDataManagement> * _momentGenerationDataManager;
    PLMomentAnalyzer * _pairedAnalyzer;
    NSMutableArray * _pendingCompletionBlocks;
    NSMutableDictionary * _pendingDeletes;
    NSMutableOrderedSet * _pendingInsertsAndUpdates;
}

@property (nonatomic) PLMomentAnalyzer *analyzer;
@property (nonatomic) <PLMomentGenerationDataManagement> *momentGenerationDataManager;

+ (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
+ (id)_insertMomentsForAssets:(id)arg1 inManager:(id)arg2 withAffectedMoments:(id)arg3;
+ (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
+ (bool)_rebuildAllMomentListsWithDataManager:(id)arg1 error:(id*)arg2;
+ (void)_updateMoment:(id)arg1 fromCluster:(id)arg2 inManager:(id)arg3;
+ (id)generateMergeCustomMomentUUID;
+ (id)generateSplitCustomMomentUUID;

- (void)_appendAssetsToReplayLog:(id)arg1 forBatchUpdate:(bool)arg2;
- (void)_clearReplayLog;
- (id)_coalescedDateRangesFromRanges:(id)arg1;
- (bool)_deleteAllMomentDataInManager:(id)arg1 incremental:(bool)arg2 error:(id*)arg3;
- (id)_detailsForAsset:(id)arg1 simpleOnly:(bool)arg2;
- (id)_detailsForMoment:(id)arg1;
- (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
- (id)_insertMomentsForAssets:(id)arg1 inManager:(id)arg2 withAffectedMoments:(id)arg3;
- (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
- (bool)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2;
- (id)_logEntryForAssets:(id)arg1 isBatchUpdate:(bool)arg2;
- (id)_nameForMomentGenerationType:(short)arg1;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1;
- (bool)_rebuildAllMomentsInManager:(id)arg1 shouldAnalyze:(bool)arg2 error:(id*)arg3;
- (void)_refreshObjects:(id)arg1 withDataManager:(id)arg2;
- (void)_runIncrementalGenerationPassWithCompletionHandler:(id /* block */)arg1;
- (void)_updateIncrementalMomentGeneration;
- (bool)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3;
- (id)allAssetMetadataWriteToFile:(id)arg1;
- (id)allMomentsMetadataWriteToFile:(id)arg1;
- (id)analyzer;
- (void)clearUserInfluencedMoments;
- (void)dealloc;
- (void)generateWithAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateWithIncrementalDataCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)momentGenerationDataManager;
- (id)momentGenerationStatus;
- (void)rebuildAllMomentLists:(id /* block */)arg1;
- (bool)rebuildAllMomentsWithManager:(id)arg1 error:(id*)arg2;
- (void)rebuildAllMomentsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveChangesForAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2;
- (void)setAnalyzer:(id)arg1;
- (void)setMomentGenerationDataManager:(id)arg1;

@end
