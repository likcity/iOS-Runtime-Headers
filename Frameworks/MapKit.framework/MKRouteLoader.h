/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface MKRouteLoader : NSObject 
{
    struct __CFArray { } *_tiles;
    struct __CFDictionary { } *_loadingTiles;

  /* Error parsing encoded ivar type info: ^{MKTileRequester=^^?i^{Connection}*BBB^{TileResponse}^{__CFRunLoop}^{__CFRunLoopTimer}I@^{__CFSet}} */
    struct MKTileRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; void*x7; struct TileResponse {} *x8; struct __CFRunLoop {} *x9; struct __CFRunLoopTimer {} *x10; NSUInteger x11; id x12; struct __CFSet {} *x13; } *_requester;

    id _delegate;
    NSUInteger _loadingCount;
    BOOL _isLoading;
}


- (id)initWithTiles:(struct __CFArray { }*)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_setLoading:(BOOL)arg1;
- (void)startLoading;
- (void)_checkLoading;
- (void)stopLoading;
- (void)tileRequesterProgress:(struct MKTileRequester { int (**x1)(); NSInteger x2; struct Connection {} *x3; char *x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; void*x7; struct TileResponse {} *x8; struct __CFRunLoop {} *x9; struct __CFRunLoopTimer {} *x10; NSUInteger x11; id x12; struct __CFSet {} *x13; }*)arg1;
     /* Encoded args for previous method: v12@0:4^{MKTileRequester=^^?i^{Connection}*BBB^{TileResponse}^{__CFRunLoop}^{__CFRunLoopTimer}I@^{__CFSet}}8 */

- (void)tileRequesterFailed:(id)arg1;

@end