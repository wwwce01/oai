/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item_H_
#define	_X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_E-RAB-ID.h"
#include "X2AP_EN-DC-ResourceConfiguration.h"
#include "X2AP_E-RABs-ToBeReleased-SgNBRelReq-Item-SgNBPDCPpresent.h"
#include "X2AP_E-RABs-ToBeReleased-SgNBRelReq-Item-SgNBPDCPnotpresent.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item__resource_configuration_PR {
	X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item__resource_configuration_PR_NOTHING,	/* No components present */
	X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item__resource_configuration_PR_sgNBPDCPpresent,
	X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item__resource_configuration_PR_sgNBPDCPnotpresent
	/* Extensions may appear below */
	
} X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item__resource_configuration_PR;

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_E-RABs-ToBeReleased-SgNBRelReq-Item */
typedef struct X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item {
	X2AP_E_RAB_ID_t	 e_RAB_ID;
	X2AP_EN_DC_ResourceConfiguration_t	 en_DC_ResourceConfiguration;
	struct X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item__resource_configuration {
		X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item__resource_configuration_PR present;
		union X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item__X2AP_resource_configuration_u {
			X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item_SgNBPDCPpresent_t	 sgNBPDCPpresent;
			X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item_SgNBPDCPnotpresent_t	 sgNBPDCPnotpresent;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resource_configuration;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_E_RABs_ToBeReleased_SgNBRelReq_Item_H_ */
#include <asn_internal.h>
