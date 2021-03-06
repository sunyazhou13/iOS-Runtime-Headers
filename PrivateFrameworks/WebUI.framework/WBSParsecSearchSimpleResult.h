/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSArray, NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecSearchSimpleResult : WBSParsecSearchResult {
    NSString *_descriptionLeadInText;
    NSNumber *_descriptionMaximumNumberOfLines;
    BOOL _descriptionTextCanWrap;
    NSString *_footnote;
    BOOL _hasSingleLineDescriptionAndTitle;
    NSArray *_moreIconRepresentations;
    WBSParsecImageRepresentation *_titleGlyph;
    NSNumber *_titleMaximumNumberOfLines;
}

@property(readonly) NSString * descriptionLeadInText;
@property(readonly) NSNumber * descriptionMaximumNumberOfLines;
@property(readonly) BOOL descriptionTextCanWrap;
@property(readonly) NSString * footnote;
@property(readonly) BOOL hasMoreIcons;
@property(readonly) BOOL hasSingleLineDescriptionAndTitle;
@property(readonly) NSNumber * titleMaximumNumberOfLines;

- (void).cxx_destruct;
- (id)descriptionLeadInText;
- (id)descriptionMaximumNumberOfLines;
- (BOOL)descriptionTextCanWrap;
- (id)footnote;
- (BOOL)hasMoreIcons;
- (BOOL)hasSingleLineDescriptionAndTitle;
- (id)initWithDictionary:(id)arg1;
- (id)moreIconsWithSession:(id)arg1;
- (id)titleGlyphWithSession:(id)arg1;
- (id)titleMaximumNumberOfLines;

@end
