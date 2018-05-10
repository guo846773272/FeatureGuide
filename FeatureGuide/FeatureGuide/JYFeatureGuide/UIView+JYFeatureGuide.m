//
//  UIView+JYFeatureGuide.m
//  FeatureGuide
//
//  Created by mengyang_guo on 2018/5/10.
//  Copyright © 2018年 mengyang_guo. All rights reserved.
//

#import "UIView+JYFeatureGuide.h"

@implementation UIView (JYFeatureGuide)

- (void)showWithFeatureView:(UIView *)featureView saveKeyName:(NSString *)keyName inVersion:(NSString *)version {
    CGRect rect = [featureView convertRect:featureView.frame toView:self];
    NSLog(@"%@", NSStringFromCGRect(rect));
}

@end
