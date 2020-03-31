//
//  ESPUDPSocketClient.h
//  EspTouchDemo
//
//  Created by fby on 4/13/15.
//  Copyright (c) 2015 fby. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ESPUDPSocketClient : NSObject

- (void) close;

- (void) interrupt;

/**
 * send the data by UDP
 *
 * @param bytesArray2
 *            the array of datas to be sent
 * @param targetHostName
 *            the host name of target, e.g. 192.168.1.101
 * @param port
 *            the port of target
 * @param interval
 *            the milliseconds to between each UDP sent
 */
- (void) sendDataWithBytesArray2: (NSArray *) bytesArray2 ToTargetHostName: (NSString *)targetHostName WithPort: (int) port
      andInterval: (long) interval;

/**
 * send the data by UDP
 *
 * @param bytesArray2
 *            the data to be sent
 * @param offset
 * 			  the offset which data to be sent
 * @param count
 * 			  the count of the data
 * @param targetHostName
 *            the host name of target, e.g. 192.168.1.101
 * @param port
 *            the port of target
 * @param interval
 *            the milliseconds to between each UDP sent
 */
- (void) sendDataWithBytesArray2: (NSArray *) bytesArray2 Offset: (NSUInteger) offset Count: (NSUInteger) count ToTargetHostName: (NSString *)targetHostName WithPort: (int) port
                     andInterval: (long) interval;
@end
