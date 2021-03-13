/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_PUCCH_FormatConfig_H_
#define	_NR_PUCCH_FormatConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_PUCCH-MaxCodeRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PUCCH_FormatConfig__interslotFrequencyHopping {
	NR_PUCCH_FormatConfig__interslotFrequencyHopping_enabled	= 0
} e_NR_PUCCH_FormatConfig__interslotFrequencyHopping;
typedef enum NR_PUCCH_FormatConfig__additionalDMRS {
	NR_PUCCH_FormatConfig__additionalDMRS_true	= 0
} e_NR_PUCCH_FormatConfig__additionalDMRS;
typedef enum NR_PUCCH_FormatConfig__nrofSlots {
	NR_PUCCH_FormatConfig__nrofSlots_n2	= 0,
	NR_PUCCH_FormatConfig__nrofSlots_n4	= 1,
	NR_PUCCH_FormatConfig__nrofSlots_n8	= 2
} e_NR_PUCCH_FormatConfig__nrofSlots;
typedef enum NR_PUCCH_FormatConfig__pi2BPSK {
	NR_PUCCH_FormatConfig__pi2BPSK_enabled	= 0
} e_NR_PUCCH_FormatConfig__pi2BPSK;
typedef enum NR_PUCCH_FormatConfig__simultaneousHARQ_ACK_CSI {
	NR_PUCCH_FormatConfig__simultaneousHARQ_ACK_CSI_true	= 0
} e_NR_PUCCH_FormatConfig__simultaneousHARQ_ACK_CSI;

/* NR_PUCCH-FormatConfig */
typedef struct NR_PUCCH_FormatConfig {
	long	*interslotFrequencyHopping;	/* OPTIONAL */
	long	*additionalDMRS;	/* OPTIONAL */
	NR_PUCCH_MaxCodeRate_t	*maxCodeRate;	/* OPTIONAL */
	long	*nrofSlots;	/* OPTIONAL */
	long	*pi2BPSK;	/* OPTIONAL */
	long	*simultaneousHARQ_ACK_CSI;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PUCCH_FormatConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interslotFrequencyHopping_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_additionalDMRS_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nrofSlots_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pi2BPSK_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simultaneousHARQ_ACK_CSI_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PUCCH_FormatConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PUCCH_FormatConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PUCCH_FormatConfig_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PUCCH_FormatConfig_H_ */
#include <asn_internal.h>