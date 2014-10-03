/*
 * Code for class PERCENT_ENCODER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F915_7792(EIF_REFERENCE);
extern EIF_TYPED_VALUE F915_7793(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F915_7794(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7795(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F915_7796(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F915_7797(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F915_7798(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F915_7799(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7800(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F915_7801(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7802(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7803(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7804(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7805(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7806(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7807(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7808(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7809(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7810(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7811(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7812(EIF_REFERENCE);
extern EIF_TYPED_VALUE F915_7813(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7814(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F915_7815(EIF_REFERENCE);
extern void EIF_Minit915(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PERCENT_ENCODER}.has_error */
EIF_TYPED_VALUE F915_7792 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5631,Dtype(Current)));
	return r;
}


/* {PERCENT_ENCODER}.percent_encoded_string */
EIF_TYPED_VALUE F915_7793 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "percent_encoded_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13318);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13318);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
	
	tr1 = RTLN(219);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4325, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5633, Dtype(Current)))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_encoded_string_to */
void F915_7794 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_string_to";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 914, Current, 3, 2, 13319);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13319);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	RTCC(arg2, 914, l_feature_name, 2, eif_attached_type(218));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5631, 0x04000000, 1); /* has_error */
	
	*(EIF_BOOLEAN *)(Current + RTWA(5631, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		
		ui4_1 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
		if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L);
			tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
		}
		if (!(tb3)) {
			tb3 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 90L);
				tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb2 = tb3;
		}
		if (!tb2) {
			tb2 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 122L);
				tb2 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(7);
			uu4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
		} else {
			RTHOOK(8);
			switch (loc1) {
				case 45U:
				case 46U:
				case 95U:
				case 126U:
					RTHOOK(9);
					uu4_1 = loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
					break;
				case 33U:
				case 36U:
				case 37U:
				case 38U:
				case 39U:
				case 40U:
				case 41U:
				case 42U:
				case 43U:
				case 44U:
				case 58U:
				case 59U:
				case 61U:
				case 64U:
					RTHOOK(10);
					uu4_1 = loc1;
					ur1 = RTCCL(arg2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5636, dtype))(Current, uu4_1x, ur1x);
					break;
				default:
					RTHOOK(11);
					uu4_1 = loc1;
					ur1 = RTCCL(arg2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5636, dtype))(Current, uu4_1x, ur1x);
					break;
			}
		}
		RTHOOK(12);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.partial_encoded_string */
EIF_TYPED_VALUE F915_7795 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "partial_encoded_string";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,ur3);
	RTLR(7,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 2, 13320);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13320);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	{
		static EIF_TYPE_INDEX typarr0[] = {493,184,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 914, l_feature_name, 2, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
	
	tr1 = RTLN(219);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4325, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(Result);
	ur3 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5635, Dtype(Current)))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.append_partial_percent_encoded_string_to */
