/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarEvent : SADomainObject

@property (nonatomic, copy) NSArray *alerts;
@property (nonatomic) bool allDay;
@property (nonatomic, copy) NSArray *attendees;
@property (nonatomic, copy) NSURL *calendarId;
@property (nonatomic, copy) NSURL *calendarPunchoutURI;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSNumber *includeRecurrences;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, copy) NSNumber *readOnly;
@property (nonatomic, copy) NSArray *recurrences;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *timeZoneId;
@property (nonatomic, copy) NSString *title;

+ (id)event;
+ (id)eventWithDictionary:(id)arg1 context:(id)arg2;

- (id)alerts;
- (bool)allDay;
- (id)attendees;
- (id)calendarId;
- (id)calendarPunchoutURI;
- (id)encodedClassName;
- (id)endDate;
- (id)groupIdentifier;
- (id)includeRecurrences;
- (id)location;
- (id)notes;
- (id)readOnly;
- (id)recurrences;
- (void)setAlerts:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendarId:(id)arg1;
- (void)setCalendarPunchoutURI:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setIncludeRecurrences:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setReadOnly:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)timeZoneId;
- (id)title;

@end
