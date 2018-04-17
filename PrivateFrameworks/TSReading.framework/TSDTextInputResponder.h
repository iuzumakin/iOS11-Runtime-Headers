/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTextInputResponder : UIResponder <UIResponderStandardEditActions, UITextInput> {
    TSDTextPosition * _cachedPosition;
    NSObject<TSDTextInput> * _editor;
    bool  _editorRespondsToRawArrowKeySelectors;
    int  _ignoreKeyboardInputCount;
    bool  _inDynamicOperation;
    <UITextInputDelegate> * _inputDelegate;
    bool  _isResigning;
    bool  _isSettingSelectedTextRange;
    UIResponder * _nextResponder;
    NSObject<TSDTextInput> * _pendingEditor;
    bool  _pendingEditorChange;
    bool  _pendingFirstResponderChange;
    <TSDTextInput> * _pendingFirstResponderObject;
    float  _preferredEndPosition;
    float  _preferredStartPosition;
    long long  _referenceOffset;
    TSDTextPosition * _referencePosition;
    int  _respondingToUITextInput;
    TSDTextInputTokenizer * _tokenizer;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <TSDTextInput> *editor;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic) float preferredEndPosition;
@property (nonatomic) float preferredStartPosition;
@property (getter=isResigning, nonatomic, readonly) bool resigning;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (bool)_disableAutomaticKeyboardUI;
- (void)acceptAutocorrection;
- (long long)autocorrectionType;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (void)beginIgnoringKeyboardInput;
- (id)beginningOfDocument;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)cancelDelayedResponderChange;
- (void)canvasWillRotate;
- (void)canvasWillScroll;
- (void)canvasWillZoom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)changeFirstResponderIfNecessary;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)clearEditorAndResignFirstResponder;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)customAction6:(id)arg1;
- (void)customAction7:(id)arg1;
- (void)customAction8:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)deleteBackward;
- (void)deleteForward;
- (id)editingTextRep;
- (id)editingTextReps;
- (id)editor;
- (void)editorDidChangeSelection:(id)arg1;
- (void)editorDidChangeSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)endIgnoringKeyboardInput;
- (id)endOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)forceDelayedResponderChange;
- (void)forwardInvocation:(id)arg1;
- (bool)hasText;
- (id)initWithNextResponder:(id)arg1;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1;
- (void)insertText:(id)arg1;
- (bool)isResigning;
- (bool)isSecureTextEntry;
- (id)keyCommands;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nextResponder;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)p_ICC;
- (bool)p_currentEditorIsNotOnMyCanvas;
- (bool)p_didEnterUITextInput;
- (void)p_didUndoRedoChangeNotification:(id)arg1;
- (void)p_editorDidInsertTextNotification:(id)arg1;
- (void)p_editorSelectionWasForciblyChangedNotification:(id)arg1;
- (void)p_editorWillClearSelectionNotification:(id)arg1;
- (void)p_editorWillHandleTapNotification:(id)arg1;
- (void)p_editorWillStyleTextNotification:(id)arg1;
- (void)p_finishDynamicOperation:(id)arg1;
- (bool)p_isExecutingUITextInput;
- (bool)p_requiresFirstResponderChangeForEditor:(id)arg1;
- (bool)p_resignFirstResponder;
- (void)p_setEditor:(id)arg1;
- (void)p_setFirstResponder:(id)arg1;
- (void)p_setFirstResponderAfterDelay;
- (void)p_setFirstResponderAndEditor:(id)arg1;
- (void)p_setFirstResponderAndEditorAfterDelay;
- (void)p_setSelectedTextRange:(id)arg1;
- (void)p_startDynamicOperation:(id)arg1;
- (void)p_textChanged;
- (void)p_unmarkText;
- (bool)p_wantRawArrowKeys;
- (void)p_willExitUITextInput;
- (void)p_willShowPopoverNotification:(id)arg1;
- (void)p_willUndoChangeNotification:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (float)preferredEndPosition;
- (float)preferredStartPosition;
- (id)rectsForRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (bool)resignFirstResponder;
- (void)resumeEditing;
- (long long)returnKeyType;
- (void)selectAll:(id)arg1;
- (id)selectedTextRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setEditor:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setPreferredEndPosition:(float)arg1;
- (void)setPreferredStartPosition:(float)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (id)superview;
- (void)teardown;
- (id)textInRange:(id)arg1;
- (id)textInputView;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)unmarkText;

// Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText

- (bool)p_accessibilityShouldCheckAncestorCanPerformAction:(SEL)arg1 withSender:(id)arg2;

@end
