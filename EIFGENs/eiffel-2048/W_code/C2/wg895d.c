/*
 * Class WGI_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_895 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_895 [] = {0xFF11,236,0xFF12,894,0xFFFF};
static EIF_TYPE_INDEX gen_type2_895 [] = {0xFF11,894,0xFFFF};
static EIF_TYPE_INDEX gen_type3_895 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_895 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_895 [] = {0xFF11,894,0xFFFF};
static EIF_TYPE_INDEX gen_type6_895 [] = {0xFF11,894,0xFFFF};
static EIF_TYPE_INDEX gen_type7_895 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_895 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_895 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_895 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_895 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_895 [] = {0xFF11,894,0xFFFF};
static EIF_TYPE_INDEX gen_type13_895 [] = {0xFF11,217,0xFFFF};
static EIF_TYPE_INDEX gen_type14_895 [] = {0xFF11,217,0xFFFF};


static struct desc_info desc_895[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_895},
	{1, (BODY_INDEX)-1, 236, gen_type1_895},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 894, gen_type2_895},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_895},
	{14, (BODY_INDEX)-1, 0, gen_type4_895},
	{15, (BODY_INDEX)-1, 894, gen_type5_895},
	{16, (BODY_INDEX)-1, 894, gen_type6_895},
	{17, (BODY_INDEX)-1, 0, gen_type7_895},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_895},
	{21, (BODY_INDEX)-1, 219, gen_type9_895},
	{22, (BODY_INDEX)-1, 219, gen_type10_895},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_895},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 894, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 894, gen_type12_895},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 217, gen_type13_895},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 217, gen_type14_895},
};

extern void Init895(void);
void Init895(void)
{
	IDSC(desc_895, 0, 894);
	IDSC(desc_895 + 1, 1, 894);
	IDSC(desc_895 + 32, 355, 894);
}


#ifdef __cplusplus
}
#endif
