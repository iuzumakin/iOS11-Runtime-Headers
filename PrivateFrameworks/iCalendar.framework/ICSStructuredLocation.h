/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSStructuredLocation : ICSProperty

@property (nonatomic, retain) NSString *abURLString;
@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *fmtype;
@property (nonatomic, retain) NSString *loctype;
@property (nonatomic, retain) NSData *mapKitHandle;
@property (nonatomic) double radius;
@property (nonatomic, retain) NSString *routing;
@property (nonatomic, retain) NSString *title;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)abURLString;
- (id)address;
- (id)displayName;
- (id)fmtype;
- (id)loctype;
- (id)mapKitHandle;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (double)radius;
- (id)routing;
- (void)setAbURLString:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFmtype:(id)arg1;
- (void)setLoctype:(id)arg1;
- (void)setMapKitHandle:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setRouting:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldObscureValue;
- (id)title;

@end
