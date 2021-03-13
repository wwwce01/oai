/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_PA_Values_H_
#define	_X2AP_PA_Values_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_PA_Values {
	X2AP_PA_Values_dB_6	= 0,
	X2AP_PA_Values_dB_4dot77	= 1,
	X2AP_PA_Values_dB_3	= 2,
	X2AP_PA_Values_dB_1dot77	= 3,
	X2AP_PA_Values_dB0	= 4,
	X2AP_PA_Values_dB1	= 5,
	X2AP_PA_Values_dB2	= 6,
	X2AP_PA_Values_dB3	= 7
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_PA_Values;

/* X2AP_PA-Values */
typedef long	 X2AP_PA_Values_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_PA_Values_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_PA_Values;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_PA_Values_specs_1;
asn_struct_free_f X2AP_PA_Values_free;
asn_struct_print_f X2AP_PA_Values_print;
asn_constr_check_f X2AP_PA_Values_constraint;
ber_type_decoder_f X2AP_PA_Values_decode_ber;
der_type_encoder_f X2AP_PA_Values_encode_der;
xer_type_decoder_f X2AP_PA_Values_decode_xer;
xer_type_encoder_f X2AP_PA_Values_encode_xer;
per_type_decoder_f X2AP_PA_Values_decode_uper;
per_type_encoder_f X2AP_PA_Values_encode_uper;
per_type_decoder_f X2AP_PA_Values_decode_aper;
per_type_encoder_f X2AP_PA_Values_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_PA_Values_H_ */
#include <asn_internal.h>
