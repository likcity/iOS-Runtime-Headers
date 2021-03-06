/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UITextField;

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate> {
    id _completionHandler;
    UITextField *_passwordTextField;
    int _style;
}

@property(readonly) int style;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 routeName:(id)arg2 completionHandler:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (int)style;

@end
