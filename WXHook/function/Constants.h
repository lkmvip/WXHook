NSString* const WXPreferencesFile = @"/var/mobile/Library/Preferences/com.susnm.WXHook.plist";

static NSString *sharedtext = @"";
static BOOL isShared = NO;

static CFStringRef screenshotNotification = CFSTR("com.susnm.userDidTakeScreenshotNotification");
static CFStringRef shouldScreenshotNotification = CFSTR("com.susnm.shouldScreenshotNotification");

static BOOL isFirstEnterWCNewVC = NO;
static BOOL isFinishedRefreshRedHistory = NO;
static BOOL showTodayRedHistory = NO;
static int hadRequestTimes = 0;
static BOOL lastRequest = NO;
static BOOL hadChangeRedHistory = NO;

static NSString *enableProtectiveBodyKey = @"com.susnm.enableProtectiveBody";
static NSString *enableScreenshotForwardKey = @"com.susnm.enableScreenshotForward";
static NSString *totalRedHistoryRequestTimesKey = @"com.susnm.TotalRedHistoryRequestTimes";
static NSString *anyDayStepKey = @"com.susnm.AnyDayStep";
static NSString *enableAnyDayStepKey = @"com.susnm.enableAnyDayStep";
