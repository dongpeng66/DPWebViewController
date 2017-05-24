//
//  DPWkWebViewController.h
//
//  Created by dp on 17/3/20.
//  Copyright © 2017年 DP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DPWkWebViewController : UIViewController
/**
 加载纯外部链接网页
 
 @param string URL地址
 */
- (void)loadWebURLSring:(NSString *)string;

/**
 加载纯外部链接网页
 
 @param string URL地址
 */
- (void)loadWebUrl:(NSURL *)url;
@end
