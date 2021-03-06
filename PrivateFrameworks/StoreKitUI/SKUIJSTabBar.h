//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSTabBar-Protocol.h>

@class NSArray, NSMutableArray, SKUIApplicationController, SKUIJSTabBarItem;

@interface SKUIJSTabBar : IKJSObject <SKUIJSTabBar>
{
    SKUIApplicationController *_applicationController;
    NSMutableArray *_tabBarItems;
    SKUIJSTabBarItem *_transientTabBarItem;
}

- (void).cxx_destruct;
- (id)_selectedTabBarItemForIndex:(long long)arg1;
- (void)_reloadTabBarItemsWithPreludeMainThreadWork:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SKUIJSTabBarItem *transientTab;
@property(readonly, nonatomic) NSArray *tabs;
@property(retain, nonatomic) SKUIJSTabBarItem *selectedTab;
- (void)sendOnUpdate;
- (void)sendOnNeedsContentForTabBarItem:(id)arg1;
- (id)initWithAppContext:(id)arg1 controller:(id)arg2;

@end

