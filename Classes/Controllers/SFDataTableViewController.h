//
//  SFDataTableViewController.h
//  Congress
//
//  Created by Daniel Cloud on 2/26/13.
//  Copyright (c) 2013 Sunlight Foundation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SFCongressTableViewController.h"
#import "SFDataTableDataSource.h"

@interface SFDataTableViewController : SFCongressTableViewController

@property (nonatomic, strong) SFDataTableDataSource *dataTableDataSource;

- (void)reloadTableView;
- (void)sortItemsIntoSectionsAndReload;

#pragma mark - Backwards compatiblity

@property (nonatomic, strong) NSArray *items;
@property (nonatomic, strong) NSArray *sections;
@property (readwrite, copy) SFDataTableSortIntoSectionsBlock sortIntoSectionsBlock;
@property (readwrite, copy) SFDataTableOrderItemsInSectionsBlock orderItemsInSectionsBlock;
@property (readwrite, copy) SFDataTableSectionTitleGenerator sectionTitleGenerator;
@property (readwrite, copy) SFDataTableCellForIndexPathHandler cellForIndexPathHandler;
@property (readwrite, copy) SFDataTableSectionIndexTitleGenerator sectionIndexTitleGenerator;
@property (readwrite, copy) SFDataTableSectionForSectionIndexHandler sectionIndexHandler;

- (void)setSectionTitleGenerator:(SFDataTableSectionTitleGenerator)pSectionTitleGenerator
                sortIntoSections:(SFDataTableSortIntoSectionsBlock)pSectionSorter
            orderItemsInSections:(SFDataTableOrderItemsInSectionsBlock)pOrderItemsInSectionsBlock
         cellForIndexPathHandler:(SFDataTableCellForIndexPathHandler)pCellForIndexPathHandler;
- (void)setSectionIndexTitleGenerator:(SFDataTableSectionIndexTitleGenerator)pSectionIndexTitleGenerator
                  sectionIndexHandler:(SFDataTableSectionForSectionIndexHandler)sectionForSectionIndexHandler;
- (void)sortItemsIntoSections;
- (id)itemForIndexPath:(NSIndexPath *)indexPath;


@end
