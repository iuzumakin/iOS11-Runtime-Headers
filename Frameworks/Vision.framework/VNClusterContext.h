/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNClusterContext : NSObject {
    NSString * _cacheFolderPath;
    NSString * _clusterMethod;
    <VNClustering> * _clustering;
    VNSimilarityMatrix * _matrix;
    unsigned long long  _maxFaceId;
    NSMutableDictionary * _obsDictById;
    float  _threshold;
    bool  _useClusterObservation;
}

@property (readonly) NSString *clusterMethod;
@property (getter=getClusteredFaceIds, readonly) NSSet *clusteredFaceIds;
@property (retain) VNSimilarityMatrix *matrix;
@property (readonly) bool useClusterObservation;

- (void).cxx_destruct;
- (bool)addFaces:(id)arg1 error:(id*)arg2;
- (bool)cancelClustering:(id*)arg1;
- (id)clusterFacesWithOptions:(id)arg1 error:(id*)arg2;
- (id)clusterMethod;
- (id)clusterState;
- (id)getClusteredFaceIds;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)getDistanceBetweenClustersWithFaceIds:(id)arg1;
- (id)getDistances:(id)arg1 to:(id)arg2;
- (id)getGroupedClusteredFaceIdsForFaceId:(id)arg1;
- (id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)matrix;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)refinedSuggestionsForClusterIds:(id)arg1 fromClusters:(id)arg2 affinityThreshold:(float)arg3 error:(id*)arg4;
- (bool)removeFaces:(id)arg1 error:(id*)arg2;
- (void)reset;
- (bool)restoreClusterState:(id)arg1 cacheFolderPath:(id)arg2 error:(id*)arg3;
- (void)setMatrix:(id)arg1;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;
- (bool)useClusterObservation;

@end
