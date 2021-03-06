/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "AccountSidebarViewControllerDelegate.h"
//#import <XXUnknownSuperclass.h> // Unknown library
//#import "ReachabilityChangeListener.h"
//#import "Aerogram-Structs.h"
//#import "YahooSidebarDelegate.h"
//#import "UIApplicationDelegate.h"
//#import "AccountListViewControllerDelegate.h"
//#import "ThemeProcessorDataSource.h"

@class NSString, YAMainUICoordinator, NSUserDefaults, YAMailLoggedInUserManager, YAThemeProcessor, YAAccount, UIWindow, YAStaticSplashViewController;

__attribute__((visibility("hidden")))
@interface YAAppDelegate : NSObject { // XXUnknownSuperclass <AccountSidebarViewControllerDelegate, ReachabilityChangeListener, YahooSidebarDelegate, ThemeProcessorDataSource, UIApplicationDelegate, AccountListViewControllerDelegate> {
@private
	UIWindow* _window;
	YAAccount* _currentAccount;
	NSString* _adsUserAgent;
	NSUserDefaults* _userDefaults;
	YAMainUICoordinator* _mainUICoordinator;
	YAMailLoggedInUserManager* _mailLoggedInUserManager;
	YAStaticSplashViewController* _splashScreenViewController;
	YAThemeProcessor* _themeProcessor;
}
@property(retain, nonatomic) YAThemeProcessor* themeProcessor;
@property(retain, nonatomic) YAStaticSplashViewController* splashScreenViewController;
@property(retain, nonatomic) YAMailLoggedInUserManager* mailLoggedInUserManager;
@property(retain, nonatomic) YAMainUICoordinator* mainUICoordinator;
@property(retain, nonatomic) NSUserDefaults* userDefaults;
@property(retain, nonatomic) NSString* adsUserAgent;
@property(retain, nonatomic) YAAccount* currentAccount;
@property(retain, nonatomic) UIWindow* window;
//-(void).cxx_destruct;
-(id)sideBar;
-(void)clearStateForAccountMismatch;
-(void)removeAllAccounts;
-(void)removeAccount:(id)account;
-(void)switchToAccount:(id)account;
-(void)handleYAccountsEventUserChangedNotification:(id)notification;
-(void)handleLoginFailure:(id)failure;
-(void)handleLogoutSuccess:(id)success;
-(void)fetchBizmailDisposableEmailsForAccount:(id)account;
-(void)userTriesToAddAccountWithClientYID:(id)clientYID;
-(void)handleLoginSuccess:(id)success;
-(void)toggleConversations;
-(void)resetApp;
-(void)checkForNetworkConnectionInBackgroundQueue;
-(void)gotoInbox;
-(void)displayToastWithEmailForCurrentAccount;
-(void)updateNetworkStatus:(int)status;
-(void)didSelectRemoveAccount:(id)account removeFromDevice:(BOOL)device;
-(void)didSelectRemoveAllAccounts;
-(void)didClickSignOut;
-(void)didClickSignOutAll;
-(void)didClickAddAccount;
-(void)didSelectAccount:(id)account;
-(void)yahooSidebar:(id)sidebar didSelectIdentityBar:(id)bar;
-(void)dismissSidebarDropdownMenu;
-(id)yahooSidebarShareAppTwitterMessageBody:(id)body;
-(BOOL)yahooSidebar:(id)sidebar willLaunchMailComposerWithSubject:(id)subject andMessageBody:(id)body;
-(void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
-(void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;
-(void)applicationWillTerminate:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillResignActive:(id)application;
-(void)application:(id)application didReceiveRemoteNotification:(id)notification;
-(void)orientationChanged:(id)changed;
-(id)retrieveAccountWithEmail:(id)email;
-(id)retrieveAccountWithClientYID:(id)clientYID;
-(void)clearMainUI;
-(void)showMainUIWithAccount:(id)account;
-(void)updatePostcardImageForAccount:(id)account;
-(void)setEnabledFeatures;
-(void)setupCrittercism;
-(void)setupAccountSDK;
-(void)setupCoreData:(id)data;
-(float)sidebarXOffset;
-(void)setupYahooSidebar;
-(void)yahooSidebar:(id)sidebar dropDownWillDisappearAnimated:(BOOL)dropDown;
-(void)yahooSidebar:(id)sidebar dropDownWillAppearAnimated:(BOOL)dropDown;
-(void)initializeDependencies;
-(void)initializeCommonUI;
-(BOOL)application:(id)application handleOpenURL:(id)url;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(void)application:(id)application didReceiveRemoteNotification:(id)notification fetchCompletionHandler:(id)handler;
-(void)application:(id)application performFetchWithCompletionHandler:(id)completionHandler;
-(void)setupAdsUserAgent;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(BOOL)application:(id)application willFinishLaunchingWithOptions:(id)options;
@end

