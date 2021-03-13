/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_QoSFlowsUsageReport_Item_H_
#define	_NGAP_QoSFlowsUsageReport_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_QosFlowIdentifier.h"
#include <NativeEnumerated.h>
#include "NGAP_VolumeTimedReportList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_QoSFlowsUsageReport_Item__rATType {
	NGAP_QoSFlowsUsageReport_Item__rATType_nr	= 0,
	NGAP_QoSFlowsUsageReport_Item__rATType_eutra	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_QoSFlowsUsageReport_Item__rATType;

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_QoSFlowsUsageReport-Item */
typedef struct NGAP_QoSFlowsUsageReport_Item {
	NGAP_QosFlowIdentifier_t	 qosFlowIdentifier;
	long	 rATType;
	NGAP_VolumeTimedReportList_t	 qoSFlowsTimedReportList;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_QoSFlowsUsageReport_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NGAP_rATType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_QoSFlowsUsageReport_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_QoSFlowsUsageReport_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_QoSFlowsUsageReport_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_QoSFlowsUsageReport_Item_H_ */
#include <asn_internal.h>
