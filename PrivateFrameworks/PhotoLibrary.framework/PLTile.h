/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTile : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct __IOSurface { } *_decodedSurface;
    } _imageRect;
    id _tileId;
    BOOL _visible;
}

- (void)dealloc;
- (struct __IOSurface { }*)decodedSurface;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRect;
- (void)setDecodedSurface:(struct __IOSurface { }*)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTileId:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (id)tileId;
- (BOOL)visible;

@end
