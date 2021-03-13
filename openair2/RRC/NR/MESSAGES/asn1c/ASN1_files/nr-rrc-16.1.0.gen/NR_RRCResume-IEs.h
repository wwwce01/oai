/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RRCResume_IEs_H_
#define	_NR_RRCResume_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RRCResume_IEs__fullConfig {
	NR_RRCResume_IEs__fullConfig_true	= 0
} e_NR_RRCResume_IEs__fullConfig;

/* Forward declarations */
struct NR_RadioBearerConfig;
struct NR_MeasConfig;
struct NR_RRCResume_v1560_IEs;

/* NR_RRCResume-IEs */
typedef struct NR_RRCResume_IEs {
	struct NR_RadioBearerConfig	*radioBearerConfig;	/* OPTIONAL */
	OCTET_STRING_t	*masterCellGroup;	/* OPTIONAL */
	struct NR_MeasConfig	*measConfig;	/* OPTIONAL */
	long	*fullConfig;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_RRCResume_v1560_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCResume_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fullConfig_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCResume_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCResume_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCResume_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_RadioBearerConfig.h"
#include "NR_MeasConfig.h"
#include "NR_RRCResume-v1560-IEs.h"

#endif	/* _NR_RRCResume_IEs_H_ */
#include <asn_internal.h>