//
//  spriter_with_pubnubAppDelegate.h
//  spriter_with_pubnub
//

#import <UIKit/UIKit.h>

@class spriter_with_pubnubViewController;

@interface spriter_with_pubnubAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    spriter_with_pubnubViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet spriter_with_pubnubViewController *viewController;

@end

