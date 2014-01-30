//
//  PPConstants.h
//  ProteusLinkerFramework
//
//  Created by Yazeid Rahman on 18/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

@interface PPConstants : NSObject

#define PL_MANUFACTURER_PHILIPS                 @"Philips"
#define PPMEDIACONTROLSTATERUNNING              @"PPMEDIACONTROLSTATERUNNING"
#define PPMEDIACONTROLSTOPPED                   @"PPMEDIACONTROLSTOPPED"

typedef enum {
    PPMediaControlStateUnknown = 0,
    PPMediaControlStateStopped,
    PPMediaControlStateRunning
} PPMediaControlState;

@end
