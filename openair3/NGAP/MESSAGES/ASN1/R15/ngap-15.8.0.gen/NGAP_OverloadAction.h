/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_OverloadAction_H_
#define	_NGAP_OverloadAction_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_OverloadAction {
	NGAP_OverloadAction_reject_non_emergency_mo_dt	= 0,
	NGAP_OverloadAction_reject_rrc_cr_signalling	= 1,
	NGAP_OverloadAction_permit_emergency_sessions_and_mobile_terminated_services_only	= 2,
	NGAP_OverloadAction_permit_high_priority_sessions_and_mobile_terminated_services_only	= 3
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_OverloadAction;

/* NGAP_OverloadAction */
typedef long	 NGAP_OverloadAction_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_OverloadAction_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_OverloadAction;
extern const asn_INTEGER_specifics_t asn_SPC_NGAP_OverloadAction_specs_1;
asn_struct_free_f NGAP_OverloadAction_free;
asn_struct_print_f NGAP_OverloadAction_print;
asn_constr_check_f NGAP_OverloadAction_constraint;
ber_type_decoder_f NGAP_OverloadAction_decode_ber;
der_type_encoder_f NGAP_OverloadAction_encode_der;
xer_type_decoder_f NGAP_OverloadAction_decode_xer;
xer_type_encoder_f NGAP_OverloadAction_encode_xer;
per_type_decoder_f NGAP_OverloadAction_decode_uper;
per_type_encoder_f NGAP_OverloadAction_encode_uper;
per_type_decoder_f NGAP_OverloadAction_decode_aper;
per_type_encoder_f NGAP_OverloadAction_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_OverloadAction_H_ */
#include <asn_internal.h>
