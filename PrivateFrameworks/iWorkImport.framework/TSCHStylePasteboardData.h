/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSCHChartStyle, TSCHLegendStyle, TSCHPropertyValueStorageContainer, TSWPParagraphStyle, TSWPShapeStyle;

@interface TSCHStylePasteboardData : TSSStyle {
    BOOL mEntireChart;
    TSWPParagraphStyle *mInteropParagraphStyle;
    TSWPShapeStyle *mInteropShapeStyle;
    TSCHPropertyValueStorageContainer *mStyleNetwork;
}

@property(copy) NSArray * categoryAxisStyles;
@property(retain) TSCHChartStyle * chartStyle;
@property BOOL entireChart;
@property(retain) TSWPParagraphStyle * interopParagraphStyle;
@property(retain) TSWPShapeStyle * interopShapeStyle;
@property(retain) TSCHLegendStyle * legendStyle;
@property(copy) NSArray * paragraphStyles;
@property(copy) NSArray * seriesStyles;
@property(copy) NSArray * valueAxisStyles;

+ (id)properties;

- (id)allStyles;
- (id)categoryAxisStyles;
- (id)chartStyle;
- (id)chartStyleStateWithMapper:(id)arg1;
- (void)dealloc;
- (BOOL)entireChart;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (id)initWithContext:(id)arg1;
- (id)interopParagraphStyle;
- (id)interopShapeStyle;
- (id)legendStyle;
- (id)paragraphStyles;
- (id)pasteboardDescription;
- (void)saveToArchiver:(id)arg1;
- (id)seriesStyles;
- (void)setCategoryAxisStyles:(id)arg1;
- (void)setChartStyle:(id)arg1;
- (void)setEntireChart:(BOOL)arg1;
- (void)setInteropParagraphStyle:(id)arg1;
- (void)setInteropShapeStyle:(id)arg1;
- (void)setLegendStyle:(id)arg1;
- (void)setParagraphStyles:(id)arg1;
- (void)setSeriesStyles:(id)arg1;
- (void)setValueAxisStyles:(id)arg1;
- (id)stylesheet;
- (id)valueAxisStyles;

@end