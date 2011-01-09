/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;



@interface ISDialogTextField : NSObject 
{
    NSInteger _keyboardType;
    BOOL _secure;
    NSString *_title;
    NSString *_value;
}

@property(retain) NSString *value; /* unknown property attribute: V_value */
@property(retain) NSString *title; /* unknown property attribute: V_title */
@property(getter=isSecure) BOOL secure; /* unknown property attribute: V_secure */
@property NSInteger keyboardType; /* unknown property attribute: V_keyboardType */

+ (id)textFieldWithTitle:(id)arg1;

- (void)dealloc;
- (id)value;
- (void)setValue:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isSecure;
- (void)setSecure:(BOOL)arg1;
- (NSInteger)keyboardType;
- (void)setKeyboardType:(NSInteger)arg1;

@end