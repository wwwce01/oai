/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_QosFlowLevelQosParameters_H_
#define	_NGAP_QosFlowLevelQosParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_QosCharacteristics.h"
#include "NGAP_AllocationAndRetentionPriority.h"
#include "NGAP_ReflectiveQosAttribute.h"
#include "NGAP_AdditionalQosFlowInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_GBR_QosInformation;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_QosFlowLevelQosParameters */
typedef struct NGAP_QosFlowLevelQosParameters {
	NGAP_QosCharacteristics_t	 qosCharacteristics;
	NGAP_AllocationAndRetentionPriority_t	 allocationAndRetentionPriority;
	struct NGAP_GBR_QosInformation	*gBR_QosInformation;	/* OPTIONAL */
	NGAP_ReflectiveQosAttribute_t	*reflectiveQosAttribute;	/* OPTIONAL */
	NGAP_AdditionalQosFlowInformation_t	*additionalQosFlowInformation;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_QosFlowLevelQosParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_QosFlowLevelQosParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_QosFlowLevelQosParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_QosFlowLevelQosParameters_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_QosFlowLevelQosParameters_H_ */
#include <asn_internal.h>
