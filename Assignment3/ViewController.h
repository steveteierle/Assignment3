//
//  ViewController.h
//  Assignment3
//
//  Created by David Evans on 2/5/13.
//  Copyright (c) 2013 DavidEvans. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, assign) BOOL allSelected;

@property (nonatomic, strong) NSMutableArray * cart;

@property (nonatomic, weak) IBOutlet UITableView *cartView;

@property (nonatomic, weak) IBOutlet UIButton * selectAll;

@property (nonatomic, weak) IBOutlet UIWebView * webView;
@property (nonatomic, weak) IBOutlet UIButton * btn1;
@property (nonatomic, weak) IBOutlet UIButton * btn2;
@property (nonatomic, weak) IBOutlet UIButton * btn3;
@property (nonatomic, weak) IBOutlet UIButton * btn4;


-(IBAction)selectAllOrNone:(id)sender;


-(IBAction)removeAllFruitInCart:(id)sender;
-(IBAction)fillCartWithBananas:(id)sender;

@end