void F915_7796 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "append_partial_percent_encoded_string_to";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc5);
	RTLR(6,ur1);
	RTLR(7,loc6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 914, Current, 6, 3, 13321);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13321);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	RTCC(arg2, 914, l_feature_name, 2, eif_attached_type(218));
	{
		static EIF_TYPE_INDEX typarr0[] = {493,184,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 914, l_feature_name, 3, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5631, 0x04000000, 1); /* has_error */
	
	*(EIF_BOOLEAN *)(Current + RTWA(5631, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc3 > loc4)) break;
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		
		ui4_1 = loc3;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
		if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L);
			tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
		}
		if (!(tb3)) {
			tb3 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 90L);
				tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb2 = tb3;
		}
		if (!tb2) {
			tb2 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 122L);
				tb2 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(7);
			uu4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
		} else {
			RTHOOK(8);
			switch (loc1) {
				case 45U:
				case 46U:
				case 95U:
				case 126U:
					RTHOOK(9);
					uu4_1 = loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
					break;
				case 33U:
				case 36U:
				case 37U:
				case 38U:
				case 39U:
				case 40U:
				case 41U:
				case 42U:
				case 43U:
				case 44U:
				case 58U:
				case 59U:
				case 61U:
				case 64U:
					if (RTAL & CK_CHECK) {
						RTHOOK(10);
						RTCT(NULL, EX_CHECK);
						tr1 = RTLN(199);
						*(EIF_NATURAL_32 *)tr1 = loc1;
						
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4013, "is_valid_character_8_code", tr1))(tr1)).it_b);
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
					RTHOOK(11);
					RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
					
					tc1 = (EIF_CHARACTER_8) loc1;
					loc2 = (EIF_CHARACTER_8) tc1;
					RTHOOK(12);
					RTHOOK(13);
					RTDBGAL(Current, 1, 0xF80001B2, 0, 0); /* loc5 */
					
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2308, "new_cursor", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc5 = (EIF_REFERENCE) RTCCL(tr1);
					tb1 = EIF_FALSE;
					for (;;) {
						if (tb1) break;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1667, "after", loc5))(loc5)).it_b);
						if (tb2) break;
						RTHOOK(14);
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1666, "item", loc5))(loc5)).it_c1);
						tb1 = (EIF_BOOLEAN)(tc1 == loc2);
						RTHOOK(15);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1668, "forth", loc5))(loc5);
					}
					if (tb1) {
						RTHOOK(16);
						uu4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
					} else {
						RTHOOK(17);
						uu4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5636, dtype))(Current, uu4_1x, ur1x);
					}
					break;
				default:
					RTHOOK(18);
					tr1 = RTLN(199);
					*(EIF_NATURAL_32 *)tr1 = loc1;
					
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4013, "is_valid_character_8_code", tr1))(tr1)).it_b);
					if (tb1) {
						RTHOOK(19);
						RTDBGAL(Current, 2, 0x08000000, 1, 0); /* loc2 */
						
						tc1 = (EIF_CHARACTER_8) loc1;
						loc2 = (EIF_CHARACTER_8) tc1;
						RTHOOK(20);
						RTHOOK(21);
						RTDBGAL(Current, 2, 0xF80001B2, 0, 0); /* loc6 */
						
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2308, "new_cursor", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc6 = (EIF_REFERENCE) RTCCL(tr1);
						tb1 = EIF_FALSE;
						for (;;) {
							if (tb1) break;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1667, "after", loc6))(loc6)).it_b);
							if (tb2) break;
							RTHOOK(22);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1666, "item", loc6))(loc6)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == loc2);
							RTHOOK(23);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1668, "forth", loc6))(loc6);
						}
						if (tb1) {
							RTHOOK(24);
							uu4_1 = loc1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
						} else {
							RTHOOK(25);
							uu4_1 = loc1;
							ur1 = RTCCL(arg2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5636, dtype))(Current, uu4_1x, ur1x);
						}
					} else {
						RTHOOK(26);
						uu4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5636, dtype))(Current, uu4_1x, ur1x);
					}
					break;
			}
		}
		RTHOOK(27);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_encoded_character_code_to */
void F915_7797 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_character_code_to";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 2, 13322);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13322);
	RTCC(arg2, 914, l_feature_name, 2, eif_attached_type(218));
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg2))(arg2)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
		RTHOOK(2);
		uu4_1 = arg1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5638, dtype))(Current, uu4_1x, ur1x);
	} else {
		RTHOOK(3);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
			RTHOOK(4);
			uu4_1 = arg1;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5638, dtype))(Current, uu4_1x, ur1x);
		} else {
			RTHOOK(5);
			uu4_1 = arg1;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("appended", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg2))(arg2)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_encoded_ascii_character_code_to */
void F915_7798 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_ascii_character_code_to";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 914, Current, 1, 2, 13323);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13323);
	RTCC(arg2, 914, l_feature_name, 2, eif_attached_type(218));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_extended_ascii", EX_PRE);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
		RTTE((EIF_BOOLEAN) (arg1 <= tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg2))(arg2)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
		RTHOOK(3);
		uu4_1 = arg1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5638, dtype))(Current, uu4_1x, ur1x);
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		ti4_2 = (EIF_INTEGER_32) arg1;
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(5);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
		RTHOOK(6);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 4L);
		ti4_2 = eif_bit_shift_right(loc1,ui4_1);
		ui4_1 = ti4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2382, "item", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
		RTHOOK(7);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 15L);
		ti4_2 = eif_bit_and(loc1,ui4_1);
		ui4_1 = ti4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2382, "item", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("appended", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg2))(arg2)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_encoded_unicode_character_code_to */
