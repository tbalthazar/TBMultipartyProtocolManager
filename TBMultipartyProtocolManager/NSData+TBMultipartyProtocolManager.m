//
//  NSData+TBMultipartyProtocolManager.m
//  TBMultipartyProtocolManager
//
//  Created by Thomas Balthazar on 13/10/13.
//  Copyright (c) 2013 Thomas Balthazar. All rights reserved.
//

#import "NSData+TBMultipartyProtocolManager.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
@implementation NSData (TBMultipartyProtocolManager)

////////////////////////////////////////////////////////////////////////////////////////////////////
- (NSString *)tb_base64String {
  return [self base64EncodedStringWithOptions:0];
}

////////////////////////////////////////////////////////////////////////////////////////////////////
+ (NSData *)tb_dataFromBase64String:(NSString *)base64String {
  return [[NSData alloc] initWithBase64EncodedString:base64String
                                              options:NSDataBase64DecodingIgnoreUnknownCharacters];
}

@end
