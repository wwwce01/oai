/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_Criticality_H_
#define	_X2AP_Criticality_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_Criticality {
	X2AP_Criticality_reject	= 0,
	X2AP_Criticality_ignore	= 1,
	X2AP_Criticality_notify	= 2
} e_X2AP_Criticality;

/* X2AP_Criticality */
typedef long	 X2AP_Criticality_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_Criticality_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_Criticality;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_Criticality_specs_1;
asn_struct_free_f X2AP_Criticality_free;
asn_struct_print_f X2AP_Criticality_print;
asn_constr_check_f X2AP_Criticality_constraint;
ber_type_decoder_f X2AP_Criticality_decode_ber;
der_type_encoder_f X2AP_Criticality_encode_der;
xer_type_decoder_f X2AP_Criticality_decode_xer;
xer_type_encoder_f X2AP_Criticality_encode_xer;
per_type_decoder_f X2AP_Criticality_decode_uper;
per_type_encoder_f X2AP_Criticality_encode_uper;
per_type_decoder_f X2AP_Criticality_decode_aper;
per_type_encoder_f X2AP_Criticality_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_Criticality_H_ */
#include <asn_internal.h>
