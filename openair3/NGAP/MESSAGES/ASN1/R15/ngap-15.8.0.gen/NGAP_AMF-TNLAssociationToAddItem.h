/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_AMF_TNLAssociationToAddItem_H_
#define	_NGAP_AMF_TNLAssociationToAddItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_CPTransportLayerInformation.h"
#include "NGAP_TNLAssociationUsage.h"
#include "NGAP_TNLAddressWeightFactor.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_AMF-TNLAssociationToAddItem */
typedef struct NGAP_AMF_TNLAssociationToAddItem {
	NGAP_CPTransportLayerInformation_t	 aMF_TNLAssociationAddress;
	NGAP_TNLAssociationUsage_t	*tNLAssociationUsage;	/* OPTIONAL */
	NGAP_TNLAddressWeightFactor_t	 tNLAddressWeightFactor;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_AMF_TNLAssociationToAddItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_AMF_TNLAssociationToAddItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_AMF_TNLAssociationToAddItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_AMF_TNLAssociationToAddItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_AMF_TNLAssociationToAddItem_H_ */
#include <asn_internal.h>
