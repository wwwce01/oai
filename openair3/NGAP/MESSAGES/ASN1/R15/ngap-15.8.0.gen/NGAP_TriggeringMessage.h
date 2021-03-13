/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_TriggeringMessage_H_
#define	_NGAP_TriggeringMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_TriggeringMessage {
	NGAP_TriggeringMessage_initiating_message	= 0,
	NGAP_TriggeringMessage_successful_outcome	= 1,
	NGAP_TriggeringMessage_unsuccessfull_outcome	= 2
} e_NGAP_TriggeringMessage;

/* NGAP_TriggeringMessage */
typedef long	 NGAP_TriggeringMessage_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_TriggeringMessage_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_TriggeringMessage;
extern const asn_INTEGER_specifics_t asn_SPC_NGAP_TriggeringMessage_specs_1;
asn_struct_free_f NGAP_TriggeringMessage_free;
asn_struct_print_f NGAP_TriggeringMessage_print;
asn_constr_check_f NGAP_TriggeringMessage_constraint;
ber_type_decoder_f NGAP_TriggeringMessage_decode_ber;
der_type_encoder_f NGAP_TriggeringMessage_encode_der;
xer_type_decoder_f NGAP_TriggeringMessage_decode_xer;
xer_type_encoder_f NGAP_TriggeringMessage_encode_xer;
per_type_decoder_f NGAP_TriggeringMessage_decode_uper;
per_type_encoder_f NGAP_TriggeringMessage_encode_uper;
per_type_decoder_f NGAP_TriggeringMessage_decode_aper;
per_type_encoder_f NGAP_TriggeringMessage_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_TriggeringMessage_H_ */
#include <asn_internal.h>
