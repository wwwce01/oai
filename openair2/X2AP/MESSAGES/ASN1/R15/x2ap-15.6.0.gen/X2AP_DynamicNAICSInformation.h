/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_DynamicNAICSInformation_H_
#define	_X2AP_DynamicNAICSInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include "X2AP_PA-Values.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_DynamicNAICSInformation */
typedef struct X2AP_DynamicNAICSInformation {
	BIT_STRING_t	*transmissionModes;	/* OPTIONAL */
	long	*pB_information;	/* OPTIONAL */
	struct X2AP_DynamicNAICSInformation__pA_list {
		A_SEQUENCE_OF(X2AP_PA_Values_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pA_list;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_DynamicNAICSInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_DynamicNAICSInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_DynamicNAICSInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_DynamicNAICSInformation_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_DynamicNAICSInformation_H_ */
#include <asn_internal.h>
