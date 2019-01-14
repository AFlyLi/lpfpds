//
//  UIColor+HexColor.h
//  LifeOfBeans
//
//  Created by mac on 2018/8/13.
//  Copyright © 2018年 LINGWO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexColor)
// 颜色转换：iOS中（以#开头）十六进制的颜色转换为UIColor(RGB)
+ (UIColor *) colorWithHexString: (NSString *)color;
@end
