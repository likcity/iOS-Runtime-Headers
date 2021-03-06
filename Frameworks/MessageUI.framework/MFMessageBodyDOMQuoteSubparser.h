/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MFMessageBodyElement_Private>, DOMRange;

@interface MFMessageBodyDOMQuoteSubparser : MFMessageBodySubparser {
    <MFMessageBodyElement_Private> *_dedendedAttributionLastElement;
    <MFMessageBodyElement_Private> *_dedentedAttributionLastTextElement;
    id _foundDedentedAttributionRangeBlock;
    id _foundTrailingEmptyQuoteRangeBlock;
    unsigned int _trailingEmptyQuoteLevel;
    DOMRange *_trailingEmptyQuoteRange;
}

- (void)_enumerateSurroundableRangesInRange:(id)arg1 withBlock:(id)arg2;
- (void)copyBlocks;
- (void)dealloc;
- (BOOL)doesRange:(id)arg1 containAnyElementWithTagName:(id)arg2;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)setFoundDedentedAttributionRangeBlock:(id)arg1;
- (void)setFoundTrailingEmptyQuoteRangeBlock:(id)arg1;

@end
