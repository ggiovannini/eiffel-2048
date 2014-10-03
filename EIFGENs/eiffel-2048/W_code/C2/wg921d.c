/*
 * Class WGI_NINO_RESPONSE_STREAM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_921 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_921 [] = {0xFF11,236,0xFF12,920,0xFFFF};
static EIF_TYPE_INDEX gen_type2_921 [] = {0xFF11,920,0xFFFF};
static EIF_TYPE_INDEX gen_type3_921 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_921 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_921 [] = {0xFF11,920,0xFFFF};
static EIF_TYPE_INDEX gen_type6_921 [] = {0xFF11,920,0xFFFF};
static EIF_TYPE_INDEX gen_type7_921 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_921 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_921 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_921 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_921 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_921 [] = {0xFF11,920,0xFFFF};
static EIF_TYPE_INDEX gen_type13_921 [] = {237,0xFF11,0,0xFF11,0xFFF9,0,173,0xFFFF};
static EIF_TYPE_INDEX gen_type14_921 [] = {0xFF11,873,0xFFFF};


static struct desc_info desc_921[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_921},
	{1, (BODY_INDEX)-1, 236, gen_type1_921},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 920, gen_type2_921},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_921},
	{14, (BODY_INDEX)-1, 0, gen_type4_921},
	{15, (BODY_INDEX)-1, 920, gen_type5_921},
	{16, (BODY_INDEX)-1, 920, gen_type6_921},
	{17, (BODY_INDEX)-1, 0, gen_type7_921},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_921},
	{21, (BODY_INDEX)-1, 219, gen_type9_921},
	{22, (BODY_INDEX)-1, 219, gen_type10_921},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_921},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 920, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 920, gen_type12_921},
	{13344, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13348, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13345, 0, 237, gen_type13_921},
	{13346, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13349, 18, 190, NULL},
	{13350, 17, 190, NULL},
	{13351, 16, 190, NULL},
	{13352, (BODY_INDEX)-1, 190, NULL},
	{13353, (BODY_INDEX)-1, 190, NULL},
	{13354, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13355, 20, 205, NULL},
	{13356, 12, 217, NULL},
	{13365, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13358, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13359, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13360, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13361, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13362, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13347, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13363, 4, 873, gen_type14_921},
	{13364, 8, 875, NULL},
	{13356, 12, 217, NULL},
	{13355, 20, 205, NULL},
	{13351, 16, 190, NULL},
	{13350, 17, 190, NULL},
	{13349, 18, 190, NULL},
};

extern void Init921(void);
void Init921(void)
{
	IDSC(desc_921, 0, 920);
	IDSC(desc_921 + 1, 1, 920);
	IDSC(desc_921 + 32, 380, 920);
	IDSC(desc_921 + 50, 468, 920);
}


#ifdef __cplusplus
}
#endif
