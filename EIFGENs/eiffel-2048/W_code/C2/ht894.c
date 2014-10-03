/*
 * Code for class HTTP_REQUEST_METHODS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F894_7561(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F894_7562(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_7563(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_7564(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_7565(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_7566(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_7567(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_7568(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_7569(EIF_REFERENCE);
extern EIF_TYPED_VALUE F894_7570(EIF_REFERENCE);
extern void EIF_Minit894(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HTTP_REQUEST_METHODS}.method */
EIF_TYPED_VALUE F894_7561 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "method";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 893, Current, 0, 1, 13123);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(893, Current, 13123);
	RTCC(arg1, 893, l_feature_name, 1, eif_attached_type(217));
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5444, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4434, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
		
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5444, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5447, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4434, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
			
			Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5447, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5443, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4434, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
				
				Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5443, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5445, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4434, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
					
					Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5445, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTHOOK(9);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5446, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4434, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(10);
						RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
						
						Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5446, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					} else {
						RTHOOK(11);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5448, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4434, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
							
							Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5448, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						} else {
							RTHOOK(13);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5449, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4434, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
							if (tb1) {
								RTHOOK(14);
								RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
								
								Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5449, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							} else {
								RTHOOK(15);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5450, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4434, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
								if (tb1) {
									RTHOOK(16);
									RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
									
									Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5450, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								} else {
									RTHOOK(17);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5451, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4434, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
									if (tb1) {
										RTHOOK(18);
										RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
										
										Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5451, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									} else {
										RTHOOK(19);
										RTDBGAL(Current, 0, 0xF80000D9, 0,0); /* Result */
										
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4387, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										Result = (EIF_REFERENCE) RTCCL(tr1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {HTTP_REQUEST_METHODS}.method_head */
RTOID (F894_7562)


EIF_TYPED_VALUE F894_7562 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F894_7562,13125,RTMS_EX_H("HEAD",4,1212498244));
}

/* {HTTP_REQUEST_METHODS}.method_get */
RTOID (F894_7563)


EIF_TYPED_VALUE F894_7563 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F894_7563,13126,RTMS_EX_H("GET",3,4670804));
}

/* {HTTP_REQUEST_METHODS}.method_trace */
RTOID (F894_7564)


EIF_TYPED_VALUE F894_7564 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F894_7564,13117,RTMS_EX_H("TRACE",5,1380653893));
}

/* {HTTP_REQUEST_METHODS}.method_options */
RTOID (F894_7565)


EIF_TYPED_VALUE F894_7565 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F894_7565,13118,RTMS_EX_H("OPTIONS",7,347751251));
}

/* {HTTP_REQUEST_METHODS}.method_post */
RTOID (F894_7566)


EIF_TYPED_VALUE F894_7566 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F894_7566,13119,RTMS_EX_H("POST",4,1347375956));
}

/* {HTTP_REQUEST_METHODS}.method_put */
RTOID (F894_7567)


EIF_TYPED_VALUE F894_7567 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F894_7567,13120,RTMS_EX_H("PUT",3,5264724));
}

/* {HTTP_REQUEST_METHODS}.method_delete */
RTOID (F894_7568)


EIF_TYPED_VALUE F894_7568 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F894_7568,13121,RTMS_EX_H("DELETE",6,1413835333));
}

/* {HTTP_REQUEST_METHODS}.method_connect */
RTOID (F894_7569)


EIF_TYPED_VALUE F894_7569 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F894_7569,13122,RTMS_EX_H("CONNECT",7,831608660));
}

/* {HTTP_REQUEST_METHODS}.method_patch */
RTOID (F894_7570)


EIF_TYPED_VALUE F894_7570 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F894_7570,13123,RTMS_EX_H("PATCH",5,1096655688));
}

void EIF_Minit894 (void)
{
	GTCX
	RTOTS (7562,F894_7562)
	RTOTS (7563,F894_7563)
	RTOTS (7564,F894_7564)
	RTOTS (7565,F894_7565)
	RTOTS (7566,F894_7566)
	RTOTS (7567,F894_7567)
	RTOTS (7568,F894_7568)
	RTOTS (7569,F894_7569)
	RTOTS (7570,F894_7570)
}


#ifdef __cplusplus
}
#endif
