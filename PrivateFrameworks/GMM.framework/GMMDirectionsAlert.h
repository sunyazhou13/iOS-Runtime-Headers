/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;



@interface GMMDirectionsAlert : PBCodable 
{
    NSString *_headline;
    NSString *_text;
    NSString *_url;
}

@property(readonly) BOOL hasHeadline;
@property(readonly) BOOL hasText;
@property(readonly) BOOL hasUrl;
@property(retain) NSString *url;
@property(retain) NSString *text;
@property(retain) NSString *headline;


- (id)url;
- (BOOL)readFrom:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)hasText;
- (id)description;
- (id)init;
- (void)setText:(id)arg1;
- (id)text;
- (void)dealloc;
- (BOOL)hasUrl;
- (BOOL)hasHeadline;
- (id)headline;
- (void)setHeadline:(id)arg1;
- (void)writeTo:(id)arg1;

@end