//
//  PPArray.h
//  PPArray
//
//  Created by Lakshita on 17/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PPArray : NSMutableArray

//Method to initialise a newly allocated PPArray.
- (id) init;


//Returns the number of objects currently in the PPArray.
- (NSUInteger)count;


//Returns the object located at the specified index.
-(id)objectAtIndex:(NSUInteger)index;


//Inserts a given object into the PPArray's contents at a given index.
-(void)insertObject:(id)anObject atIndex:(NSUInteger)index;


//Removes the object from PPArray at the given index .
-(void)removeObjectAtIndex:(NSUInteger)index;


//Inserts a given object at the end of the array. This value must not be nil.
-(void)addObject:(id)anObject;


//Removes the object with the highest-valued index in the PPArray
-(void)removeLastObject;


//Replaces the object at index of the PPArray with the given object - anObject.
-(void)replaceObjectAtIndex:(NSUInteger)index withObject:(id)anObject;



@end


