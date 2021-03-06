/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridSectionHeaderView : UICollectionReusableView {
    UIButton * _button;
    NSArray * _headerCellConstraints;
    HUGridLayoutOptions * _layoutOptions;
    NSString * _sectionTitle;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) NSArray *headerCellConstraints;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, retain) NSString *sectionTitle;
@property (nonatomic, retain) UILabel *titleLabel;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_invalidateConstraints;
- (void)_updateTitleLabel;
- (id)button;
- (id)headerCellConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutOptions;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)sectionTitle;
- (void)setButton:(id)arg1;
- (void)setHeaderCellConstraints:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setSectionTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateConstraints;

@end
