//
//  EGModalMenuFlowLayout.h
//  AFNetworking
//
//  Created by 顾新生 on 2018/4/18.
//

#import <UIKit/UIKit.h>

@interface EGModalMenuFlowLayout : UICollectionViewFlowLayout
- (instancetype)initWithItemCountPerRow:(NSInteger)itemCountPerRow
                            maxRowCount:(NSInteger)maxRowCount;
@end
