/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_CG_ConfigInfo_v1570_IEs_H_
#define	_NR_CG_ConfigInfo_v1570_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SFTD_FrequencyList_NR;
struct NR_SFTD_FrequencyList_EUTRA;
struct NR_CG_ConfigInfo_v1590_IEs;

/* NR_CG-ConfigInfo-v1570-IEs */
typedef struct NR_CG_ConfigInfo_v1570_IEs {
	struct NR_SFTD_FrequencyList_NR	*sftdFrequencyList_NR;	/* OPTIONAL */
	struct NR_SFTD_FrequencyList_EUTRA	*sftdFrequencyList_EUTRA;	/* OPTIONAL */
	struct NR_CG_ConfigInfo_v1590_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CG_ConfigInfo_v1570_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CG_ConfigInfo_v1570_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CG_ConfigInfo_v1570_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CG_ConfigInfo_v1570_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SFTD-FrequencyList-NR.h"
#include "NR_SFTD-FrequencyList-EUTRA.h"
#include "NR_CG-ConfigInfo-v1590-IEs.h"

#endif	/* _NR_CG_ConfigInfo_v1570_IEs_H_ */
#include <asn_internal.h>