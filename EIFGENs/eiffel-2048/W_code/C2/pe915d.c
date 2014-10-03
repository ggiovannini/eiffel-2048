/*
 * Class PERCENT_ENCODER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_915 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_915 [] = {0xFF11,236,0xFF12,914,0xFFFF};
static EIF_TYPE_INDEX gen_type2_915 [] = {0xFF11,914,0xFFFF};
static EIF_TYPE_INDEX gen_type3_915 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_915 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_915 [] = {0xFF11,914,0xFFFF};
static EIF_TYPE_INDEX gen_type6_915 [] = {0xFF11,914,0xFFFF};
static EIF_TYPE_INDEX gen_type7_915 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_915 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_915 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_915 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_915 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_915 [] = {0xFF11,914,0xFFFF};
static EIF_TYPE_INDEX gen_type13_915 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_915 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_915 [] = {0xFF11,225,0xFFFF};
static EIF_TYPE_INDEX gen_type16_915 [] = {0xFF11,548,199,0xFFFF};
static EIF_TYPE_INDEX gen_type17_915 [] = {0xFF11,56,0xFFFF};


static struct desc_info desc_915[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_915},
	{1, (BODY_INDEX)-1, 236, gen_type1_915},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 914, gen_type2_915},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_915},
	{14, (BODY_INDEX)-1, 0, gen_type4_915},
	{15, (BODY_INDEX)-1, 914, gen_type5_915},
	{16, (BODY_INDEX)-1, 914, gen_type6_915},
	{17, (BODY_INDEX)-1, 0, gen_type7_915},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_915},
	{21, (BODY_INDEX)-1, 219, gen_type9_915},
	{22, (BODY_INDEX)-1, 219, gen_type10_915},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_915},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 914, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 914, gen_type12_915},
	{13317, 0, 190, NULL},
	{13318, (BODY_INDEX)-1, 219, gen_type13_915},
	{13319, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13320, (BODY_INDEX)-1, 219, gen_type14_915},
	{13321, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13322, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13323, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13324, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13325, (BODY_INDEX)-1, 225, gen_type15_915},
	{13326, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13327, (BODY_INDEX)-1, 199, NULL},
	{13328, (BODY_INDEX)-1, 199, NULL},
	{13329, (BODY_INDEX)-1, 190, NULL},
	{13330, (BODY_INDEX)-1, 190, NULL},
	{13331, (BODY_INDEX)-1, 190, NULL},
	{13332, (BODY_INDEX)-1, 190, NULL},
	{13333, (BODY_INDEX)-1, 190, NULL},
	{13334, (BODY_INDEX)-1, 190, NULL},
	{13335, (BODY_INDEX)-1, 190, NULL},
	{13336, (BODY_INDEX)-1, 190, NULL},
	{13313, (BODY_INDEX)-1, 548, gen_type16_915},
	{13314, (BODY_INDEX)-1, 190, NULL},
	{13315, (BODY_INDEX)-1, 199, NULL},
	{13316, (BODY_INDEX)-1, 56, gen_type17_915},
};

extern void Init915(void);
void Init915(void)
{
	IDSC(desc_915, 0, 914);
	IDSC(desc_915 + 1, 1, 914);
	IDSC(desc_915 + 32, 436, 914);
}


#ifdef __cplusplus
}
#endif
