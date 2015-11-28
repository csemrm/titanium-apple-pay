/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "TiModule.h"
#import "TiApplepayPaymentGatewayConfiguration.h"

@interface TiApplepayModule : TiModule {
    BOOL usingStripe;
}

-(void)setupPaymentGateway:(id)args;

-(NSNumber*)isSupported:(id)unused;

-(NSNumber*)canMakePayments:(id)args;

@end
