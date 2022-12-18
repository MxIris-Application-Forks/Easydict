//
//  MainTabViewController.h
//  Easydict
//
//  Created by tisfeng on 2022/11/3.
//  Copyright © 2022 izual. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "EZLayoutManager.h"

NS_ASSUME_NONNULL_BEGIN

// ???: If value is not 0.2, it seems will block animation, because default animationResizeTime is 0.2 ?
static NSTimeInterval const EZUpdateTableViewRowHeightAnimationDuration = 0.4;

@interface EZBaseQueryViewController : NSViewController

@property (nonatomic, copy) NSString *queryText;

@property (nonatomic, assign) EZWindowType windowType;
@property (nonatomic, weak) EZBaseQueryWindow *window;

@property (nonatomic, copy) void (^resizeWindowBlock)(void);

- (instancetype)initWithWindowType:(EZWindowType)type;

- (void)startQueryText:(NSString *)text;
- (void)startQueryWithImage:(NSImage *)image;
- (void)retry;

- (void)resetTableView:(void (^)(void))completion;
- (void)focusInputTextView;

@end

NS_ASSUME_NONNULL_END