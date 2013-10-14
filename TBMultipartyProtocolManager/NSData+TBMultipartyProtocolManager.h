//
//  NSData+TBMultipartyProtocolManager.h
//  TBMultipartyProtocolManager
//
//  Created by Thomas Balthazar on 13/10/13.
//  Copyright (c) 2013 Thomas Balthazar. All rights reserved.
//

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
@interface NSData (TBMultipartyProtocolManager)

// encode : convert non base64 to base64
- (NSString *)tb_base64String;
- (NSData *)tb_base64Data;

// decode : convert base64 to non-base64
+ (NSData *)tb_dataFromBase64String:(NSString *)base64String;
+ (NSString *)tb_stringFromBase64Data:(NSData *)base64Data;
- (NSData *)tb_base64Decode;

@end