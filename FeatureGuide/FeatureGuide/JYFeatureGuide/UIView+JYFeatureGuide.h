//
//  UIView+JYFeatureGuide.h
//  FeatureGuide
//
//  Created by mengyang_guo on 2018/5/10.
//  Copyright © 2018年 mengyang_guo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JYFeatureGuide)

/**
 *  展示提示页面
 *
 *  @param featureItems 需要展示的UI元素
 *  @param keyName 提示的标识
 *  @param version 提示应该在什么版本出现版本
 */
//- (void)showWithFeatureItems:(NSArray<EAFeatureItem *> *)featureItems saveKeyName:(NSString *)keyName inVersion:(NSString *)version;

- (void)showWithFeatureView:(UIView *)featureView saveKeyName:(NSString *)keyName inVersion:(NSString *)version;

@end
