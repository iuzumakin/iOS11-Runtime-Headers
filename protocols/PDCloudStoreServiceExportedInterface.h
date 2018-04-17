/* Generated by RuntimeBrowser.
 */

@protocol PDCloudStoreServiceExportedInterface <PDXPCServiceExportedInterface>

@required

- (void)allItemsOfClassType:(void *)arg1 storeLocally:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: Class, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*
- (void)fetchAndStoreRecordsForPaymentPass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*
- (void)removeItemsWithRecordNames:(void *)arg1 itemClass:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetContainerWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)simulateCloudStorePushWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSArray *, NSError *, void*
- (void)updateCloudStoreWithLocalItems:(void *)arg1 recordSpecificKeys:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end