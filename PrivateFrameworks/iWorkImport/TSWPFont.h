//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPFont : NSObject
{
    NSString *_fontName;
    NSString *_compatibilityName;
    NSString *_displayName;
    NSString *_familyName;
    unsigned long long _hash;
}

+ (_Bool)isKeyValueProxyLeafType;
+ (id)fontForStyles:(id *)arg1 count:(unsigned long long)arg2;
+ (id)fontWithName:(id)arg1 compatibilityName:(id)arg2;
+ (id)fontWithName:(id)arg1;
@property(copy, nonatomic) NSString *compatibilityName; // @synthesize compatibilityName=_compatibilityName;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, nonatomic) NSString *familyName;
@property(readonly, nonatomic) NSString *displayName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFontName:(id)arg1 compatibilityName:(id)arg2;
- (id)initWithFontName:(id)arg1;

@end

