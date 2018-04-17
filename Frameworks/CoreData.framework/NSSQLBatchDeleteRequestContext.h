/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBatchDeleteRequestContext : NSSQLStoreRequestContext {
    NSArray * _deleteStatements;
    NSArray * _deletedObjectIDs;
    NSSQLFetchRequestContext * _fetchContext;
    NSFetchRequest * _fetchRequestForObjectsToDelete;
}

@property (nonatomic, retain) NSArray *affectedObjectIDs;
@property (nonatomic, readonly, retain) NSArray *deleteStatements;
@property (nonatomic, readonly, retain) NSSQLFetchRequestContext *fetchContext;
@property (nonatomic, readonly, retain) NSFetchRequest *fetchRequestForObjectsToDelete;
@property (nonatomic, readonly) NSBatchDeleteRequest *request;

- (void)_createDeleteStatements;
- (id)_createFetchRequestContextForObjectsToDelete;
- (id)affectedObjectIDs;
- (void)dealloc;
- (id)deleteStatements;
- (void)executePrologue;
- (void)executeRequestCore:(id*)arg1;
- (id)fetchContext;
- (id)fetchRequestForObjectsToDelete;
- (bool)isWritingRequest;
- (id)request;
- (void)setAffectedObjectIDs:(id)arg1;

@end
