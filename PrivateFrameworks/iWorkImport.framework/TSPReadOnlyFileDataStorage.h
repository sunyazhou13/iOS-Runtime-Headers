/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL;

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage {
    NSURL *_URL;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (void)performReadWithAccessor:(id)arg1;
- (BOOL)readOnly;
- (BOOL)writeData:(id)arg1 toPackageWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id*)arg4 didCopyDataToPackage:(BOOL*)arg5 isMissingData:(BOOL*)arg6;

@end
