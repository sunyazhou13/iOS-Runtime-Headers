/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSMutableArray, NSString, SYStore;

@interface SYTransaction : NSObject <SYChangeTracking> {
    NSMutableArray *_changes;
    id _completion;
    NSDictionary *_contextInfo;
    NSDictionary *_idsOptions;
    SYStore *_store;
}

@property(retain) NSMutableArray * changes;
@property(copy) id completion;
@property(copy) NSDictionary * contextInfo;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSDictionary * idsOptions;
@property(retain) SYStore * store;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObject:(id)arg1 completion:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1;
- (id)changes;
- (void)commit;
- (void)commitBlocking:(BOOL)arg1 reportError:(id)arg2;
- (id)completion;
- (id)contextInfo;
- (void)deleteObject:(id)arg1 completion:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1;
- (id)idsOptions;
- (id)initWithStore:(id)arg1;
- (void)rollback;
- (void)setChanges:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setContextInfo:(id)arg1;
- (void)setIdsOptions:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)updateObject:(id)arg1 completion:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1;

@end
