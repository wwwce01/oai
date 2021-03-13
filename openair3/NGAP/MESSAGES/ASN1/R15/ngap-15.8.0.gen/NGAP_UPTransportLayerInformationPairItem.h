/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_UPTransportLayerInformationPairItem_H_
#define	_NGAP_UPTransportLayerInformationPairItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_UPTransportLayerInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_UPTransportLayerInformationPairItem */
typedef struct NGAP_UPTransportLayerInformationPairItem {
	NGAP_UPTransportLayerInformation_t	 uL_NGU_UP_TNLInformation;
	NGAP_UPTransportLayerInformation_t	 dL_NGU_UP_TNLInformation;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_UPTransportLayerInformationPairItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_UPTransportLayerInformationPairItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_UPTransportLayerInformationPairItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_UPTransportLayerInformationPairItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_UPTransportLayerInformationPairItem_H_ */
#include <asn_internal.h>
