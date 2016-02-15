//
//  UIImage+Scale.h
//  ChildrenLocation
//
//  Created by szalarm on 15/9/1.
//  Copyright (c) 2015年 szalarm. All rights reserved.
//

//#import <UIKit/UIKit.h>
#import <UIKit/UIImage.h>

@interface UIImage (Scale)

//-(UIImage *) TransformtoSize:(CGSize)Newsize;
- (UIImage *)scaleToSize:(UIImage *)img size:(CGSize)newsize;
+(UIImage *)scaleToSize:(UIImage *)img size:(CGSize)newsize;
//改变自己
//- (void)scaleToSize:(CGSize)newsize;
//-(id)initWithSize:(CGSize )size image:(NSString *) pImagePath;
@end
