//
//  MatchMakerAppDelegate.h
//  MatchMaker
//
//  Created by Yair Stabinsky on 6/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MatchMakerViewController;

@interface MatchMakerAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MatchMakerViewController *viewController;

@end
