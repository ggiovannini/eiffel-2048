/*
 * Class WSF_CALLBACK_SERVICE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_937 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_937 [] = {0xFF11,236,0xFF12,936,0xFFFF};
static EIF_TYPE_INDEX gen_type2_937 [] = {0xFF11,936,0xFFFF};
static EIF_TYPE_INDEX gen_type3_937 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_937 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_937 [] = {0xFF11,936,0xFFFF};
static EIF_TYPE_INDEX gen_type6_937 [] = {0xFF11,936,0xFFFF};
static EIF_TYPE_INDEX gen_type7_937 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_937 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_937 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_937 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_937 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_937 [] = {0xFF11,936,0xFFFF};
static EIF_TYPE_INDEX gen_type13_937 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type14_937 [] = {0xFF11,237,0xFF11,0,0xFF11,0xFFF9,2,173,0xFF11,975,0xFF11,869,0xFFFF};


static struct desc_info desc_937[] = {
	{(BODY_INDEX) 13636, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_937},
	{1, (BODY_INDEX)-1, 236, gen_type1_937},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 936, gen_type2_937},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_937},
	{14, (BODY_INDEX)-1, 0, gen_type4_937},
	{15, (BODY_INDEX)-1, 936, gen_type5_937},
	{16, (BODY_INDEX)-1, 936, gen_type6_937},
	{17, (BODY_INDEX)-1, 0, gen_type7_937},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_937},
	{21, (BODY_INDEX)-1, 219, gen_type9_937},
	{22, (BODY_INDEX)-1, 219, gen_type10_937},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_937},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 936, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 936, gen_type12_937},
	{13635, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13632, (BODY_INDEX)-1, 880, gen_type13_937},
	{13633, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13634, 0, 237, gen_type14_937},
};

extern void Init937(void);
void Init937(void)
{
	IDSC(desc_937, 0, 936);
	IDSC(desc_937 + 1, 1, 936);
	IDSC(desc_937 + 32, 415, 936);
	IDSC(desc_937 + 34, 447, 936);
}


#ifdef __cplusplus
}
#endif
