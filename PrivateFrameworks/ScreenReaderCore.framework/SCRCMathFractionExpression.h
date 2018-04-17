/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathFractionExpression : SCRCMathExpression {
    SCRCMathExpression * _denominator;
    double  _lineThickness;
    SCRCMathExpression * _numerator;
    SCRCMathExpression * _operator;
}

@property (nonatomic, retain) SCRCMathExpression *denominator;
@property (nonatomic) double lineThickness;
@property (nonatomic, retain) SCRCMathExpression *numerator;
@property (nonatomic, retain) SCRCMathExpression *operator;

- (void).cxx_destruct;
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(bool)arg1 orMixedNumberFraction:(bool)arg2 withNumberOfOuterRadicals:(unsigned long long)arg3 treePosition:(id)arg4;
- (id)_speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2 asBinomialCoefficient:(bool)arg3;
- (id)_speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 asBinomialCoefficient:(bool)arg4;
- (id)denominator;
- (id)description;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (unsigned long long)fractionLevel;
- (id)initWithDictionary:(id)arg1;
- (bool)isSimpleNumericalFraction;
- (bool)isUnlinedFraction;
- (id)latexMathModeDescription;
- (double)lineThickness;
- (id)mathMLString;
- (id)numerator;
- (id)operator;
- (void)setDenominator:(id)arg1;
- (void)setLineThickness:(double)arg1;
- (void)setNumerator:(id)arg1;
- (void)setOperator:(id)arg1;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;

@end
