/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_CauseProtocol_H_
#define	_X2AP_CauseProtocol_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_CauseProtocol {
	X2AP_CauseProtocol_transfer_syntax_error	= 0,
	X2AP_CauseProtocol_abstract_syntax_error_reject	= 1,
	X2AP_CauseProtocol_abstract_syntax_error_ignore_and_notify	= 2,
	X2AP_CauseProtocol_message_not_compatible_with_receiver_state	= 3,
	X2AP_CauseProtocol_semantic_error	= 4,
	X2AP_CauseProtocol_unspecified	= 5,
	X2AP_CauseProtocol_abstract_syntax_error_falsely_constructed_message	= 6
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_CauseProtocol;

/* X2AP_CauseProtocol */
typedef long	 X2AP_CauseProtocol_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_CauseProtocol_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_CauseProtocol;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_CauseProtocol_specs_1;
asn_struct_free_f X2AP_CauseProtocol_free;
asn_struct_print_f X2AP_CauseProtocol_print;
asn_constr_check_f X2AP_CauseProtocol_constraint;
ber_type_decoder_f X2AP_CauseProtocol_decode_ber;
der_type_encoder_f X2AP_CauseProtocol_encode_der;
xer_type_decoder_f X2AP_CauseProtocol_decode_xer;
xer_type_encoder_f X2AP_CauseProtocol_encode_xer;
per_type_decoder_f X2AP_CauseProtocol_decode_uper;
per_type_encoder_f X2AP_CauseProtocol_encode_uper;
per_type_decoder_f X2AP_CauseProtocol_decode_aper;
per_type_encoder_f X2AP_CauseProtocol_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_CauseProtocol_H_ */
#include <asn_internal.h>