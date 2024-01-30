//
//  UIViewController+HBD.h
//  HBDNavigationBar
//
//  Created by Listen on 2018/3/23.
//

#import <UIKit/UIKit.h>

@interface UIViewController (HBD)

@property(nonatomic, assign) IBInspectable BOOL hbd_blackBarStyle;
@property(nonatomic, assign) UIBarStyle hbd_barStyle;
@property(nonatomic, strong) IBInspectable UIColor *hbd_barTintColor;
@property(nonatomic, strong) IBInspectable UIImage *hbd_barImage;
@property(nonatomic, strong) IBInspectable UIColor *hbd_tintColor;
@property(nonatomic, strong) NSDictionary *hbd_titleTextAttributes;
@property(nonatomic, assign) IBInspectable CGFloat hbd_barAlpha;
@property(nonatomic, assign) IBInspectable BOOL hbd_barHidden;
@property(nonatomic, assign) IBInspectable BOOL hbd_barShadowHidden;
@property(nonatomic, assign) IBInspectable BOOL hbd_backInteractive;
@property(nonatomic, assign) IBInspectable BOOL hbd_swipeBackEnabled;
@property(nonatomic, assign) IBInspectable BOOL hbd_clickBackEnabled;
@property(nonatomic, assign) IBInspectable BOOL hbd_splitNavigationBarTransition;

// 期望导航栏真实隐藏 默认NO 需要在viewWillAppear中或之前设置改属性
// 设置后不会立马隐藏，会在当前页面push的代理navigationController:willShowViewController:animated:中改变，
// navigationController:willShowViewController:animated:在当前vc的viewWillAppear之后调用
@property(nonatomic, assign) IBInspectable BOOL hbd_prefersBarRealHidden;

// computed
@property(nonatomic, assign, readonly) CGFloat hbd_computedBarShadowAlpha;
@property(nonatomic, strong, readonly) UIColor *hbd_computedBarTintColor;
@property(nonatomic, strong, readonly) UIImage *hbd_computedBarImage;

// 这个属性是内部使用的
@property(nonatomic, assign) BOOL hbd_extendedLayoutDidSet;
@property(nonatomic, assign, readonly) BOOL hbd_isBarRealHiddenHasAssociatedObject; // 是否使用hbd_barRealHidden设置了导航栏真实隐藏（hbd_barRealHidden是否有关联对象）

- (void)hbd_setNeedsUpdateNavigationBar;

@end
