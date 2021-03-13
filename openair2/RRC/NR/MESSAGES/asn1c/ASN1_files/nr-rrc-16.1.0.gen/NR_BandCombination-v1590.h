/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_BandCombination_v1590_H_
#define	_NR_BandCombination_v1590_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "NR_MRDC-Parameters-v1590.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_BandCombination-v1590 */
typedef struct NR_BandCombination_v1590 {
	BIT_STRING_t	*supportedBandwidthCombinationSetIntraENDC;	/* OPTIONAL */
	NR_MRDC_Parameters_v1590_t	 mrdc_Parameters_v1590;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandCombination_v1590_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandCombination_v1590;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BandCombination_v1590_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandCombination_v1590_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_BandCombination_v1590_H_ */
#include <asn_internal.h>