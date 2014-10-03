/*
 * Class SERVER_MEDIA_TYPE_NEGOTIATION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_943 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_943 [] = {0xFF11,236,0xFF12,942,0xFFFF};
static EIF_TYPE_INDEX gen_type2_943 [] = {0xFF11,942,0xFFFF};
static EIF_TYPE_INDEX gen_type3_943 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_943 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_943 [] = {0xFF11,942,0xFFFF};
static EIF_TYPE_INDEX gen_type6_943 [] = {0xFF11,942,0xFFFF};
static EIF_TYPE_INDEX gen_type7_943 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_943 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_943 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_943 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_943 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_943 [] = {0xFF11,942,0xFFFF};
static EIF_TYPE_INDEX gen_type13_943 [] = {0xFF11,944,0xFFFF};
static EIF_TYPE_INDEX gen_type14_943 [] = {0xFF11,217,0xFFFF};
static EIF_TYPE_INDEX gen_type15_943 [] = {0xFF11,886,0xFFFF};


static struct desc_info desc_943[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_943},
	{1, (BODY_INDEX)-1, 236, gen_type1_943},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 942, gen_type2_943},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_943},
	{14, (BODY_INDEX)-1, 0, gen_type4_943},
	{15, (BODY_INDEX)-1, 942, gen_type5_943},
	{16, (BODY_INDEX)-1, 942, gen_type6_943},
	{17, (BODY_INDEX)-1, 0, gen_type7_943},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_943},
	{21, (BODY_INDEX)-1, 219, gen_type9_943},
	{22, (BODY_INDEX)-1, 219, gen_type10_943},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_943},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 942, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 942, gen_type12_943},
	{1022, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1023, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1024, (BODY_INDEX)-1, 190, NULL},
	{13651, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13652, 0, 944, gen_type13_943},
	{13653, 4, 217, gen_type14_943},
	{13654, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13655, (BODY_INDEX)-1, 886, gen_type15_943},
};

extern void Init943(void);
void Init943(void)
{
	IDSC(desc_943, 0, 942);
	IDSC(desc_943 + 1, 1, 942);
	IDSC(desc_943 + 32, 39, 942);
	IDSC(desc_943 + 35, 373, 942);
}


#ifdef __cplusplus
}
#endif
