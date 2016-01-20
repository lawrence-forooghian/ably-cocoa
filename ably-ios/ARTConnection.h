//
//  ARTConnection.h
//  ably
//
//  Created by Ricardo Pereira on 30/10/2015.
//  Copyright © 2015 Ably. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CompatibilityMacros.h"
#import "ARTTypes.h"

@class ARTRealtime;
@class ARTEventEmitter;

ART_ASSUME_NONNULL_BEGIN

@interface ARTConnection: NSObject

@property (art_nullable, readonly, getter=getId) NSString *id;
@property (art_nullable, readonly, getter=getKey) NSString *key;
@property (readonly, getter=getSerial) int64_t serial;
@property (readonly, getter=getState) ARTRealtimeConnectionState state;
@property (readonly, getter=getEventEmitter) ARTEventEmitter *eventEmitter;

- (instancetype)initWithRealtime:(ARTRealtime *)realtime;

- (void)connect;
- (void)close;
- (void)ping:(ARTRealtimePingCb)cb;

@end

ART_ASSUME_NONNULL_END
