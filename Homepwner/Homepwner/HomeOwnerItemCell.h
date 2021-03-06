//
//  HomeOwnerItemCell.h
//  Homepwner
//
//  Created by Tammer Saleh on 1/9/12.
//  Copyright (c) 2012 Thunderbolt Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class Possession;

@interface HomeOwnerItemCell : UITableViewCell

@property(nonatomic, strong) UILabel *valueLabel;
@property(nonatomic, strong) UILabel *nameLabel;
@property(nonatomic, strong) UIImageView *imageView;

- (void)setPossession:(Possession *)possession;

@end
