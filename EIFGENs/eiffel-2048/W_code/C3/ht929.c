/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F929_7965(EIF_REFERENCE);
extern EIF_TYPED_VALUE F929_7966(EIF_REFERENCE);
extern EIF_TYPED_VALUE F929_7967(EIF_REFERENCE);
extern EIF_TYPED_VALUE F929_7968(EIF_REFERENCE);
extern EIF_TYPED_VALUE F929_7969(EIF_REFERENCE);
extern EIF_TYPED_VALUE F929_7970(EIF_REFERENCE);
extern void EIF_Minit929(void);

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

/* {HTTP_CONSTANTS}.default_http_port */
EIF_TYPED_VALUE F929_7965 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F929_7966 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F929_7967)


EIF_TYPED_VALUE F929_7967 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F929_7967,13466,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F929_7968)


EIF_TYPED_VALUE F929_7968 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F929_7968,13467,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F929_7969)


EIF_TYPED_VALUE F929_7969 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F929_7969,13468,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F929_7970 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit929 (void)
{
	GTCX
	RTOTS (7967,F929_7967)
	RTOTS (7968,F929_7968)
	RTOTS (7969,F929_7969)
}


#ifdef __cplusplus
}
#endif
