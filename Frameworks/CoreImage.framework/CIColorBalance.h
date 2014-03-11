/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIColor, CIImage, NSNumber;

@interface CIColorBalance : CIFilter {
    CIColor *inputColor;
    NSNumber *inputDamping;
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
}

@property(retain) CIColor * inputColor;
@property(retain) NSNumber * inputDamping;
@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputStrength;
@property(retain) NSNumber * inputWarmth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputColor;
- (id)inputDamping;
- (id)inputImage;
- (id)inputStrength;
- (id)inputWarmth;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputColor:(id)arg1;
- (void)setInputDamping:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWarmth:(id)arg1;

@end