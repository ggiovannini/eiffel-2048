/*
 * Class DATE_MEASUREMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_912 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_912 [] = {0xFF11,236,0xFF12,911,0xFFFF};
static EIF_TYPE_INDEX gen_type2_912 [] = {0xFF11,911,0xFFFF};
static EIF_TYPE_INDEX gen_type3_912 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_912 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_912 [] = {0xFF11,911,0xFFFF};
static EIF_TYPE_INDEX gen_type6_912 [] = {0xFF11,911,0xFFFF};
static EIF_TYPE_INDEX gen_type7_912 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_912 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_912 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_912 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_912 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_912 [] = {0xFF11,911,0xFFFF};
static EIF_TYPE_INDEX gen_type13_912 [] = {0xFF11,878,0xFFFF};
static EIF_TYPE_INDEX gen_type14_912 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_912 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type16_912 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_912 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_912 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type19_912 [] = {0xFF11,249,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type20_912 [] = {0xFF11,296,205,0xFFFF};


static struct desc_info desc_912[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_912},
	{1, (BODY_INDEX)-1, 236, gen_type1_912},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 911, gen_type2_912},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_912},
	{14, (BODY_INDEX)-1, 0, gen_type4_912},
	{15, (BODY_INDEX)-1, 911, gen_type5_912},
	{16, (BODY_INDEX)-1, 911, gen_type6_912},
	{17, (BODY_INDEX)-1, 0, gen_type7_912},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_912},
	{21, (BODY_INDEX)-1, 219, gen_type9_912},
	{22, (BODY_INDEX)-1, 219, gen_type10_912},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_912},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 911, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 911, gen_type12_912},
	{13258, (BODY_INDEX)-1, 205, NULL},
	{13259, (BODY_INDEX)-1, 205, NULL},
	{13260, (BODY_INDEX)-1, 878, gen_type13_912},
	{13261, (BODY_INDEX)-1, 219, gen_type14_912},
	{13287, (BODY_INDEX)-1, 205, NULL},
	{13288, (BODY_INDEX)-1, 205, NULL},
	{13289, (BODY_INDEX)-1, 205, NULL},
	{13290, (BODY_INDEX)-1, 205, NULL},
	{13291, (BODY_INDEX)-1, 205, NULL},
	{13292, (BODY_INDEX)-1, 205, NULL},
	{13293, (BODY_INDEX)-1, 219, gen_type15_912},
	{13294, (BODY_INDEX)-1, 249, gen_type16_912},
	{13295, (BODY_INDEX)-1, 249, gen_type17_912},
	{13296, (BODY_INDEX)-1, 249, gen_type18_912},
	{13297, (BODY_INDEX)-1, 249, gen_type19_912},
	{13298, (BODY_INDEX)-1, 190, NULL},
	{13299, (BODY_INDEX)-1, 190, NULL},
	{13300, (BODY_INDEX)-1, 296, gen_type20_912},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13301, (BODY_INDEX)-1, 205, NULL},
};

extern void Init912(void);
void Init912(void)
{
	IDSC(desc_912, 0, 911);
	IDSC(desc_912 + 1, 1, 911);
	IDSC(desc_912 + 32, 444, 911);
	IDSC(desc_912 + 36, 426, 911);
	IDSC(desc_912 + 50, 427, 911);
}


#ifdef __cplusplus
}
#endif
