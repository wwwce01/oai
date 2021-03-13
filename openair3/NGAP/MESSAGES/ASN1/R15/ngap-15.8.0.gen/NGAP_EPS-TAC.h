/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_EPS_TAC_H_
#define	_NGAP_EPS_TAC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGAP_EPS-TAC */
typedef OCTET_STRING_t	 NGAP_EPS_TAC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_EPS_TAC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_EPS_TAC;
asn_struct_free_f NGAP_EPS_TAC_free;
asn_struct_print_f NGAP_EPS_TAC_print;
asn_constr_check_f NGAP_EPS_TAC_constraint;
ber_type_decoder_f NGAP_EPS_TAC_decode_ber;
der_type_encoder_f NGAP_EPS_TAC_encode_der;
xer_type_decoder_f NGAP_EPS_TAC_decode_xer;
xer_type_encoder_f NGAP_EPS_TAC_encode_xer;
per_type_decoder_f NGAP_EPS_TAC_decode_uper;
per_type_encoder_f NGAP_EPS_TAC_encode_uper;
per_type_decoder_f NGAP_EPS_TAC_decode_aper;
per_type_encoder_f NGAP_EPS_TAC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_EPS_TAC_H_ */
#include <asn_internal.h>
