/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDStylesCollection, EDFontsCollection, EDTableStylesCollection, EDColorsCollection, EDLinksCollection, EDCollection, EDContentFormatsCollection;



@interface EDResources : NSObject 
{
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}


- (id)border;
- (id)initWithStringOptimization:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: @12@0:4B8 */

- (id)contentFormats;
- (id)alignmentInfos;
- (void)setThemes:(id)arg1;
- (id)tableStyles;
- (id)fonts;
- (id)differentialStyles;
- (id)themes;
- (id)fills;
- (id)styles;
- (id)borders;
- (id)names;
- (id)strings;
- (void)setColors:(id)arg1;
- (id)colors;
- (id)links;
- (void)dealloc;

@end