/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_AllocationAndRetentionPriority_H_
#define	_NGAP_AllocationAndRetentionPriority_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_PriorityLevelARP.h"
#include "NGAP_Pre-emptionCapability.h"
#include "NGAP_Pre-emptionVulnerability.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_AllocationAndRetentionPriority */
typedef struct NGAP_AllocationAndRetentionPriority {
	NGAP_PriorityLevelARP_t	 priorityLevelARP;
	NGAP_Pre_emptionCapability_t	 pre_emptionCapability;
	NGAP_Pre_emptionVulnerability_t	 pre_emptionVulnerability;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_AllocationAndRetentionPriority_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_AllocationAndRetentionPriority;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_AllocationAndRetentionPriority_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_AllocationAndRetentionPriority_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_AllocationAndRetentionPriority_H_ */
#include <asn_internal.h>
