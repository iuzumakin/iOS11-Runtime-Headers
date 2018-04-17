/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDNDList : NSObject {
    NPSManager * _syncManager;
}

@property (nonatomic, retain) NPSManager *syncManager;

+ (id)sharedList;

- (void).cxx_destruct;
- (id)_deprecated_globalIdentifierForChat:(id)arg1;
- (void)_handleDNDListChanged;
- (id)currentList;
- (void)dealloc;
- (id)groupHashForChat:(id)arg1;
- (id)groupHashForHandleIDs:(id)arg1;
- (id)init;
- (bool)isMutedChat:(id)arg1;
- (bool)isMutedChatIdentifier:(id)arg1 handleIDs:(id)arg2 style:(unsigned char)arg3 isSMS:(bool)arg4;
- (void)muteChat:(id)arg1 untilDate:(id)arg2;
- (void)muteChat:(id)arg1 untilDate:(id)arg2 syncToWatch:(bool)arg3;
- (void)muteChat:(id)arg1 usingIdentifier:(id)arg2 untilDate:(id)arg3 syncToWatch:(bool)arg4;
- (void)performMigrationIfNecessary;
- (void)setSyncManager:(id)arg1;
- (id)syncManager;
- (void)syncToWatchIncludingVersion:(bool)arg1;
- (id)unmuteDateForChat:(id)arg1;
- (id)unmuteDateForIdentifier:(id)arg1;

@end
