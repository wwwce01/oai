/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PLMN_RAN_AreaConfig_r15_H_
#define	_LTE_PLMN_RAN_AreaConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PLMN_Identity;
struct LTE_RAN_AreaConfig_r15;

/* LTE_PLMN-RAN-AreaConfig-r15 */
typedef struct LTE_PLMN_RAN_AreaConfig_r15 {
	struct LTE_PLMN_Identity	*plmn_Identity_r15;	/* OPTIONAL */
	struct LTE_PLMN_RAN_AreaConfig_r15__ran_Area_r15 {
		A_SEQUENCE_OF(struct LTE_RAN_AreaConfig_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ran_Area_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PLMN_RAN_AreaConfig_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PLMN_RAN_AreaConfig_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PLMN_RAN_AreaConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PLMN_RAN_AreaConfig_r15_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PLMN-Identity.h"
#include "LTE_RAN-AreaConfig-r15.h"

#endif	/* _LTE_PLMN_RAN_AreaConfig_r15_H_ */
#include <asn_internal.h>