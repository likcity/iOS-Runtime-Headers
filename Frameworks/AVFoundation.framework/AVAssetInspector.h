/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetInspector : NSObject <NSCopying> {
}

@property(readonly) NSArray *alternateTrackGroups;
@property(readonly) NSArray *availableMetadataFormats;
@property(readonly) NSArray *commonMetadata;
@property(readonly) NSString *lyrics;
@property(readonly) NSDictionary *trackReferences;
@property(readonly) ? duration;
@property(readonly) CGSize naturalSize;
@property(readonly) NSInteger naturalTimeScale;
@property(readonly) float preferredRate;
@property(readonly) CGAffineTransform preferredTransform;
@property(readonly) float preferredVolume;
@property(readonly) BOOL providesPreciseDurationAndTiming;
@property(readonly) NSInteger trackCount;

- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })_CMTimeForProperty:(struct __CFString { }*)arg1;
- (long)_SInt32ForProperty:(struct __CFString { }*)arg1;
- (id)_arrayForProperty:(struct __CFString { }*)arg1;
- (unsigned char)_booleanForProperty:(struct __CFString { }*)arg1;
- (id)_dictionaryForProperty:(struct __CFString { }*)arg1;
- (float)_floatForProperty:(struct __CFString { }*)arg1;
- (void*)_propertyAccessor:(struct __CFString { }*)arg1;
- (id)_stringForProperty:(struct __CFString { }*)arg1;
- (id)_tollFreeBridgedObjectForProperty:(struct __CFString { }*)arg1;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })duration;
- (id)lyrics;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (NSInteger)naturalTimeScale;
- (float)preferredRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (BOOL)providesPreciseDurationAndTiming;
- (long)trackCount;
- (id)trackReferences;

@end