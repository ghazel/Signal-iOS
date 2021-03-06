//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import <CocoaLumberjack/DDFileLogger.h>

@interface DebugLogger : NSObject

+ (instancetype)sharedLogger;

- (void)enableFileLogging;

- (void)disableFileLogging;

- (void)enableTTYLogging;

- (void)wipeLogs;

- (NSString *)logsDirectory;

@property (nonatomic) DDFileLogger *fileLogger;

@end
