/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_CA_ParametersNRDC_v1610_H_
#define	_NR_CA_ParametersNRDC_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_PwrSharingMode1_r16 {
	NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_PwrSharingMode1_r16_supported	= 0
} e_NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_PwrSharingMode1_r16;
typedef enum NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_PwrSharingMode2_r16 {
	NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_PwrSharingMode2_r16_supported	= 0
} e_NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_PwrSharingMode2_r16;
typedef enum NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_DynamicPwrSharing_r16 {
	NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_DynamicPwrSharing_r16_short	= 0,
	NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_DynamicPwrSharing_r16_long	= 1
} e_NR_CA_ParametersNRDC_v1610__intraFR_NR_DC_DynamicPwrSharing_r16;

/* NR_CA-ParametersNRDC-v1610 */
typedef struct NR_CA_ParametersNRDC_v1610 {
	long	*intraFR_NR_DC_PwrSharingMode1_r16;	/* OPTIONAL */
	long	*intraFR_NR_DC_PwrSharingMode2_r16;	/* OPTIONAL */
	long	*intraFR_NR_DC_DynamicPwrSharing_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CA_ParametersNRDC_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_intraFR_NR_DC_PwrSharingMode1_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_intraFR_NR_DC_PwrSharingMode2_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_intraFR_NR_DC_DynamicPwrSharing_r16_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CA_ParametersNRDC_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CA_ParametersNRDC_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CA_ParametersNRDC_v1610_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CA_ParametersNRDC_v1610_H_ */
#include <asn_internal.h>