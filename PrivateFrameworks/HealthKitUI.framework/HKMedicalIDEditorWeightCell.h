/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSMassFormatter, NSNumber, NSString, UIPickerView;

@interface HKMedicalIDEditorWeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSNumber *_kilogramValue;
    int _localWeightUnit;
    NSMassFormatter *_massFormatter;
    UIPickerView *_picker;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSNumber * kilogramValue;
@property(readonly) Class superclass;

+ (double)defaultKilogramValue;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_formattedValueForKilograms:(id)arg1;
- (void)_hidePicker;
- (void)_localeDidChange:(id)arg1;
- (void)_showPicker;
- (void)beginEditing;
- (void)commitEditing;
- (void)dealloc;
- (id)formattedValue;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)kilogramValue;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)setKilogramValue:(id)arg1;

@end