void F915_7799 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_unicode_character_code_to";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 2, 13324);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13324);
	RTCC(arg2, 914, l_feature_name, 2, eif_attached_type(218));
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg2))(arg2)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
		RTHOOK(2);
		uu4_1 = arg1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
	} else {
		RTHOOK(3);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
		if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
			RTHOOK(4);
			ui4_1 = ((EIF_INTEGER_32) 6L);
			tu4_1 = eif_bit_shift_right(arg1,ui4_1);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
			uu4_1 = tu4_2;
			tu4_2 = eif_bit_or((tu4_1),uu4_1);
			uu4_1 = tu4_2;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
			RTHOOK(5);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
			uu4_1 = tu4_1;
			tu4_1 = eif_bit_and(arg1,uu4_1);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
			uu4_1 = tu4_2;
			tu4_2 = eif_bit_or((tu4_1),uu4_1);
			uu4_1 = tu4_2;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
		} else {
			RTHOOK(6);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
			if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
				RTHOOK(7);
				ui4_1 = ((EIF_INTEGER_32) 12L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_or((tu4_1),uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(8);
				ui4_1 = ((EIF_INTEGER_32) 6L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_and((tu4_1),uu4_1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_or((tu4_2),uu4_1);
				uu4_1 = tu4_1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(9);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_and(arg1,uu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_or((tu4_1),uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
			} else {
				RTHOOK(10);
				ui4_1 = ((EIF_INTEGER_32) 18L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_or((tu4_1),uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(11);
				ui4_1 = ((EIF_INTEGER_32) 12L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_and((tu4_1),uu4_1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_or((tu4_2),uu4_1);
				uu4_1 = tu4_1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(12);
				ui4_1 = ((EIF_INTEGER_32) 6L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_and((tu4_1),uu4_1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_or((tu4_2),uu4_1);
				uu4_1 = tu4_1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(13);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_and(arg1,uu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_or((tu4_1),uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5637, dtype))(Current, uu4_1x, ur1x);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("appended", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg2))(arg2)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.percent_decoded_string */
EIF_TYPED_VALUE F915_7800 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "percent_decoded_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13325);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13325);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E1, 0,0); /* Result */
	
	tr1 = RTLN(225);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4325, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5640, Dtype(Current)))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {PERCENT_ENCODER}.append_percent_decoded_string_to */
void F915_7801 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_decoded_string_to";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 914, Current, 6, 2, 13326);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13326);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	RTCC(arg2, 914, l_feature_name, 2, eif_attached_type(218));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5631, 0x04000000, 1); /* has_error */
	
	*(EIF_BOOLEAN *)(Current + RTWA(5631, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
	
	loc6 = RTCCL(arg2);
	loc6 = RTRV(eif_non_attached_type(225),loc6);
	loc5 = (EIF_BOOLEAN) EIF_TEST(loc6);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0xF800013A, 0, 0); /* loc4 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {314,205,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1675, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(7);
		RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
		
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(8);
		switch (loc3) {
			case 43U:
				RTHOOK(9);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
				uu4_1 = tu4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
				break;
			case 37U:
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc1 == loc2)) {
					RTHOOK(11);
					RTDBGAA(Current, dtype, 5631, 0x04000000, 1); /* has_error */
					
					*(EIF_BOOLEAN *)(Current + RTWA(5631, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(12);
					uu4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
				} else {
					RTHOOK(13);
					if (loc5) {
						RTHOOK(14);
						ui4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", loc4))(loc4, ui4_1x);
						RTHOOK(15);
						RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
						
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc4);
						loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5642, dtype))(Current, ur1x, ur2x)).it_n4);
						RTHOOK(16);
						uu4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
						RTHOOK(17);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", loc4))(loc4)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(18);
						ui4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", loc4))(loc4, ui4_1x);
						RTHOOK(19);
						RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
						
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc4);
						loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5641, dtype))(Current, ur1x, ur2x)).it_n4);
						RTHOOK(20);
						uu4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
						RTHOOK(21);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", loc4))(loc4)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
					}
				}
				break;
			default:
				RTHOOK(22);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
				if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
					RTHOOK(23);
					uu4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
				} else {
					RTHOOK(24);
					if (loc5) {
						RTHOOK(25);
						uu4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4454, "append_code", arg2))(arg2, uu4_1x);
					} else {
						RTHOOK(26);
						uu4_1 = loc3;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5636, dtype))(Current, uu4_1x, ur1x);
					}
				}
				break;
		}
		RTHOOK(27);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.next_percent_decoded_character_code */
