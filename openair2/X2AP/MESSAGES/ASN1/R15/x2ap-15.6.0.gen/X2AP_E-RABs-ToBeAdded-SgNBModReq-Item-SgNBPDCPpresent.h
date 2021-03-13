/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_H_
#define	_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_E-RAB-Level-QoS-Parameters.h"
#include "X2AP_DL-Forwarding.h"
#include "X2AP_GTPtunnelEndpoint.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_GBR_QosInformation;
struct X2AP_GTPtunnelEndpoint;
struct X2AP_ProtocolExtensionContainer;

/* X2AP_E-RABs-ToBeAdded-SgNBModReq-Item-SgNBPDCPpresent */
typedef struct X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent {
	X2AP_E_RAB_Level_QoS_Parameters_t	 full_E_RAB_Level_QoS_Parameters;
	struct X2AP_GBR_QosInformation	*max_MN_admit_E_RAB_Level_QoS_Parameters;	/* OPTIONAL */
	X2AP_DL_Forwarding_t	*dL_Forwarding;	/* OPTIONAL */
	struct X2AP_GTPtunnelEndpoint	*meNB_DL_GTP_TEIDatMCG;	/* OPTIONAL */
	X2AP_GTPtunnelEndpoint_t	 s1_UL_GTPtunnelEndpoint;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_H_ */
#include <asn_internal.h>
