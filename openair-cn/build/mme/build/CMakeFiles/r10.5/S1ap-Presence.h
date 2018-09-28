/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "/home/nano/openair-cn/src/s1ap/messages/asn1/r10.5/S1AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_Presence_H_
#define	_S1ap_Presence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_Presence {
	S1ap_Presence_optional	= 0,
	S1ap_Presence_conditional	= 1,
	S1ap_Presence_mandatory	= 2
} e_S1ap_Presence;

/* S1ap-Presence */
typedef long	 S1ap_Presence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_Presence;
asn_struct_free_f S1ap_Presence_free;
asn_struct_print_f S1ap_Presence_print;
asn_constr_check_f S1ap_Presence_constraint;
ber_type_decoder_f S1ap_Presence_decode_ber;
der_type_encoder_f S1ap_Presence_encode_der;
xer_type_decoder_f S1ap_Presence_decode_xer;
xer_type_encoder_f S1ap_Presence_encode_xer;
per_type_decoder_f S1ap_Presence_decode_uper;
per_type_encoder_f S1ap_Presence_encode_uper;
per_type_decoder_f S1ap_Presence_decode_aper;
per_type_encoder_f S1ap_Presence_encode_aper;
type_compare_f     S1ap_Presence_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_Presence_H_ */
#include <asn_internal.h>