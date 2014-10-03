/*
 * Code for class APP_2048_WEB
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F942_8145(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_8146(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_8147(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_8148(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_8149(EIF_REFERENCE);
extern void F942_8150(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F942_8151(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F942_8152(EIF_REFERENCE);
extern void EIF_Minit942(void);

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

/* {APP_2048_WEB}.controller */
EIF_TYPED_VALUE F942_8145 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5939,Dtype(Current)));
	return r;
}


/* {APP_2048_WEB}.is_attached */
EIF_TYPED_VALUE F942_8146 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5940,Dtype(Current)));
	return r;
}


/* {APP_2048_WEB}.cont */
EIF_TYPED_VALUE F942_8147 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5941,Dtype(Current)));
	return r;
}


/* {APP_2048_WEB}.user */
EIF_TYPED_VALUE F942_8148 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5942,Dtype(Current)));
	return r;
}


/* {APP_2048_WEB}.new_user */
EIF_TYPED_VALUE F942_8149 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5943,Dtype(Current)));
	return r;
}


/* {APP_2048_WEB}.login */
void F942_8150 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "login";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc1);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 941, Current, 1, 2, 13648);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(941, Current, 13648);
	if (arg1) {
		RTCC(arg1, 941, l_feature_name, 1, 219);
	}
	if (arg2) {
		RTCC(arg2, 941, l_feature_name, 2, 219);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = '\0';
		tr1 = RTLN(931);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5784, Dtype(tr1)))(tr1);
		RTNHOOK(1,1);
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5796, "is_valid_nickname", tr1))(tr1, ur1x)).it_b);
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(arg2 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80003A3, 0, 0); /* loc1 */
	
	tr1 = RTLN(931);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5782, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5791, "has_unfinished_game", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5793, "load_game", loc1))(loc1);
		RTHOOK(5);
		ur1 = RTCCL(arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5788, "password", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5942, 0xF80003A3, 0); /* user */
			
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + RTWA(5942, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
		} else {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5942, 0xF80003A3, 0); /* user */
			
			*(EIF_REFERENCE *)(Current + RTWA(5942, dtype)) = (EIF_REFERENCE) NULL;
		}
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5942, 0xF80003A3, 0); /* user */
		
		*(EIF_REFERENCE *)(Current + RTWA(5942, dtype)) = (EIF_REFERENCE) NULL;
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
#undef ur2
#undef arg2
#undef arg1
}

