//
//  LSAppDelegate.h
//  Waker
//
//  Created by 孟 智 on 13-11-25.
//  Copyright (c) 2013年 孟 智. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
