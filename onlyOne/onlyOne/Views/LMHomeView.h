//
//  LMHomeView.h
//  onlyOne
//
//  Created by tarena on 16/2/15.
//  Copyright © 2016年 lim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMHomeModal.h"

@interface LMHomeView : UIView
//用传入的首页模型设置首页视图
- (void)setUpHomeViewWithHomeModal:(LMHomeModal *)homeModal animated:(BOOL)animate;

/**
 *  刷新视图内的子视图，主要是为了准备显示新的 item
 */
- (void)refreshSubviewsForNewItem;
@end
