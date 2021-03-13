/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_DirectForwardingPathAvailability_H_
#define	_NGAP_DirectForwardingPathAvailability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_DirectForwardingPathAvailability {
	NGAP_DirectForwardingPathAvailability_direct_path_available	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_DirectForwardingPathAvailability;

/* NGAP_DirectForwardingPathAvailability */
typedef long	 NGAP_DirectForwardingPathAvailability_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_DirectForwardingPathAvailability_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_DirectForwardingPathAvailability;
extern const asn_INTEGER_specifics_t asn_SPC_NGAP_DirectForwardingPathAvailability_specs_1;
asn_struct_free_f NGAP_DirectForwardingPathAvailability_free;
asn_struct_print_f NGAP_DirectForwardingPathAvailability_print;
asn_constr_check_f NGAP_DirectForwardingPathAvailability_constraint;
ber_type_decoder_f NGAP_DirectForwardingPathAvailability_decode_ber;
der_type_encoder_f NGAP_DirectForwardingPathAvailability_encode_der;
xer_type_decoder_f NGAP_DirectForwardingPathAvailability_decode_xer;
xer_type_encoder_f NGAP_DirectForwardingPathAvailability_encode_xer;
per_type_decoder_f NGAP_DirectForwardingPathAvailability_decode_uper;
per_type_encoder_f NGAP_DirectForwardingPathAvailability_encode_uper;
per_type_decoder_f NGAP_DirectForwardingPathAvailability_decode_aper;
per_type_encoder_f NGAP_DirectForwardingPathAvailability_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_DirectForwardingPathAvailability_H_ */
#include <asn_internal.h>