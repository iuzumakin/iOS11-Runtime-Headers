/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAVisionServicePersistenceDelegate : NSObject <PVPersistenceDelegate> {
    unsigned int  _activeFaceAlgorithmVersion;
    bool  _personBuilderMergeCandidatesDisabled;
    PHAManager * _photoAnalysisManager;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic) unsigned int activeFaceAlgorithmVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool personBuilderMergeCandidatesDisabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildPersonsFromUpdatedFaceGroups:(id)arg1 faceClusterer:(id)arg2 keyFaceUpdateBlock:(id /* block */)arg3 canceler:(id)arg4 context:(id)arg5;
- (bool)_cleanupMergeCandidatesForVerifiedPersons:(id)arg1 inLibrary:(id)arg2 minimumFaceGroupSize:(unsigned long long)arg3 canceler:(id)arg4 error:(id*)arg5;
- (bool)_completePersonBuildingWithPersonsToUpdate:(id)arg1 facesToRemoveByPerson:(id)arg2 facesToAddByPerson:(id)arg3 updateFaceGroup:(id)arg4 newMergeCandidatePairs:(id)arg5 newInvalidMergeCandidatePairs:(id)arg6 faceInFaceGroupByCSN:(id)arg7 personCache:(id)arg8 keyFaceUpdateBlock:(id /* block */)arg9 canceler:(id)arg10 context:(id)arg11 error:(id*)arg12;
- (id)_duplicateFaceCSNsOnAssetForPerson:(id)arg1 faceCSNsOnPerson:(id)arg2 faceByCSNCache:(id)arg3;
- (void)_enumerateFetchResult:(id)arg1 withBatchSize:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)_enumeratePersonsWithLocalIdentifiers:(id)arg1 fetchOptions:(id)arg2 personCache:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)_faceToFaceCountMapForFaces:(id)arg1;
- (id)_fetchPHFacesForFaceIdentifiers:(id)arg1;
- (id)_fetchResultForInconsistentlyClusteredFacesInPhotoLibrary:(id)arg1;
- (void)_getMergeCandidates:(id)arg1 invalidMergeCandidates:(id)arg2 forPersonsWithLocalIdentifiers:(id)arg3;
- (void)_getRejectedTrainingFaceCSNs:(id*)arg1 rejectedFaceCSNs:(id*)arg2 rejectedPersonLocalIdentifiers:(id*)arg3 forPerson:(id)arg4 faceInFaceGroupByCSN:(id)arg5;
- (void)_getTrainingFacesByPerson:(id*)arg1 confirmedFaceCSNs:(id*)arg2 faceCSNsByPerson:(id*)arg3 faceCSNsByMigratedPerson:(id*)arg4 mergeCandidates:(id*)arg5 invalidMergeCandidates:(id*)arg6 rejectedPersonsByPerson:(id*)arg7 faceInFaceGroupByCSN:(id*)arg8 inFaces:(id)arg9 personCache:(id)arg10 canceler:(id)arg11;
- (unsigned long long)_level0ClusterIdForFaceCSN:(unsigned long long)arg1 level0Clusters:(id)arg2;
- (id)_localIdentifiersOfUnverifiedPersonsAssociatedWithFaceGroups:(id)arg1 withCanceler:(id)arg2;
- (id)_pvFaceprintForPHFace:(id)arg1;
- (id)_representativenessByFaceCSNFromFaces:(id)arg1 canceler:(id)arg2;
- (void)_updateFaceCSNsToAddByPerson:(id)arg1 faceCSNsToRemoveByPerson:(id)arg2 faceInFaceGroupByCSN:(id)arg3 faceCSNsByPersonLocalIdentifier:(id)arg4 faceCSNsByMigratedPersonLocalIdentifier:(id)arg5 personsToUpdate:(id)arg6;
- (id)_updatedFaceGroupByFGLocalIdentifierFromClusterCSNsWithCanceler:(id)arg1 fetchLimit:(unsigned long long)arg2;
- (unsigned int)activeFaceAlgorithmVersion;
- (id)allAlgorithmicFaceGroups:(id*)arg1;
- (id)allPersons:(id*)arg1;
- (id)assetForIdentifier:(id)arg1 error:(id*)arg2;
- (id)associateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3;
- (id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 canceler:(id)arg3;
- (id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 candidateFaces:(id)arg3 canceler:(id)arg4;
- (void)buildPersonsWithFaceClusterer:(id)arg1 keyFaceUpdateBlock:(id /* block */)arg2 canceler:(id)arg3 context:(id)arg4;
- (bool)cleanupInconsistentlyClusteredFacesWithCanceler:(id)arg1 error:(id*)arg2;
- (bool)cleanupMergeCandidatesWithMinimumFaceGroupSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id*)arg3;
- (bool)clearDirtyStateOnFaceCrops:(id)arg1 error:(id*)arg2;
- (id)clusterSequenceNumberForFaceGroupWithLocalIdentifier:(id)arg1;
- (void)collectPersonBuilderMetrics;
- (unsigned long long)countOfAlgorithmicFaceGroups;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfClusteredFacesWithClusterSequenceNumbersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfFaces;
- (unsigned long long)countOfUnclusteredClusteringEligibleFaces;
- (void)dedupeGraphVerifiedPersonsInFaceGroup:(id)arg1 personCache:(id)arg2;
- (bool)deleteEmptyGroupsAndReturnError:(id*)arg1;
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2;
- (id)dirtyFaceCropsWithLimit:(unsigned long long)arg1;
- (id)faceAssociatedWithFaceCrop:(id)arg1;
- (id)faceLocalIdentifiersInFaceGroupWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)faceprintsByFaceLocalIdentifiers:(id)arg1 version:(unsigned int)arg2 error:(id*)arg3;
- (id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(bool)arg2 error:(id*)arg3;
- (id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(bool)arg3;
- (id)facesForFaceLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)facesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)facesFromAsset:(id)arg1 error:(id*)arg2;
- (id)facesFromFaceGroupWithMostNumberOfFacesOnPerson:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)fetchAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchFaceWithClusterSequenceNumber:(id)arg1 error:(id*)arg2;
- (id)fetchFaceWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchPersonWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id*)arg2;
- (bool)hasDirtyFaceCrops;
- (id)initWithPhotoAnalysisManager:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id*)arg3;
- (id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(bool)arg2 error:(id*)arg3;
- (id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (void)logPVDebugMessage:(id)arg1;
- (void)logPVErrorMessage:(id)arg1;
- (void)logPVInfoMessage:(id)arg1;
- (void)logPVWarningMessage:(id)arg1;
- (bool)needsPersonBuilding;
- (id)newClusteringEligibleFacesFetchOptions;
- (id)newClusteringEligibleFacesFetchPredicate;
- (id)newUnclusteredClusteringEligibleFacesFetchOptions;
- (id)newUnclusteredFacesFetchPredicate;
- (bool)persistChangesToAlgorithmicFaceGroups:(id)arg1 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)arg2 faceCSNsOfUnclusteredFaces:(id)arg3 localIdentifiersOfUnclusteredFaces:(id)arg4 persistenceCompletionBlock:(id /* block */)arg5 canceler:(id)arg6 error:(id*)arg7;
- (bool)persistFaces:(id)arg1 deleteFaces:(id)arg2 forAsset:(id)arg3 persistedFaces:(id*)arg4 error:(id*)arg5;
- (bool)persistGeneratedFaceCrops:(id)arg1 error:(id*)arg2;
- (bool)personBuilderMergeCandidatesDisabled;
- (id)personWithFaceLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)personsFetchResultWithLocalIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)personsForLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)photoLibrary;
- (bool)recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg1 error:(id*)arg2;
- (id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedFaceGroupLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)rejectedUnverifiedPersonLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)removeAutoAssignedFacesFromVerifiedPersonsAndPrepareForPersonBuilding:(id)arg1 canceler:(id)arg2 error:(id*)arg3;
- (bool)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)resetLibraryClustersWithCanceler:(id)arg1 error:(id*)arg2;
- (void)setActiveFaceAlgorithmVersion:(unsigned int)arg1;
- (bool)setKeyFaceOfAlgorithmicFaceGroupToFaceWithClusterSequenceNumbers:(id)arg1 error:(id*)arg2;
- (void)setPersonBuilderMergeCandidatesDisabled:(bool)arg1;
- (id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 faceClusterer:(id)arg2 canceler:(id)arg3 context:(id)arg4 error:(id*)arg5;
- (bool)unclusterFaces:(id)arg1 canceler:(id)arg2 error:(id*)arg3;
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id*)arg1;
- (id)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned int)arg2;
- (bool)updateFaceprint:(id)arg1 ofPersistedFace:(id)arg2 error:(id*)arg3;
- (bool)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(bool)arg2 canceler:(id)arg3 error:(id*)arg4;
- (id)verifiedPersonsFetchResultWithLocalIdentifiers:(id)arg1 error:(id*)arg2;

@end
