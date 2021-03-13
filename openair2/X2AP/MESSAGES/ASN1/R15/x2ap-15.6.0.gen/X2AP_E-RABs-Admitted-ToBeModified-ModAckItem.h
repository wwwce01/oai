/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_H_
#define	_X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_E-RABs-Admitted-ToBeModified-ModAckItem-SCG-Bearer.h"
#include "X2AP_E-RABs-Admitted-ToBeModified-ModAckItem-Split-Bearer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_PR {
	X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_PR_NOTHING,	/* No components present */
	X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_PR_sCG_Bearer,
	X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_PR_split_Bearer
	/* Extensions may appear below */
	
} X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_PR;

/* X2AP_E-RABs-Admitted-ToBeModified-ModAckItem */
typedef struct X2AP_E_RABs_Admitted_ToBeModified_ModAckItem {
	X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_PR present;
	union X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_u {
		X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer_t	 sCG_Bearer;
		X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_Split_Bearer_t	 split_Bearer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_Admitted_ToBeModified_ModAckItem;
extern asn_CHOICE_specifics_t asn_SPC_X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_1[2];
extern asn_per_constraints_t asn_PER_type_X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_E_RABs_Admitted_ToBeModified_ModAckItem_H_ */
#include <asn_internal.h>
