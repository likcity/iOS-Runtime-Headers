/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_queue>, <CBXpcConnectionDelegate>, NSObject<OS_xpc_object>;

@interface CBXpcConnection : NSObject {
    <CBXpcConnectionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    int _type;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_semaphore> *_xpcSendBarrier;
}

@property <CBXpcConnectionDelegate> * delegate;

- (void)checkIn:(BOOL)arg1;
- (void)checkOut;
- (id)createXpcArrayWithNSArray:(id)arg1;
- (id)createXpcDictionaryWithNSDictionary:(id)arg1;
- (id)createXpcObjectWithNSObject:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disconnect;
- (void)handleConnectionEvent:(id)arg1;
- (void)handleMsg:(int)arg1 arguments:(id)arg2;
- (void)handleReset;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 sessionType:(int)arg3;
- (id)nsArrayWithXpcArray:(id)arg1;
- (id)nsDictionaryFromXpcDictionary:(id)arg1;
- (id)nsObjectWithXpcObject:(id)arg1;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (void)setDelegate:(id)arg1;

@end