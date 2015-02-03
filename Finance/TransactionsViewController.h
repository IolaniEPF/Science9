//
//  TransactionsViewController.h
//  Science 9
//
//  Created by Blake Tsuzaki on 8/27/13.
//  Copyright (c) 2013 Blake Tsuzaki. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TransactionsView.h"
#import "XPPointsView.h"
#import "UICountingLabel.h"

@interface TransactionsViewController : UIViewController
@property (retain, nonatomic) IBOutlet TransactionsView *XPView;
@property (retain, nonatomic) IBOutlet XPPointsView *CashView;
@property (retain, nonatomic) IBOutlet UIButton *badgeButton;
@property (retain, nonatomic) IBOutlet UIButton *XPButton;
@property (retain, nonatomic) IBOutlet UIButton *starButton;
@property (retain, nonatomic) IBOutlet UICountingLabel *balanceLabel;
@property (retain, nonatomic) IBOutlet UICountingLabel *XPLabel;

@end
