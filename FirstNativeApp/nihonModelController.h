//
//  nihonModelController.h
//  FirstNativeApp
//
//  Created by kaz_mac on 12/03/13.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class nihonDataViewController;

@interface nihonModelController : NSObject <UIPageViewControllerDataSource>

- (nihonDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(nihonDataViewController *)viewController;

@end
