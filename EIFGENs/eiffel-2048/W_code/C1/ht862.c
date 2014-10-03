/*
 * Code for class HTTP_SERVER_CONFIGURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F862_6966(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6967(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6968(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6969(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6970(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6971(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6972(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6973(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6974(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6975(EIF_REFERENCE);
extern void F862_6976(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F862_6977(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F862_6978(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F862_6979(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F862_6980(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F862_6981(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F862_6982(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F862_6983(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit862(void);

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

/* {HTTP_SERVER_CONFIGURATION}.make */
void F862_6966 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12612);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(861, Current, 12612);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4898, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4898, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4899, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4899, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 4900, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4900, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 4901, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4901, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5000L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 4896, 0xF80000DB, 0); /* document_root */
	
	tr1 = RTMS_EX_H("htdocs",6,1890384755);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4896, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 4902, 0x04000000, 1); /* force_single_threaded */
	
	*(EIF_BOOLEAN *)(Current + RTWA(4902, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTP_SERVER_CONFIGURATION}.server_details */
RTOID (F862_6967)


EIF_TYPED_VALUE F862_6967 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F862_6967,12614,RTMS_EX_H("Server : NINO Eiffel Server",27,1169312370));
}

/* {HTTP_SERVER_CONFIGURATION}.document_root */
EIF_TYPED_VALUE F862_6968 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4896,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.http_server_name */
EIF_TYPED_VALUE F862_6969 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4897,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.http_server_port */
EIF_TYPED_VALUE F862_6970 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4898,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.max_tcp_clients */
EIF_TYPED_VALUE F862_6971 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4899,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.socket_accept_timeout */
EIF_TYPED_VALUE F862_6972 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4900,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.socket_connect_timeout */
EIF_TYPED_VALUE F862_6973 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4901,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.force_single_threaded */
EIF_TYPED_VALUE F862_6974 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(4902,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.is_verbose */
EIF_TYPED_VALUE F862_6975 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(4903,Dtype(Current)));
	return r;
}


/* {HTTP_SERVER_CONFIGURATION}.set_http_server_name */
void F862_6976 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_http_server_name";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12604);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12604);
	RTCC(arg1, 861, l_feature_name, 1, RTWCT(4897, Dtype(Current), Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4897, 0xF80000DB, 0); /* http_server_name */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(4897, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION}.set_http_server_port */
void F862_6977 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_http_server_port";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12605);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12605);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4898, 0x10000000, 1); /* http_server_port */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4898, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION}.set_document_root */
void F862_6978 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_document_root";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12606);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12606);
	RTCC(arg1, 861, l_feature_name, 1, eif_attached_type(RTWCT(4896, Dtype(Current), Dftype(Current))));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4896, 0xF80000DB, 0); /* document_root */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(4896, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION}.set_max_tcp_clients */
void F862_6979 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_max_tcp_clients";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12607);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12607);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4899, 0x10000000, 1); /* max_tcp_clients */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4899, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION}.set_socket_accept_timeout */
void F862_6980 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_socket_accept_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12608);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12608);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4900, 0x10000000, 1); /* socket_accept_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4900, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION}.set_socket_connect_timeout */
void F862_6981 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_socket_connect_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12609);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12609);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4901, 0x10000000, 1); /* socket_connect_timeout */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(4901, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION}.set_force_single_threaded */
void F862_6982 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_force_single_threaded";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12610);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12610);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4902, 0x04000000, 1); /* force_single_threaded */
	
	*(EIF_BOOLEAN *)(Current + RTWA(4902, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {HTTP_SERVER_CONFIGURATION}.set_is_verbose */
void F862_6983 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_verbose";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12611);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(861, Current, 12611);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4903, 0x04000000, 1); /* is_verbose */
	
	*(EIF_BOOLEAN *)(Current + RTWA(4903, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit862 (void)
{
	GTCX
	RTOTS (6967,F862_6967)
}


#ifdef __cplusplus
}
#endif
