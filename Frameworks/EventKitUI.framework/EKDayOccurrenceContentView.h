/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSIndexSet, NSMutableAttributedString, NSString, UIColor;

@interface EKDayOccurrenceContentView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL _allDay;
    BOOL _allDayDrawingStyle;
    NSMutableAttributedString *_attributedContentString;
    BOOL _birthday;
    BOOL _cancelled;
    UIColor *_color;
    BOOL _declined;
    BOOL _facebook;
    } _fullTextRect;
    BOOL _hideText;
    NSString *_location;
    BOOL _needsReply;
    int _occurrenceBackgroundStyle;
    UIColor *_secondaryTextColor;
    BOOL _selected;
    UIColor *_statusTextColor;
    BOOL _tentative;
    UIColor *_textBackgroundColor;
    float _textEndY;
    NSString *_title;
    } _titleEndPoint;
    NSIndexSet *_titleMetrics;
    } _titleRect;
    UIColor *_titleTextColor;
    BOOL _usesSmallText;
}

@property(getter=isAllDay) BOOL allDay;
@property(getter=isAllDayDrawingStyle) BOOL allDayDrawingStyle;
@property(getter=isBirthday) BOOL birthday;
@property(getter=isCancelled) BOOL cancelled;
@property(retain) UIColor * color;
@property(getter=isDeclined) BOOL declined;
@property(getter=isFacebook) BOOL facebook;
@property BOOL hideText;
@property(copy) NSString * location;
@property BOOL needsReply;
@property int occurrenceBackgroundStyle;
@property(retain) UIColor * secondaryTextColor;
@property BOOL selected;
@property(getter=isTentative) BOOL tentative;
@property(retain) UIColor * textBackgroundColor;
@property(copy) NSString * title;
@property(retain) UIColor * titleTextColor;
@property BOOL usesSmallText;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_invalidateMetrics;
- (id)_primaryTextFont;
- (id)_secondaryText;
- (id)_secondaryTextFont;
- (id)_statusText;
- (id)_statusTextFont;
- (id)attributedContentString;
- (id)color;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasIcon;
- (BOOL)hideText;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAllDay;
- (BOOL)isAllDayDrawingStyle;
- (BOOL)isBirthday;
- (BOOL)isCancelled;
- (BOOL)isDeclined;
- (BOOL)isFacebook;
- (BOOL)isTentative;
- (id)location;
- (float)minimumNaturalHeightAllText;
- (float)minimumNaturalHeightForPrimaryText;
- (BOOL)needsReply;
- (int)occurrenceBackgroundStyle;
- (id)secondaryTextColor;
- (BOOL)selected;
- (void)setAllDay:(BOOL)arg1;
- (void)setAllDayDrawingStyle:(BOOL)arg1;
- (void)setBirthday:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (void)setDeclined:(BOOL)arg1;
- (void)setFacebook:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHideText:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsReply:(BOOL)arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setUsesSmallText:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)statusTextColor;
- (id)strikethroughColor;
- (id)stringDrawingContext;
- (id)textBackgroundColor;
- (float)textNaturalWidth;
- (id)title;
- (id)titleTextColor;
- (BOOL)usesSmallText;

@end