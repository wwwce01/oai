/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_SCellGroupToAddMod_r15_H_
#define	_LTE_SCellGroupToAddMod_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SCellGroupIndex-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SCellConfigCommon_r15;
struct LTE_SCellToReleaseListExt_r13;
struct LTE_SCellToAddModListExt_r13;

/* LTE_SCellGroupToAddMod-r15 */
typedef struct LTE_SCellGroupToAddMod_r15 {
	LTE_SCellGroupIndex_r15_t	 sCellGroupIndex_r15;
	struct LTE_SCellConfigCommon_r15	*sCellConfigCommon_r15;	/* OPTIONAL */
	struct LTE_SCellToReleaseListExt_r13	*sCellToReleaseList_r15;	/* OPTIONAL */
	struct LTE_SCellToAddModListExt_r13	*sCellToAddModList_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SCellGroupToAddMod_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SCellGroupToAddMod_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SCellGroupToAddMod_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SCellGroupToAddMod_r15_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SCellConfigCommon-r15.h"
#include "LTE_SCellToReleaseListExt-r13.h"
#include "LTE_SCellToAddModListExt-r13.h"

#endif	/* _LTE_SCellGroupToAddMod_r15_H_ */
#include <asn_internal.h>