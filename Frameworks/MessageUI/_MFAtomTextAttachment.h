//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@class MFComposeRecipient, MFModernComposeRecipientAtom;

@interface _MFAtomTextAttachment : NSTextAttachment
{
    _Bool _isPlaceholder;
    MFModernComposeRecipientAtom *_atomView;
}

@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(retain, nonatomic) MFModernComposeRecipientAtom *atomView; // @synthesize atomView=_atomView;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)attributedStringWithBaseAttributes:(id)arg1;
@property(readonly, nonatomic) MFComposeRecipient *recipient;
- (id)initWithAtomView:(id)arg1;
- (void)dealloc;

@end
