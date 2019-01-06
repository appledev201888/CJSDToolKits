
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CJSToolKitsManage : NSObject

+ (CJSToolKitsManage *)sharedManager;

- (void)CJSToolKitsbegin:(UIView *)view;

- (void)CJSToolKitsend:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
