/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D R15.2.1/f1ap-15.2.1.gen/`
 */

#ifndef	_F1AP_PriorityLevel_H_
#define	_F1AP_PriorityLevel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_PriorityLevel {
	F1AP_PriorityLevel_spare	= 0,
	F1AP_PriorityLevel_highest	= 1,
	F1AP_PriorityLevel_lowest	= 14,
	F1AP_PriorityLevel_no_priority	= 15
} e_F1AP_PriorityLevel;

/* F1AP_PriorityLevel */
typedef long	 F1AP_PriorityLevel_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_PriorityLevel_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_PriorityLevel;
asn_struct_free_f F1AP_PriorityLevel_free;
asn_struct_print_f F1AP_PriorityLevel_print;
asn_constr_check_f F1AP_PriorityLevel_constraint;
ber_type_decoder_f F1AP_PriorityLevel_decode_ber;
der_type_encoder_f F1AP_PriorityLevel_encode_der;
xer_type_decoder_f F1AP_PriorityLevel_decode_xer;
xer_type_encoder_f F1AP_PriorityLevel_encode_xer;
per_type_decoder_f F1AP_PriorityLevel_decode_uper;
per_type_encoder_f F1AP_PriorityLevel_encode_uper;
per_type_decoder_f F1AP_PriorityLevel_decode_aper;
per_type_encoder_f F1AP_PriorityLevel_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_PriorityLevel_H_ */
#include <asn_internal.h>