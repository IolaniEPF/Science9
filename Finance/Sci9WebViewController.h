//
//  Sci9WebViewController.h
//  Science 9
//
//  Created by Blake Tsuzaki on 7/21/13.
//  Copyright (c) 2013 'Iolani School. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Sci9WebViewController : UIViewController <UIWebViewDelegate>{
    UIWebView* mWebView;
    UIToolbar* mToolbar;
    UIBarButtonItem* mBack;
    UIBarButtonItem* mForward;
    UIBarButtonItem* mRefresh;
    UIBarButtonItem* mStop;
}
@property (strong, nonatomic)          NSString *webViewURL;
@property (nonatomic, retain) IBOutlet UIWebView* webView;
@property (nonatomic, retain) IBOutlet UIToolbar* toolbar;
@property (nonatomic, retain) IBOutlet UIBarButtonItem* back;
@property (nonatomic, retain) IBOutlet UIBarButtonItem* forward;
@property (nonatomic, retain) IBOutlet UIBarButtonItem* refresh;
- (void)updateButtons;
- (IBAction)backToFinance:(id)sender;
@property (retain, nonatomic) IBOutlet UINavigationItem *navBar;

@end
