//
//  BSJTopicViewModel.h
//  PLMMPRJK
//
//  Created by HuXuPeng on 2017/5/18.
//  Copyright © 2017年 GoMePrjk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BSJTopic.h"
#import "BSJ.h"
#import "BSJTopicTopComent.h"

@interface BSJTopicViewModel : NSObject

/** 模型 */
@property (nonatomic, strong) BSJTopic *topic;

+ (instancetype)viewModelWithTopic:(BSJTopic *)topic;

/** 是否是大图 */
@property (assign, nonatomic) BOOL isBigPicture;

/** 中间图片的 frame */
@property (assign, nonatomic, readonly) CGRect pictureFrame;

/** 高度 */
@property (assign, nonatomic, readonly) CGFloat cellHeight;

/** 下载图片 的进度 */
@property (assign, nonatomic) CGFloat downloadPictureProgress;

/** 创建时间的格式化 */
@property (nonatomic, copy) NSString *creatTime;

/** 评论的布局文字 */
@property (nonatomic, strong) YYTextLayout *topCmtLayout;



/** <#digest#> */
@property (nonatomic, copy) void(^topCmtClick)(BSJUser *user, BSJTopicTopComent *topCmt);


/*
 
 |-10-|-10-|-Header80-|-10-|-content-|-10-|-botBar44-|
 */

/** <#digest#> */
@property (nonatomic, copy) NSString *zanCount;

/** <#digest#> */
@property (nonatomic, copy) NSString *caiCount;

/** <#digest#> */
@property (nonatomic, copy) NSString *repostCount;

/** <#digest#> */
@property (nonatomic, copy) NSString *commentCount;

/** 播放时长 00 : 00 */
@property (nonatomic, copy) NSString *playLength;



@end