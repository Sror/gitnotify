//
//  GNGithubApi.h
//  GitNotify
//
//  Created by Max Lam on 7/22/13.
//  Copyright (c) 2013 Max Lam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UAGithubEngine.h"
#import "GNNetworkCalls.h"
#import "GNAPIConstants.h"
#import "SBJson.h"
#import "GNDatabaseAPI.h"

@interface GNGithubApi : NSObject {
    GNNetworkCalls *net;
    UAGithubEngine *engine;
}

@property (nonatomic, strong) NSString *uname;
@property (nonatomic) int uid;

+(GNGithubApi *)sharedGitAPI;

-(BOOL)login:(NSString *)username andPass:(NSString *)password;
-(void)getUserReposWithDelegate:(id)delegate andSelector:(SEL)sel;
-(void)getUserWithDelegate:(id)delegate andSelector:(SEL)sel;
-(void)createHook:(NSString *)owner andRepo:(NSString *)repo;

@end
