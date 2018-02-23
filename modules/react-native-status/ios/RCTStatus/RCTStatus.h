#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import "RCTLog.h"
#import <JavaScriptCore/JavaScriptCore.h>
#import "Jail.h"

#define NSLog(s, ...) do { NSLog(s, ##__VA_ARGS__); TFLog(s, ##__VA_ARGS__); } while (0)

@interface Status : NSObject <RCTBridgeModule>
+ (void)signalEvent:(const char *)signal;
+ (void)jailEvent:(NSString *)chatId
             data:(NSString *)data;
+ (BOOL)JSCEnabled;
@property (nonatomic) Jail * jail;
@end
