//
//  DiscPublisherPrivate.h
//  Primiera
//
//  Created by Alessandro Volz on 2/9/10.
//  Copyright 2010 OsiriX Team. All rights reserved.
//

#import "DiscPublisher.h"

@interface DiscPublisher (Constants)

extern NSString* const DiscPublisherException;

#define ConditionalDiscPublisherException(err, error, description) { if (err == error) [NSException raise:DiscPublisherException format:@"%@", description]; }
#define ConditionalDiscPublisherPTErrorException(err) { if (err) [NSException raise:DiscPublisherException format:@"%@", [DiscPublisher PTError:err]]; }
#define ConditionalDiscPublisherJPErrorException(err) { if (err) [NSException raise:DiscPublisherException format:@"%@", [DiscPublisher JPError:err]]; }
#define ConditionalDiscPublisherJMErrorException(err) { if (err) [NSException raise:DiscPublisherException format:@"%@", [DiscPublisher JMError:err]]; }

extern NSString* const DiscPublisherErrorInternalErrorOccurred;
extern NSString* const DiscPublisherErrorCommandOutOfSequence;
extern NSString* const DiscPublisherErrorDLLNotFound;
extern NSString* const DiscPublisherErrorNoRobotsFound;
extern NSString* const DiscPublisherErrorNotEnoughMemory;
extern NSString* const DiscPublisherErrorInvalidRobotHandle;
extern NSString* const DiscPublisherErrorInvalidRobotAction;
extern NSString* const DiscPublisherErrorNoResponseFromRobot;
extern NSString* const DiscPublisherErrorNoPrinter;
extern NSString* const DiscPublisherErrorInvalidLocation;
extern NSString* const DiscPublisherErrorNotReadyToAcceptNewJob;

+(NSString*)PTRobotType:(UInt32)type;
+(NSString*)PTRobotOptions:(UInt32)options;
+(NSString*)PTRobotActions:(UInt32)actions;
+(NSString*)PTRobotBusType:(UInt32)busType;
+(NSString*)PTCartridgeType:(UInt32)cartridgeType;
+(NSString*)PTCartridgeInstalled:(UInt32)cartridgeInstalled;
+(NSString*)PTNumDiscs:(UInt32)num;
+(NSString*)PTPrinterTrayStatus:(UInt32)status;
+(NSString*)PTPickSwitchStatus:(UInt32)status;
+(NSString*)PTSystemState:(UInt32)status;

+(NSString*)JPJobType:(UInt32)type;
+(NSString*)JPJobState:(UInt32)state;

+(NSString*)JMDiscType:(UInt32)type;

+(NSString*)PTSystemError:(UInt32)err;
+(NSString*)PTError:(UInt32)err;

+(NSString*)JPSystemError:(UInt32)err;
+(NSString*)JPError:(UInt32)err;

+(NSString*)JMError:(UInt32)err;

+(NSString*)descriptionForJobStatus:(const JobStatus&)status;

@end
