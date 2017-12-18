//
//  PluginObjects
//  cordova-googlemaps-plugin v2
//
//  Created by Masashi Katsumata.
//
//
#ifndef PluginObjects_h
#define PluginObjects_h

#import <Foundation/Foundation.h>

@interface PluginObjects : NSObject

+ (PluginObjects*)sharedInstance;
@property (nonatomic, strong) NSMutableDictionary *objects;

// set
- (void)setObject:(id)objId forKey:(NSString*)key;

// get
- (UIImage*)objectForKey:(NSString*)key;

// remove
- (void)removeObjectForKey:(NSString*)key;

// remove all
- (void)removeAllObjects;

// return all keys
- (NSArray<NSString *>*)allKeys;

@end


#endif
