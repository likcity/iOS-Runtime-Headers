/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAGetSessionCertificate : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)getSessionCertificate;
+ (id)getSessionCertificateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
