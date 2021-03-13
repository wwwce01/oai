/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_UL_ConfigCommon_NB_v1530_H_
#define	_LTE_UL_ConfigCommon_NB_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_NPRACH_ParametersListFmt2_NB_r15;

/* LTE_UL-ConfigCommon-NB-v1530 */
typedef struct LTE_UL_ConfigCommon_NB_v1530 {
	struct LTE_NPRACH_ParametersListFmt2_NB_r15	*nprach_ParametersListFmt2_r15;	/* OPTIONAL */
	struct LTE_NPRACH_ParametersListFmt2_NB_r15	*nprach_ParametersListFmt2EDT_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UL_ConfigCommon_NB_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UL_ConfigCommon_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UL_ConfigCommon_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UL_ConfigCommon_NB_v1530_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_NPRACH-ParametersListFmt2-NB-r15.h"

#endif	/* _LTE_UL_ConfigCommon_NB_v1530_H_ */
#include <asn_internal.h>