/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMPixelPoint, GMMPolygon, GMMEfficientMapPoint, GMMMapPoint, GMMPolyLine;



@interface GMMGeometry : PBCodable 
{
    NSInteger _type;
    GMMMapPoint *_mapPoint;
    GMMPolyLine *_polyLine;
    GMMPolygon *_polygon;
    GMMPixelPoint *_pixelPoint;
    GMMEfficientMapPoint *_efficientMapPoint;
}

@property(readonly) BOOL hasCoordinate;
@property(readonly) ? coordinate;
@property(readonly) NSInteger latitudeE6;
@property(readonly) NSInteger longitudeE6;
@property(readonly) BOOL hasMapPoint;
@property(readonly) BOOL hasPolyLine;
@property(readonly) BOOL hasPolygon;
@property(readonly) BOOL hasPixelPoint;
@property(readonly) BOOL hasEfficientMapPoint;
@property(retain) GMMEfficientMapPoint *efficientMapPoint;
@property(retain) GMMPixelPoint *pixelPoint;
@property(retain) GMMPolygon *polygon;
@property(retain) GMMPolyLine *polyLine;
@property(retain) GMMMapPoint *mapPoint;
@property NSInteger type;


- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)description;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setEfficientMapPoint:(id)arg1;
- (void)setPixelPoint:(id)arg1;
- (void)setPolygon:(id)arg1;
- (void)setPolyLine:(id)arg1;
- (void)setMapPoint:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasMapPoint;
- (id)mapPoint;
- (BOOL)hasPolyLine;
- (id)polyLine;
- (BOOL)hasPolygon;
- (id)polygon;
- (BOOL)hasPixelPoint;
- (id)pixelPoint;
- (BOOL)hasEfficientMapPoint;
- (id)efficientMapPoint;
- (struct { double x1; double x2; })coordinate;
- (id)initWithOldMapPoint:(struct MapPoint { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; }*)arg1;
- (BOOL)hasCoordinate;
- (NSInteger)latitudeE6;
- (NSInteger)longitudeE6;
- (id)pixelPointGeometry;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;

@end