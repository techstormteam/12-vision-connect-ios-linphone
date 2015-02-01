//
//  LinPhonePlugin.h
//  Netcastdigital
//
//  Created by Macbook air on 11/11/14.
//
//


#import <Cordova/CDV.h>

@interface LinPhonePlugin : CDVPlugin

- (void) callSip:(CDVInvokedUrlCommand *)command;

- (void) cancelSip:(CDVInvokedUrlCommand *)command;

- (void) registerSip:(CDVInvokedUrlCommand *)command;

- (void) deregisterSip:(CDVInvokedUrlCommand *)command;

- (void) backWind:(CDVInvokedUrlCommand *)command;

- (void) forwardWind:(CDVInvokedUrlCommand *)command;

- (void) pauseSip:(CDVInvokedUrlCommand *)command;

- (void) signOut:(CDVInvokedUrlCommand *)command;

@end