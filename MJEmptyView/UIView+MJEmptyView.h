//
//  UIView+MJEmptyView.h
//  MJEmptyView
//
//  Created by YXCZ on 17/1/11.
//  Copyright © 2017年 林民敬. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MJErrorPageView , MJBlankPageView;
@interface UIView (MJEmptyView)

//MJErrorPageView
@property (nonatomic,strong) MJErrorPageView * errorPageView;
- (void)configReloadAction:(void(^)())block;
- (void)showErrorPageView;
- (void)hideErrorPageView;

//OSCBlankPageView
@property (nonatomic,strong) MJBlankPageView* blankPageView;
- (void)showBlankPageView;
- (void)hideBlankPageView;

@end

#pragma mark --- MJErrorPageView
@interface MJErrorPageView : UIView
@property (nonatomic,copy) void(^didClickReloadBlock)();
@end

#pragma mark --- MJBlankPageView
@interface MJBlankPageView : UIView
@end
