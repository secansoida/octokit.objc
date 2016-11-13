//
//  OCTUsersSearchResult.h
//  OctoKit
//
//  Created by Justyna Dolińska on 13/11/16.
//  Copyright © 2016 GitHub. All rights reserved.
//

#import <OctoKit/OctoKit.h>

// Represents the results of search users method.
@interface OCTUsersSearchResult : OCTObject

// The total users count of the search results.
@property (nonatomic, assign, readonly) NSUInteger totalCount;

// Indicates whether the results incomplete or not.
@property (nonatomic, assign, getter = isIncompleteResults, readonly) BOOL incompleteResults;

// The user array of the search results.
@property (nonatomic, copy, readonly) NSArray *users;

@end
