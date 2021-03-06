/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@class APDDataManager, APDNavigationItem, APDURLSession, UIColor, UIImageView, UILabel;

@interface APDNavigationItemCell : UITableViewCell {
    BOOL _RTL;
    UIImageView *_accessoryImageView;
    UIImageView *_arrowImageView;
    BOOL _closed;
    APDDataManager *_dataManager;
    APDURLSession *_imageUrlSession;
    int _indentLevel;
    BOOL _indentWithSectionImage;
    UILabel *_nameLabel;
    APDNavigationItem *_navigationItem;
    UIImageView *_sectionImageView;
    BOOL _shouldIndent;
    BOOL _showFulLSeparator;
}

@property(getter=isRTL) BOOL RTL;
@property(retain) UIImageView * accessoryImageView;
@property(retain) UIImageView * arrowImageView;
@property(retain) UIColor * cellHighlightedColor;
@property BOOL closed;
@property(retain) APDDataManager * dataManager;
@property BOOL indentWithSectionImage;
@property(retain) UILabel * nameLabel;
@property(retain) APDNavigationItem * navigationItem;
@property(retain) UIImageView * sectionImageView;
@property BOOL shouldIndent;
@property BOOL showFulLSeparator;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessoryImageView;
- (id)arrowImageView;
- (void)cancelSectionImageRequest;
- (id)cellHighlightedColor;
- (BOOL)closed;
- (id)dataManager;
- (void)dealloc;
- (BOOL)indentWithSectionImage;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isRTL;
- (void)layoutSubviews;
- (id)nameLabel;
- (id)navigationItem;
- (void)prepareForReuse;
- (id)sectionImageView;
- (void)setAccessoryImageView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setCellHighlightedColor:(id)arg1;
- (void)setClosed:(BOOL)arg1;
- (void)setDataManager:(id)arg1;
- (void)setIndentWithSectionImage:(BOOL)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNavigationItem:(id)arg1;
- (void)setRTL:(BOOL)arg1;
- (void)setSectionImageView:(id)arg1;
- (void)setShouldIdent:(BOOL)arg1;
- (void)setShouldIndent:(BOOL)arg1;
- (void)setShowFulLSeparator:(BOOL)arg1;
- (BOOL)shouldIndent;
- (BOOL)showFulLSeparator;
- (void)toggle;
- (void)updateFonts;
- (void)updateToggleImageAnimated:(BOOL)arg1;

@end
