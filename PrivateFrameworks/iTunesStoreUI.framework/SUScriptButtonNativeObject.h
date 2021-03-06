/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject {
    BOOL _loading;
    NSString *_styleString;
    NSString *_subtitle;
    NSString *_systemItemString;
}

@property(getter=isBackButton,readonly) BOOL backButton;
@property(readonly) int buttonType;
@property(retain) UIImage * image;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageInsets;
@property(getter=isLoading) BOOL loading;
@property(getter=isShowingConfirmation,readonly) BOOL showingConfirmation;
@property(readonly) NSString * styleString;
@property(retain) NSString * subtitle;
@property(readonly) NSString * systemItemString;
@property int tag;
@property(retain) NSString * title;

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (void)buttonAction:(id)arg1;
- (int)buttonType;
- (void)configureFromScriptButtonNativeObject:(id)arg1;
- (void)connectButtonAction;
- (void)dealloc;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (id)initWithSystemItemString:(id)arg1;
- (BOOL)isBackButton;
- (BOOL)isLoading;
- (BOOL)isShowingConfirmation;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setStyleFromString:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2;
- (id)styleString;
- (id)subtitle;
- (id)systemItemString;

@end
