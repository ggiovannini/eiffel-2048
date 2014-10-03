/*
 * Class WGI_NINO_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_896 [] = {0xFF11,236,0xFF12,895,0xFFFF};
static EIF_TYPE_INDEX gen_type2_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type3_896 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_896 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type6_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type7_896 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_896 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_896 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type13_896 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type14_896 [] = {0xFF11,860,0xFFFF};
static EIF_TYPE_INDEX gen_type15_896 [] = {0xFF11,861,0xFFFF};
static EIF_TYPE_INDEX gen_type16_896 [] = {0xFF11,357,0xFF11,0xFFF9,1,173,0xFF11,894,0xFFFF};
static EIF_TYPE_INDEX gen_type17_896 [] = {0xFF11,357,0xFF11,0xFFF9,1,173,0xFF11,894,0xFFFF};
static EIF_TYPE_INDEX gen_type18_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type19_896 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_896[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_896},
	{1, (BODY_INDEX)-1, 236, gen_type1_896},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 895, gen_type2_896},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_896},
	{14, (BODY_INDEX)-1, 0, gen_type4_896},
	{15, (BODY_INDEX)-1, 895, gen_type5_896},
	{16, (BODY_INDEX)-1, 895, gen_type6_896},
	{17, (BODY_INDEX)-1, 0, gen_type7_896},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_896},
	{21, (BODY_INDEX)-1, 219, gen_type9_896},
	{22, (BODY_INDEX)-1, 219, gen_type10_896},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_896},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 895, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 895, gen_type12_896},
	{13126, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13127, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13130, 0, 880, gen_type13_896},
	{13131, 4, 860, gen_type14_896},
	{13132, (BODY_INDEX)-1, 861, gen_type15_896},
	{13133, 8, 217, NULL},
	{13134, 20, 190, NULL},
	{13135, 24, 205, NULL},
	{13136, 12, 357, gen_type16_896},
	{13137, 16, 357, gen_type17_896},
	{13138, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13139, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13140, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13141, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13142, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13128, (BODY_INDEX)-1, 219, gen_type18_896},
	{13129, (BODY_INDEX)-1, 219, gen_type19_896},
};

extern void Init896(void);
void Init896(void)
{
	IDSC(desc_896, 0, 895);
	IDSC(desc_896 + 1, 1, 895);
	IDSC(desc_896 + 32, 446, 895);
	IDSC(desc_896 + 47, 355, 895);
}


#ifdef __cplusplus
}
#endif
