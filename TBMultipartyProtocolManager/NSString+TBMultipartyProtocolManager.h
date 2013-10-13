//
//  NSString+TBMultipartyProtocolManager.h
//  TBMultipartyProtocolManager
//
//  Created by Thomas Balthazar on 07/10/13.
//  Copyright (c) 2013 Thomas Balthazar. All rights reserved.
//

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
@interface NSString (TBMultipartyProtocolManager)

// JSON
+ (NSString *)tb_stringFromJSONObject:(id)JSONObject;
+ (NSDictionary *)tb_JSONStringToDictionary:(NSString *)JSONString;

// base64
- (NSString *)tb_stringFromBase64String;
- (NSString *)tb_base64String;

@end
