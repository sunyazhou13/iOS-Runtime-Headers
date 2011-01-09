/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSMachPort : NSPort 
{
    id _delegate;
    NSUInteger _flags;
    NSUInteger _machPort;
    NSUInteger _reserved;
}

+ (void)resetAllPorts;
+ (id)portWithMachPort:(NSUInteger)arg1;
+ (id)portWithMachPort:(NSUInteger)arg1 options:(NSUInteger)arg2;
+ (void)_fixNSMachPortLeak;
+ (id)port;

- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long)_cfTypeID;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (NSUInteger)machPort;
- (id)initWithMachPort:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (id)initWithMachPort:(NSUInteger)arg1;
- (void)finalize;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isMemberOfClass:(Class)arg1;
- (NSUInteger)retainCount;
- (BOOL)isValid;
- (void)invalidate;
- (id)init;
- (oneway void)release;
- (id)retain;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end