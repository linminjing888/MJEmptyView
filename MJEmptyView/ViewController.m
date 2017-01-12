//
//  ViewController.m
//  MJEmptyView
//
//  Created by YXCZ on 17/1/11.
//  Copyright © 2017年 林民敬. All rights reserved.
//

#import "ViewController.h"
#import "UIView+MJEmptyView.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //如果无网络
    [self.view showErrorPageView];
    [self.view configReloadAction:^{
        NSLog(@"1111");
    }];
    
    //空数据
//    [self.view showBlankPageView];
    //隐藏
//    [self.view hideBlankPageView];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
