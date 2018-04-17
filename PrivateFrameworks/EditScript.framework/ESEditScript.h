/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
 */

@interface ESEditScript : NSObject {
    long long  _currentOperation;
    ESIntArray2D * _distanceMatrix;
    <ESEditScriptData> * _itemAData;
    <ESEditScriptData> * _itemBData;
    NSArray * _operationPrecedenceArray;
    bool  _orderAtomsAscending;
    NSMutableArray * _script;
}

@property (nonatomic, copy) NSArray *operationPrecedenceArray;
@property (nonatomic, retain) NSMutableArray *script;

- (void).cxx_destruct;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (void)computeDistanceMatrix;
- (void)computeEditsFromMatrix;
- (id)description;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)arg1 orderAtomsAscending:(bool)arg2;
- (void)initializeCurrentScriptAtom;
- (id)operationPrecedenceArray;
- (id)operationPrecedenceArrayFromOperationPrecedence:(long long)arg1;
- (id)script;
- (void)setOperationPrecedenceArray:(id)arg1;
- (void)setScript:(id)arg1;

@end