EIF_TYPED_VALUE F915_7802 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_percent_decoded_character_code";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 914, Current, 8, 2, 13327);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13327);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	{
		static EIF_TYPE_INDEX typarr0[] = {314,205,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 914, l_feature_name, 2, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_percent_char", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", arg2))(arg2)).it_i4);
		ui4_1 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
		tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
		RTTE((EIF_BOOLEAN)(tu4_1 == tu4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", arg2))(arg2)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
	
	ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	tb1 = '\01';
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 85L);
	if (!(EIF_BOOLEAN)(loc1 == tu4_1)) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 117L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu4_1);
	}
	if (tb1) {
		RTHOOK(6);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		RTHOOK(7);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			RTHOOK(9);
			RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
			
			ui4_1 = loc2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(10);
			RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
			
			tb1 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L);
				tb1 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			loc8 = (EIF_BOOLEAN) tb1;
			RTHOOK(11);
			tb1 = '\01';
			tb2 = '\01';
			if (!loc8) {
				tb3 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
				if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 102L);
					tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
				}
				tb2 = tb3;
			}
			if (!tb2) {
				tb2 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
				if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L);
					tb2 = (EIF_BOOLEAN) (loc1 <= tu4_1);
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(12);
				RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
				
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 16L);
				loc6 *= tu4_1;
				RTHOOK(13);
				if (loc8) {
					RTHOOK(14);
					RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
					
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
					loc6 += (EIF_NATURAL_32) (loc1 - tu4_1);
				} else {
					RTHOOK(15);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L);
					if ((EIF_BOOLEAN) (loc1 > tu4_1)) {
						RTHOOK(16);
						RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
						
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - tu4_1)) + tu4_2);
					} else {
						RTHOOK(17);
						RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
						
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - tu4_1)) + tu4_2);
					}
				}
				RTHOOK(18);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2++;
			} else {
				RTHOOK(19);
				RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
				
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(20);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				loc2--;
			}
		}
		RTHOOK(21);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", arg2))(arg2, ui4_1x);
		RTHOOK(22);
		RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
		
		Result = (EIF_NATURAL_32) loc6;
	} else {
		RTHOOK(23);
		RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
		
		ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
		ui4_2 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4405, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5653, dtype))(Current, ur1x)).it_n4);
		RTHOOK(24);
		RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
		
		Result = (EIF_NATURAL_32) loc5;
		RTHOOK(25);
		ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", arg2))(arg2, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.next_percent_decoded_unicode_character_code */
