/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerActionViewInterfaceAction : UIInterfaceAction <UIAlertActionMutablePropertyObservering> {
    UIAlertAction * _underlyingAlertAction;
    bool  _valid;
}

@property (nonatomic, readonly) _UIAlertControllerActionView *alertControllerActionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIAlertAction *underlyingAlertAction;
@property (nonatomic, readonly) bool valid;

+ (id)actionWithAlertControllerActionView:(id)arg1;

- (void).cxx_destruct;
- (void)_action:(id)arg1 changedToBePreferred:(bool)arg2;
- (void)_action:(id)arg1 changedToChecked:(bool)arg2;
- (void)_action:(id)arg1 changedToEnabled:(bool)arg2;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_initializeStateFromUnderlyingAlertAction;
- (long long)_typeForDeterminingViewRepresentation;
- (id)alertControllerActionView;
- (id)classificationTitle;
- (void)dealloc;
- (void)invalidate;
- (id)leadingImage;
- (long long)type;
- (id)underlyingAlertAction;
- (bool)valid;

@end
