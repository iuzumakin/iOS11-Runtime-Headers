/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADMRAIDAction : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _calendarEventInfo;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumExpandedSize;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, retain) NSDictionary *calendarEventInfo;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumExpandedSize;
@property (nonatomic, readonly) bool opensNewsLink;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSURL *url;

+ (id)descriptionForActionType:(long long)arg1;
+ (bool)doesURLOpenNews:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)calendarEventInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumExpandedSize;
- (bool)opensNewsLink;
- (void)setCalendarEventInfo:(id)arg1;
- (void)setMaximumExpandedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (long long)type;
- (id)url;

@end