/* {APP_2048_WEB}.response */
EIF_TYPED_VALUE F942_8151 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "response";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(24);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLR(7,tr2);
	RTLR(8,loc3);
	RTLR(9,loc4);
	RTLR(10,ur2);
	RTLR(11,tr3);
	RTLR(12,loc5);
	RTLR(13,loc6);
	RTLR(14,loc7);
	RTLR(15,loc8);
	RTLR(16,tr4);
	RTLR(17,ur3);
	RTLR(18,tr5);
	RTLR(19,ur4);
	RTLR(20,loc9);
	RTLR(21,loc10);
	RTLR(22,loc11);
	RTLR(23,loc12);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 941, Current, 12, 1, 13649);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(941, Current, 13649);
	if (arg1) {
		RTCC(arg1, 941, l_feature_name, 1, 975);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000381, 0,0); /* Result */
	
	tr1 = RTLN(897);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5470, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr1 = RTMS_EX_H("login",5,1869877614);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5941, 0x10000000, 1); /* cont */
			
			*(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(5);
			tr1 = RTMS_EX_H("register",8,1462035314);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 5941, 0x10000000, 1); /* cont */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(7);
				tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
				tr2 = RTMS_EX_H("<form action=\"/\" method=\"POST\">\012\011<input type=\"submit\" name=\"login\" value=\"Login\"/>\012\011<input type=\"submit\" name=\"register\" value=\"Register\"/>\012</form>",147,454612542);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTMS_EX_H("</div>",6,1802958910);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
			}
		}
	}
	RTHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(9);
		tb1 = '\0';
		tr1 = RTMS_EX_H("nickname",8,1233921637);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if ((EIF_TEST(loc3))) {
			tr1 = RTMS_EX_H("password",8,1686242660);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = RTCCL(tr1);
			tb1 = (EIF_TEST(loc4));
		}
		if (tb1) {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 5939, 0xF8000366, 0); /* controller */
			
			tr1 = RTLNSMART(eif_non_attached_type(RTWCT(5939, dtype, Dftype(Current))));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5021, Dtype(tr1)))(tr1);
			RTNHOOK(10,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(5939, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5944, dtype))(Current, ur1x, ur2x);
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5942, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				RTHOOK(13);
				tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
				tr2 = RTMS_EX_H("<form action=\"/\" method=\"POST\">\012\011<p>invalid nickname or password</p>\012\011<p>try again</p>\012\011<br>\012\011<br>\012\011<p>Insert your nickname</p>\012\011<input type=\"text\" name=\"nickname\"/>\012\011<p>Insert your password</p>\012\011<input type=\"text\" name=\"password\"/>\012\011<br>\012\011<input type=\"submit\" value=\"Login\"/>\012</form>",284,1202399806);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTMS_EX_H("</div>",6,1802958910);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
			} else {
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5942, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(14,2);
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5789, "game", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5020, "make_with_board", tr1))(tr1, ur1x);
				RTHOOK(15);
				RTDBGAA(Current, dtype, 5941, 0x10000000, 1); /* cont */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			}
		} else {
			RTHOOK(16);
			tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
			tr2 = RTMS_EX_H("<form action=\"/\" method=\"POST\">\012\011<p>Insert your nickname</p>\012\011<input type=\"text\" name=\"nickname\"/>\012\011<p>Insert your password</p>\012\011<input type=\"text\" name=\"password\"/>\012\011<br>\012\011<input type=\"submit\" value=\"Login\"/>\012</form>",217,1876811070);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTMS_EX_H("</div>",6,1802958910);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
		}
	}
	RTHOOK(17);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
		RTHOOK(18);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tr1 = RTMS_EX_H("name",4,1851878757);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = RTCCL(tr1);
		if ((EIF_TEST(loc5))) {
			tr1 = RTMS_EX_H("surname",7,1982226021);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = RTCCL(tr1);
			tb3 = (EIF_TEST(loc6));
		}
		if (tb3) {
			tr1 = RTMS_EX_H("nickname",8,1233921637);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = RTCCL(tr1);
			tb2 = (EIF_TEST(loc7));
		}
		if (tb2) {
			tr1 = RTMS_EX_H("password",8,1686242660);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc8 = RTCCL(tr1);
			tb1 = (EIF_TEST(loc8));
		}
		if (tb1) {
			RTHOOK(19);
			RTDBGAA(Current, dtype, 5939, 0xF8000366, 0); /* controller */
			
			tr1 = RTLNSMART(eif_non_attached_type(RTWCT(5939, dtype, Dftype(Current))));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5021, Dtype(tr1)))(tr1);
			RTNHOOK(19,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(5939, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			RTDBGAA(Current, dtype, 5943, 0xF80003A3, 0); /* new_user */
			
			tr1 = RTLNSMART(eif_non_attached_type(RTWCT(5943, dtype, Dftype(Current))));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5784, Dtype(tr1)))(tr1);
			RTNHOOK(20,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(5943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(21);
			tb1 = '\0';
			tb2 = '\0';
			tb3 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5943, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc5))(loc5)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5794, "is_valid_name", tr1))(tr1, ur1x)).it_b);
			if (tb4) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5943, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,2);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc6))(loc6)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5794, "is_valid_name", tr1))(tr1, ur1x)).it_b);
				tb3 = tb4;
			}
			if (tb3) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5943, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,3);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc7))(loc7)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5794, "is_valid_name", tr1))(tr1, ur1x)).it_b);
				tb2 = tb3;
			}
			if (tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5943, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,4);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc8))(loc8)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5795, "is_valid_password", tr1))(tr1, ur1x)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(22);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5943, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc7))(loc7)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5797, "existing_file", tr1))(tr1, ur1x)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(23);
					RTDBGAA(Current, dtype, 5942, 0xF80003A3, 0); /* user */
					
					tr1 = RTLNSMART(eif_non_attached_type(RTWCT(5942, dtype, Dftype(Current))));
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr2);
					tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur2 = RTCCL(tr3);
					tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur3 = RTCCL(tr4);
					tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4381, "as_string_8", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur4 = RTCCL(tr5);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5781, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x);
					RTNHOOK(23,1);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(5942, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(24);
					RTDBGAA(Current, dtype, 5941, 0x10000000, 1); /* cont */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(25);
					tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
					tr2 = RTMS_EX_H("<form action=\"/\" method=\"POST\">\012\011<p>Nickname already exists</p>\012\011<br>\012\011<br>\012\011<p>Insert your name</p>\012\011<input type=\"text\" name=\"name\"/>\012\011<p>Insert your surname</p>\012\011<input type=\"text\" name=\"surname\"/>\012\011<p>Insert your nickname</p>\012\011<input type=\"text\" name=\"nickname\"/>\012\011<p>Insert your password</p>\012\011<input type=\"text\" name=\"password\"/>\012\011<br>\012\011<input type=\"submit\" value=\"Register\"/>\012</form>",388,1122299710);
					ur1 = tr2;
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTMS_EX_H("</div>",6,1802958910);
					ur1 = tr1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
				}
			} else {
				RTHOOK(26);
				tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
				tr2 = RTMS_EX_H("<form action=\"/\" method=\"POST\">\012\011<p>Invalid data, Please ensure to enter the data correctly</p>\012\011<br>\012\011<br>\012\011<p>Insert your name</p>\012\011<input type=\"text\" name=\"name\"/>\012\011<p>Insert your surname</p>\012\011<input type=\"text\" name=\"surname\"/>\012\011<p>Insert your nickname</p>\012\011<input type=\"text\" name=\"nickname\"/>\012\011<p>Insert your password</p>\012\011<input type=\"text\" name=\"password\"/>\012\011<br>\012\011<input type=\"submit\" value=\"Register\"/>\012</form>",420,1976645182);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTMS_EX_H("</div>",6,1802958910);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
			}
		} else {
			RTHOOK(27);
			tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
			tr2 = RTMS_EX_H("<form action=\"/\" method=\"POST\">\012\011<p>Insert your name</p>\012\011<input type=\"text\" name=\"name\"/>\012\011<p>Insert your surname</p>\012\011<input type=\"text\" name=\"surname\"/>\012\011<p>Insert your nickname</p>\012\011<input type=\"text\" name=\"nickname\"/>\012\011<p>Insert your password</p>\012\011<input type=\"text\" name=\"password\"/>\012\011<br>\012\011<input type=\"submit\" value=\"Register\"/>\012</form>",344,1478257982);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTMS_EX_H("</div>",6,1802958910);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
		}
	}
	RTHOOK(28);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
		RTHOOK(29);
		tr1 = RTMS_EX_H("http://code.jquery.com/jquery-latest.min.js",43,404073587);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5484, "add_javascript_url", Result))(Result, ur1x);
		RTHOOK(30);
		tr1 = RTMS_EX_H("function getChoice(keyCode){var ret=\'\';if (keyCode == 119)ret = \'w\';if (keyCode == 115)ret = \'s\';if (keyCode == 100)ret = \'d\';if (keyCode == 97)ret = \'a\';return ret;}",166,1723375741);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5485, "add_javascript_content", Result))(Result, ur1x);
		RTHOOK(31);
		tr1 = RTMS_EX_H("$(document).keypress(function (e) {var key = getChoice(e.keyCode);if(key != \'\'){$.ajax({type : \'POST\',url:\'http://localhost:9999/\',data:{user:key},contentType:\'json\',headers: {Accept : \'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8\',\'Content-Type\': \'application/x-www-form-urlencoded\'}}).done(function(data){document.open();document.write(data);document.close();})}})",396,1128909609);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5485, "add_javascript_content", Result))(Result, ur1x);
		RTHOOK(32);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5940, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(33);
			RTDBGAA(Current, dtype, 5940, 0x04000000, 1); /* is_attached */
			
			*(EIF_BOOLEAN *)(Current + RTWA(5940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(34);
			tr1 = RTMS_EX_H("<link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",154,889975358);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(34,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(34,2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTMS_EX_H("<br><br><div align=\'center\' >  <form action=\'/\' method=\'POST\'> <input type=\'submit\' name=\'q\' value=\'Quit\'/> <input type=\'submit\' name=\'saq\' value=\'Save and Quit\'/> </form></div>",177,2112386622);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
		} else {
			RTHOOK(35);
			tr1 = RTMS_EX_H("user",4,1970496882);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc9 = RTCCL(tr1);
			if (EIF_TEST(loc9)) {
				RTHOOK(36);
				tr1 = RTMS_EX_H("w",1,119);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4384, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc9))(loc9, ur1x)).it_b);
				if (tb1) {
					RTHOOK(37);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(37,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(37,2);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4964, "can_move_up", tr2))(tr2)).it_b);
					if (tb1) {
						RTHOOK(38);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(38,1);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5026, "up", tr1))(tr1);
					}
				}
				RTHOOK(39);
				tr1 = RTMS_EX_H("s",1,115);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4384, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc9))(loc9, ur1x)).it_b);
				if (tb1) {
					RTHOOK(40);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(40,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(40,2);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4965, "can_move_down", tr2))(tr2)).it_b);
					if (tb1) {
						RTHOOK(41);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(41,1);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5027, "down", tr1))(tr1);
					}
				}
				RTHOOK(42);
				tr1 = RTMS_EX_H("a",1,97);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4384, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc9))(loc9, ur1x)).it_b);
				if (tb1) {
					RTHOOK(43);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(43,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(43,2);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4962, "can_move_left", tr2))(tr2)).it_b);
					if (tb1) {
						RTHOOK(44);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(44,1);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5028, "left", tr1))(tr1);
					}
				}
				RTHOOK(45);
				tr1 = RTMS_EX_H("d",1,100);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4384, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc9))(loc9, ur1x)).it_b);
				if (tb1) {
					RTHOOK(46);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(46,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(46,2);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4963, "can_move_right", tr2))(tr2)).it_b);
					if (tb1) {
						RTHOOK(47);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(47,1);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5029, "right", tr1))(tr1);
					}
				}
				RTHOOK(48);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(48,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(48,2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4966, "is_winning_board", tr2))(tr2)).it_b);
				if (tb1) {
					RTHOOK(49);
					RTDBGAA(Current, dtype, 5941, 0x10000000, 1); /* cont */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
					RTHOOK(50);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(50,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5021, "make", tr1))(tr1);
					RTHOOK(51);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5942, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(51,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(51,2);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur1 = RTCCL(tr3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5792, "save_game", tr1))(tr1, ur1x);
				}
				RTHOOK(52);
				tb1 = '\0';
				tb2 = '\0';
				tb3 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(52,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(52,2);
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4964, "can_move_up", tr2))(tr2)).it_b);
				if ((EIF_BOOLEAN) !tb4) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(52,3);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(52,4);
					tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4965, "can_move_down", tr2))(tr2)).it_b);
					tb3 = (EIF_BOOLEAN) !tb4;
				}
				if (tb3) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(52,5);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(52,6);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4962, "can_move_left", tr2))(tr2)).it_b);
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(52,7);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(52,8);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4963, "can_move_right", tr2))(tr2)).it_b);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					RTHOOK(53);
					RTDBGAA(Current, dtype, 5941, 0x10000000, 1); /* cont */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
				}
				RTHOOK(54);
				tr1 = RTMS_EX_H("<link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",154,889975358);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(54,1);
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(54,2);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTMS_EX_H("<br><br><div align=\'center\' > <form action=\'/\' method=\'POST\'> <input type=\'submit\' name=\'q\' value=\'Quit\'/> <input type=\'submit\' name=\'saq\' value=\'Save and Quit\'/> </form></div>",176,1064041278);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
			}
			RTHOOK(55);
			tr1 = RTMS_EX_H("q",1,113);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc10 = RTCCL(tr1);
			if (EIF_TEST(loc10)) {
				RTHOOK(56);
				RTDBGAA(Current, dtype, 5941, 0x10000000, 1); /* cont */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			} else {
				RTHOOK(57);
				tr1 = RTMS_EX_H("saq",3,7561585);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc11 = RTCCL(tr1);
				if (EIF_TEST(loc11)) {
					RTHOOK(58);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5942, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(58,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(58,2);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5023, "board", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur1 = RTCCL(tr3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5792, "save_game", tr1))(tr1, ur1x);
					RTHOOK(59);
					RTDBGAA(Current, dtype, 5941, 0x10000000, 1); /* cont */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				}
			}
		}
	}
	RTHOOK(60);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
		RTHOOK(61);
		tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
		tr2 = RTMS_EX_H("<a> QUIT <a>",12,1755650878);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
	}
	RTHOOK(62);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5L))) {
		RTHOOK(63);
		tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
		tr2 = RTMS_EX_H("<a> SAVE AND QUIT <a>",21,1857137214);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
	}
	RTHOOK(64);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 6L))) {
		RTHOOK(65);
		tr1 = RTMS_EX_H("newg",4,1852143463);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6467, "string_item", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc12 = RTCCL(tr1);
		if (EIF_TEST(loc12)) {
			RTHOOK(66);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5939, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(66,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5021, "make", tr1))(tr1);
			RTHOOK(67);
			RTDBGAA(Current, dtype, 5940, 0x04000000, 1); /* is_attached */
			
			*(EIF_BOOLEAN *)(Current + RTWA(5940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(68);
			RTDBGAA(Current, dtype, 5941, 0x10000000, 1); /* cont */
			
			*(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
		} else {
			RTHOOK(69);
			tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
			tr2 = RTMS_EX_H("<a> GAME OVER<a>",16,434923582);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTMS_EX_H("<form action=\"/\" method=\"POST\">\012\011\011<br>\012\011\011<br>\012\011<input type=\"submit\" name=\"newg\" value=\"New game\"/>\012</form>",106,196055358);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H("</div>",6,1802958910);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
		}
	}
	RTHOOK(70);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5941, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 7L))) {
		RTHOOK(71);
		tr1 = RTMS_EX_H("<div align=\'center\' ><link rel=\'stylesheet\' type=\'text/css\' href=\'https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css\'>",175,1095411774);
		tr2 = RTMS_EX_H("<a>CONGRATULATIONS! YOU WIN THE GAMEe<a>",40,1308425790);
		ur1 = tr2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4404, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5486, "set_body", Result))(Result, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(72);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(73);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef arg1
}

/* {APP_2048_WEB}.initialize */
void F942_8152 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 941, Current, 0, 0, 13650);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(941, Current, 13650);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5934, 0xF80003C7, 0); /* service_options */
	
	tr1 = RTLN(968);
	tr2 = RTMS_EX_H("ewf.ini",7,308857449);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6333, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5934, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5933, 940))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

void EIF_Minit942 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
