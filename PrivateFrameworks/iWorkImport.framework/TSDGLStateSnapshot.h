/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLStateSnapshot : NSObject <NSCopying> {
    struct { 
        int x; 
        int y; 
        int width; 
        int height; 
    unsigned int _currentGL_ACTIVE_TEXTURE;
    } _currentGL_VIEWPORT;
}

@property unsigned int currentGL_ACTIVE_TEXTURE;
@property struct { int x1; int x2; int x3; int x4; } currentGL_VIEWPORT;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentGL_ACTIVE_TEXTURE;
- (struct { int x1; int x2; int x3; int x4; })currentGL_VIEWPORT;
- (unsigned int)hash;
- (id)initWithCurrentGLState;
- (BOOL)isEqual:(id)arg1;
- (void)setCurrentGL_ACTIVE_TEXTURE:(unsigned int)arg1;
- (void)setCurrentGL_VIEWPORT:(struct { int x1; int x2; int x3; int x4; })arg1;
- (void)updateWithCurrentGLState;
- (void)updateWithGLStateSnapshot:(id)arg1;
- (void)validateCurrentState;
- (void)validateCurrentStateInGetter;
- (void)validateGL_ACTIVE_TEXTURE;
- (void)validateGL_VIEWPORT;

@end