EIF_TYPED_VALUE F915_7803 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_percent_decoded_unicode_character_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc8);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 914, Current, 8, 2, 13328);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13328);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	{
		static EIF_TYPE_INDEX typarr0[] = {314,205,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 914, l_feature_name, 2, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_percent_char", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", arg2))(arg2)).it_i4);
		ui4_1 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
		tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
		RTTE((EIF_BOOLEAN)(tu4_1 == tu4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 8, 0xF800013A, 0, 0); /* loc8 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {314,205,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", arg2))(arg2)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1675, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
	
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(loc8);
	loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5641, dtype))(Current, ur1x, ur2x)).it_n4);
	RTHOOK(5);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", loc8))(loc8)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4364, "count", arg1))(arg1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
	
	Result = (EIF_NATURAL_32) loc4;
	RTHOOK(8);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", arg2))(arg2, ui4_1x);
	RTHOOK(9);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
		RTHOOK(10);
		RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
		
		Result = (EIF_NATURAL_32) loc4;
	} else {
		RTHOOK(11);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L);
		if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
				RTHOOK(13);
				RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
				
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc3 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(14);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
				if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
					RTHOOK(15);
					ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", loc8))(loc8, ui4_1x);
					RTHOOK(16);
					RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
					
					ur1 = RTCCL(arg1);
					ur2 = RTCCL(loc8);
					loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5641, dtype))(Current, ur1x, ur2x)).it_n4);
					RTHOOK(17);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", loc8))(loc8)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(18);
					RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
					
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
					uu4_1 = tu4_1;
					tu4_1 = eif_bit_and(loc4,uu4_1);
					ui4_1 = ((EIF_INTEGER_32) 6L);
					tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					uu4_1 = tu4_1;
					tu4_1 = eif_bit_and(loc5,uu4_1);
					uu4_1 = tu4_1;
					tu4_1 = eif_bit_or((tu4_2),uu4_1);
					Result = (EIF_NATURAL_32) tu4_1;
					RTHOOK(19);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", arg2))(arg2, ui4_1x);
				}
			}
		} else {
			RTHOOK(20);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L);
			if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
				RTHOOK(21);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
					RTHOOK(22);
					RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
					
					ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
					loc3 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(23);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
					if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
						RTHOOK(24);
						ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", loc8))(loc8, ui4_1x);
						RTHOOK(25);
						RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
						
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc8);
						loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5641, dtype))(Current, ur1x, ur2x)).it_n4);
						RTHOOK(26);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", loc8))(loc8)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(27);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
							RTHOOK(28);
							RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
							
							ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
							loc3 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(29);
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
							if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
								RTHOOK(30);
								ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", loc8))(loc8, ui4_1x);
								RTHOOK(31);
								RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
								
								ur1 = RTCCL(arg1);
								ur2 = RTCCL(loc8);
								loc6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5641, dtype))(Current, ur1x, ur2x)).it_n4);
								RTHOOK(32);
								RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
								
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", loc8))(loc8)).it_i4);
								loc2 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(33);
								RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
								
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc4,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 12L);
								tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc5,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 6L);
								tu4_3 = eif_bit_shift_left((tu4_1),ui4_1);
								uu4_1 = tu4_3;
								tu4_1 = eif_bit_or((tu4_2),uu4_1);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_and(loc6,uu4_1);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_or(tu4_1,uu4_1);
								Result = (EIF_NATURAL_32) tu4_2;
								RTHOOK(34);
								ui4_1 = loc2;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", arg2))(arg2, ui4_1x);
							}
						}
					}
				}
			} else {
				RTHOOK(35);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L);
				if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
					RTHOOK(36);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
						RTHOOK(37);
						RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
						
						ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
						loc3 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(38);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
						if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
							RTHOOK(39);
							ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", loc8))(loc8, ui4_1x);
							RTHOOK(40);
							RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
							
							ur1 = RTCCL(arg1);
							ur2 = RTCCL(loc8);
							loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5641, dtype))(Current, ur1x, ur2x)).it_n4);
							RTHOOK(41);
							RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
							
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", loc8))(loc8)).it_i4);
							loc2 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(42);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
								RTHOOK(43);
								RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
								
								ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
								loc3 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(44);
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
								if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
									RTHOOK(45);
									ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", loc8))(loc8, ui4_1x);
									RTHOOK(46);
									RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
									
									ur1 = RTCCL(arg1);
									ur2 = RTCCL(loc8);
									loc6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5641, dtype))(Current, ur1x, ur2x)).it_n4);
									RTHOOK(47);
									RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
									
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", loc8))(loc8)).it_i4);
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(48);
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
										RTHOOK(49);
										RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
										
										ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
										tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4327, "code", arg1))(arg1, ui4_1x)).it_n4);
										loc3 = (EIF_NATURAL_32) tu4_1;
										RTHOOK(50);
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
										if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
											RTHOOK(51);
											ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", loc8))(loc8, ui4_1x);
											RTHOOK(52);
											RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
											
											ur1 = RTCCL(arg1);
											ur2 = RTCCL(loc8);
											loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5641, dtype))(Current, ur1x, ur2x)).it_n4);
											RTHOOK(53);
											RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
											
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "item", loc8))(loc8)).it_i4);
											loc2 = (EIF_INTEGER_32) ti4_1;
											RTHOOK(54);
											ui4_1 = loc2;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1676, "replace", arg2))(arg2, ui4_1x);
											RTHOOK(55);
											RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
											
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
											uu4_1 = tu4_1;
											tu4_1 = eif_bit_and(loc4,uu4_1);
											ui4_1 = ((EIF_INTEGER_32) 18L);
											tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											uu4_1 = tu4_1;
											tu4_1 = eif_bit_and(loc5,uu4_1);
											ui4_1 = ((EIF_INTEGER_32) 12L);
											tu4_3 = eif_bit_shift_left((tu4_1),ui4_1);
											uu4_1 = tu4_3;
											tu4_1 = eif_bit_or((tu4_2),uu4_1);
											tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											uu4_1 = tu4_2;
											tu4_2 = eif_bit_and(loc6,uu4_1);
											ui4_1 = ((EIF_INTEGER_32) 6L);
											tu4_3 = eif_bit_shift_left((tu4_2),ui4_1);
											uu4_1 = tu4_3;
											tu4_2 = eif_bit_or(tu4_1,uu4_1);
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											uu4_1 = tu4_1;
											tu4_1 = eif_bit_and(loc7,uu4_1);
											uu4_1 = tu4_1;
											tu4_1 = eif_bit_or(tu4_2,uu4_1);
											Result = (EIF_NATURAL_32) tu4_1;
										}
									}
								}
							}
						}
					}
				} else {
					RTHOOK(56);
					RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
					
					Result = (EIF_NATURAL_32) loc4;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(57);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {PERCENT_ENCODER}.is_hexa_decimal_character */
EIF_TYPED_VALUE F915_7804 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hexa_decimal_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13329);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13329);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'f';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!(tb3)) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'F';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.is_alpha_or_digit_character */
EIF_TYPED_VALUE F915_7805 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_alpha_or_digit_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13330);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13330);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!(tb3)) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.is_alpha_character */
EIF_TYPED_VALUE F915_7806 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_alpha_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13331);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13331);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\01';
	tb2 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
		tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!(tb2)) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.is_digit_character */
