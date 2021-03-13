/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_VarMobilityHistoryReport_r16_H_
#define	_NR_VarMobilityHistoryReport_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_VisitedCellInfoList-r16.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NR_VarMobilityHistoryReport-r16 */
typedef NR_VisitedCellInfoList_r16_t	 NR_VarMobilityHistoryReport_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_VarMobilityHistoryReport_r16;
asn_struct_free_f NR_VarMobilityHistoryReport_r16_free;
asn_struct_print_f NR_VarMobilityHistoryReport_r16_print;
asn_constr_check_f NR_VarMobilityHistoryReport_r16_constraint;
ber_type_decoder_f NR_VarMobilityHistoryReport_r16_decode_ber;
der_type_encoder_f NR_VarMobilityHistoryReport_r16_encode_der;
xer_type_decoder_f NR_VarMobilityHistoryReport_r16_decode_xer;
xer_type_encoder_f NR_VarMobilityHistoryReport_r16_encode_xer;
per_type_decoder_f NR_VarMobilityHistoryReport_r16_decode_uper;
per_type_encoder_f NR_VarMobilityHistoryReport_r16_encode_uper;
per_type_decoder_f NR_VarMobilityHistoryReport_r16_decode_aper;
per_type_encoder_f NR_VarMobilityHistoryReport_r16_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_VarMobilityHistoryReport_r16_H_ */
#include <asn_internal.h>