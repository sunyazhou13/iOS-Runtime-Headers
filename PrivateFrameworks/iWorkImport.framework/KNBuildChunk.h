/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNBuild, KNSlide, NSArray, NSSet, NSString, TSPLazyReference;

@interface KNBuildChunk : TSPContainedObject <KNInspectableAnimation> {
    BOOL mAutomatic;
    TSPLazyReference *mBuildReference;
    unsigned int mCachedActiveIndexOnSlide;
    KNBuild *mCachedBuild;
    unsigned int mCachedIndexOnSlide;
    double mDelay;
    double mDuration;
    unsigned int mIndexInBuild;
    BOOL mNeedsAutomaticFromBuildAttributes;
    BOOL mNeedsDelayFromBuildAttributes;
    BOOL mNeedsDurationFromBuildAttributes;
    BOOL mNeedsReferentFromBuildAttributes;
    unsigned int mReferent;
}

@property(getter=isActive,readonly) BOOL active;
@property(readonly) unsigned int activeIndexOnSlide;
@property(getter=isAutomatic) BOOL automatic;
@property(getter=isAutomaticWithPreviousChunk,readonly) BOOL automaticWithPreviousChunk;
@property(getter=isAutomaticWithPreviousChunkOnSameDrawable,readonly) BOOL automaticWithPreviousChunkOnSameDrawable;
@property(readonly) NSArray * availableEventTriggers;
@property(readonly) KNBuild * build;
@property(readonly) BOOL canEditAnimations;
@property double delay;
@property(readonly) unsigned int deliveryGroupIndex;
@property double duration;
@property(readonly) unsigned int eventTrigger;
@property(readonly) BOOL hasComplement;
@property(readonly) unsigned int indexInBuild;
@property(readonly) unsigned int indexOnSlide;
@property(readonly) NSSet * inspectableAttributes;
@property(readonly) BOOL isFirstInBuild;
@property(readonly) BOOL isFirstInDeliveryGroup;
@property(readonly) BOOL isFirstOnSlide;
@property unsigned int referent;
@property(readonly) KNSlide * slide;
@property(readonly) BOOL supportsWithStart;
@property(readonly) NSString * title;

- (unsigned int)activeIndexOnSlide;
- (id)availableEventTriggers;
- (id)build;
- (BOOL)canBuildWithChunk:(id)arg1;
- (BOOL)canEditAnimations;
- (void)dealloc;
- (double)delay;
- (unsigned int)deliveryGroupIndex;
- (id)description;
- (void)didLoadBuild:(id)arg1;
- (double)duration;
- (unsigned int)eventTrigger;
- (BOOL)hasComplement;
- (unsigned int)indexInBuild;
- (unsigned int)indexOnSlide;
- (id)initWithArchive:(const struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; double x4; double x5; unsigned int x6; boolx7; boolx8; int x9; unsigned int x10[1]; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithIndex:(unsigned int)arg1 inBuild:(id)arg2 copyingAttributesFromChunk:(id)arg3;
- (id)initWithIndex:(unsigned int)arg1 inBuild:(id)arg2 referent:(unsigned int)arg3 copyingRemainingAttributesFromChunk:(id)arg4;
- (id)initWithIndex:(unsigned int)arg1 inBuild:(id)arg2;
- (id)inspectableAttributes;
- (BOOL)isActive;
- (BOOL)isAutomatic;
- (BOOL)isAutomaticWithPreviousChunk;
- (BOOL)isAutomaticWithPreviousChunkOnSameDrawable;
- (BOOL)isComplementOfBuildChunk:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFirstInBuild;
- (BOOL)isFirstInDeliveryGroup;
- (BOOL)isFirstOnSlide;
- (id)nextChunkOnSlide;
- (BOOL)p_canBuildWithChunk:(id)arg1 checkOtherChunksBuildingWithThisChunk:(BOOL)arg2;
- (id)p_chunksBuildingWithThisChunk;
- (BOOL)p_chunksBuildingWithThisChunkCanBuildWithChunk:(id)arg1;
- (void)p_invalidateSlideCaches;
- (id)p_previousChunkOnSlide;
- (void)p_setDelayFromBuildAttributes:(id)arg1 withReferent:(unsigned int)arg2 automatic:(BOOL)arg3;
- (void)p_setDurationFromBuildAttributes:(id)arg1;
- (id)p_stringForReferent:(unsigned int)arg1;
- (unsigned int)referent;
- (void)saveToArchive:(struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; double x4; double x5; unsigned int x6; boolx7; boolx8; int x9; unsigned int x10[1]; }*)arg1 archiver:(id)arg2;
- (void)setAutomatic:(BOOL)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setReferent:(unsigned int)arg1;
- (id)slide;
- (BOOL)supportsWithStart;
- (id)title;

@end