EIF_TYPED_VALUE F915_7807 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_digit_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13332);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13332);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
		tb1 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.is_unreserved_character */
EIF_TYPED_VALUE F915_7808 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_unreserved_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13333);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13333);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!(tb3)) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		switch (arg1) {
			case (EIF_CHARACTER_8) '-':
			case (EIF_CHARACTER_8) '.':
			case (EIF_CHARACTER_8) '_':
			case (EIF_CHARACTER_8) '~':
				RTHOOK(4);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.is_reserved_character */
EIF_TYPED_VALUE F915_7809 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_reserved_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13334);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13334);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\01';
	uw1 = arg1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5649, dtype))(Current, uw1x)).it_b);
	if (!tb2) {
		uw1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5650, dtype))(Current, uw1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uw1
#undef arg1
}

/* {PERCENT_ENCODER}.is_gen_delims_character */
EIF_TYPED_VALUE F915_7810 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_gen_delims_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13335);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13335);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '#':
		case (EIF_CHARACTER_8) '/':
		case (EIF_CHARACTER_8) ':':
		case (EIF_CHARACTER_8) '\?':
		case (EIF_CHARACTER_8) '@':
		case (EIF_CHARACTER_8) '[':
		case (EIF_CHARACTER_8) ']':
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.is_sub_delims_character */
EIF_TYPED_VALUE F915_7811 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_sub_delims_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 1, 13336);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13336);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '!':
		case (EIF_CHARACTER_8) '$':
		case (EIF_CHARACTER_8) '&':
		case (EIF_CHARACTER_8) '\'':
		case (EIF_CHARACTER_8) '(':
		case (EIF_CHARACTER_8) ')':
		case (EIF_CHARACTER_8) '*':
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) ',':
		case (EIF_CHARACTER_8) ';':
		case (EIF_CHARACTER_8) '=':
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {PERCENT_ENCODER}.hex_digit */
RTOID (F915_7812)
EIF_TYPED_VALUE F915_7812 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hex_digit";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F915_7812);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 0, 13313);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(914, Current, 13313);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000224, 0,0); /* Result */
	
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	uu4_1 = tu4_1;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	{
		static EIF_TYPE_INDEX typarr0[] = {548,199,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2386, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	uu4_1 = ((EIF_NATURAL_32) 48U);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(3);
	uu4_1 = ((EIF_NATURAL_32) 49U);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(4);
	uu4_1 = ((EIF_NATURAL_32) 50U);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(5);
	uu4_1 = ((EIF_NATURAL_32) 51U);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(6);
	uu4_1 = ((EIF_NATURAL_32) 52U);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(7);
	uu4_1 = ((EIF_NATURAL_32) 53U);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(8);
	uu4_1 = ((EIF_NATURAL_32) 54U);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(9);
	uu4_1 = ((EIF_NATURAL_32) 55U);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(10);
	uu4_1 = ((EIF_NATURAL_32) 56U);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(11);
	uu4_1 = ((EIF_NATURAL_32) 57U);
	ui4_1 = ((EIF_INTEGER_32) 9L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(12);
	uu4_1 = ((EIF_NATURAL_32) 65U);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(13);
	uu4_1 = ((EIF_NATURAL_32) 66U);
	ui4_1 = ((EIF_INTEGER_32) 11L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(14);
	uu4_1 = ((EIF_NATURAL_32) 67U);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(15);
	uu4_1 = ((EIF_NATURAL_32) 68U);
	ui4_1 = ((EIF_INTEGER_32) 13L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(16);
	uu4_1 = ((EIF_NATURAL_32) 69U);
	ui4_1 = ((EIF_INTEGER_32) 14L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(17);
	uu4_1 = ((EIF_NATURAL_32) 70U);
	ui4_1 = ((EIF_INTEGER_32) 15L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2398, "put", Result))(Result, uu4_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef Result
}

/* {PERCENT_ENCODER}.is_hexa_decimal */
EIF_TYPED_VALUE F915_7813 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hexa_decimal";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 914, Current, 1, 1, 13314);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13314);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000038, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5654, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1135, 53))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1166, "parse_string_with_type", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1172, "is_integral_integer", loc1))(loc1)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {PERCENT_ENCODER}.hexadecimal_string_to_natural_32 */
EIF_TYPED_VALUE F915_7814 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hexadecimal_string_to_natural_32";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 914, Current, 1, 1, 13315);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13315);
	RTCC(arg1, 914, l_feature_name, 1, eif_attached_type(216));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_hexa", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5652, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000038, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5654, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1125, 53))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1166, "parse_string_with_type", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
	
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1180, "parsed_natural_32", loc1))(loc1)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {PERCENT_ENCODER}.ctoi_convertor */
RTOID (F915_7815)
EIF_TYPED_VALUE F915_7815 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ctoi_convertor";
	RTEX;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F915_7815);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 914, Current, 0, 0, 13316);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(914, Current, 13316);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000038, 0,0); /* Result */
	
	tr1 = RTLN(56);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1170, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1163, "set_leading_separators_acceptable", Result))(Result, ub1x);
	RTHOOK(3);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1162, "set_trailing_separators_acceptable", Result))(Result, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("ctoi_convertor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ub1
#undef Result
}

void EIF_Minit915 (void)
{
	GTCX
	RTOTS (7812,F915_7812)
	RTOTS (7815,F915_7815)
}


#ifdef __cplusplus
}
#endif
