//
//  IOSGodsDetailTBCell.h
//  FindMe
//
//  Created by mac on 2021/5/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface IOSGodsDetailTBCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *picImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *godsNumLabel;
@property (weak, nonatomic) IBOutlet UILabel *godsNumlabel1;
@property (weak, nonatomic) IBOutlet UIView *godsnumBgView;
@property (weak, nonatomic) IBOutlet UILabel *PriceLabel;
@property (weak, nonatomic) IBOutlet UIButton *EditPriceButton;
@property (weak, nonatomic) IBOutlet UIButton *addButton;
@property (weak, nonatomic) IBOutlet UIButton *unaddrButton;
@property (weak, nonatomic) IBOutlet UILabel *numLabel;
- (IBAction)unAddButtonClicked:(id)sender;


- (IBAction)addButtonClicked:(id)sender;
- (IBAction)editPriceButtonClicked:(id)sender;


/* godsType类型，1默认类型，有加减 有编辑单价
 2没加减按钮，没编辑单价,有单选
 3有加减，无编辑单价
 */
@property (nonatomic,assign) NSInteger godsListType;

@end

NS_ASSUME_NONNULL_END
