/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibraryDDB.framework/MusicLibraryDDB
 */

@class NSString;

@interface MLEQPreset : NSObject {
    NSInteger _builtInPresetType;
    NSString *_localizedName;
    NSString *_name;
}

+ (id)eqPresetForBuiltInPresetType:(NSInteger)arg1;
+ (id)eqPresetForName:(id)arg1;

- (NSInteger)builtInPresetType;
- (void)dealloc;
- (id)initWithBuiltInPresetType:(NSInteger)arg1;
- (id)localizedName;
- (id)name;
- (NSInteger)typeForAVController;

@end