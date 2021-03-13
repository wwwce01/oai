/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_DataForwardingNotPossible_H_
#define	_NGAP_DataForwardingNotPossible_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_DataForwardingNotPossible {
	NGAP_DataForwardingNotPossible_data_forwarding_not_possible	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_DataForwardingNotPossible;

/* NGAP_DataForwardingNotPossible */
typedef long	 NGAP_DataForwardingNotPossible_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_DataForwardingNotPossible_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_DataForwardingNotPossible;
extern const asn_INTEGER_specifics_t asn_SPC_NGAP_DataForwardingNotPossible_specs_1;
asn_struct_free_f NGAP_DataForwardingNotPossible_free;
asn_struct_print_f NGAP_DataForwardingNotPossible_print;
asn_constr_check_f NGAP_DataForwardingNotPossible_constraint;
ber_type_decoder_f NGAP_DataForwardingNotPossible_decode_ber;
der_type_encoder_f NGAP_DataForwardingNotPossible_encode_der;
xer_type_decoder_f NGAP_DataForwardingNotPossible_decode_xer;
xer_type_encoder_f NGAP_DataForwardingNotPossible_encode_xer;
per_type_decoder_f NGAP_DataForwardingNotPossible_decode_uper;
per_type_encoder_f NGAP_DataForwardingNotPossible_encode_uper;
per_type_decoder_f NGAP_DataForwardingNotPossible_decode_aper;
per_type_encoder_f NGAP_DataForwardingNotPossible_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_DataForwardingNotPossible_H_ */
#include <asn_internal.h>
