//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUPlainTextCellConfiguration : SUItemCellConfiguration
{
}

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (_Bool)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)init;

@end

