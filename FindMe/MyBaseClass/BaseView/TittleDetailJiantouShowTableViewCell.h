//
//  MyChongZhiTableViewCell.h
//  MeetAward
//
//  Created by 郑州聚义 on 16/11/14.
//  Copyright © 2016年 郑州聚义. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TittleDetailModel;
@interface TittleDetailJiantouShowTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *detlabel;



- (void)showData:(TittleDetailModel *)model;

@end
