/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_UPTransportLayerInformation_H_
#define	_NGAP_UPTransportLayerInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_UPTransportLayerInformation_PR {
	NGAP_UPTransportLayerInformation_PR_NOTHING,	/* No components present */
	NGAP_UPTransportLayerInformation_PR_gTPTunnel,
	NGAP_UPTransportLayerInformation_PR_choice_Extensions
} NGAP_UPTransportLayerInformation_PR;

/* Forward declarations */
struct NGAP_GTPTunnel;
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_UPTransportLayerInformation */
typedef struct NGAP_UPTransportLayerInformation {
	NGAP_UPTransportLayerInformation_PR present;
	union NGAP_UPTransportLayerInformation_u {
		struct NGAP_GTPTunnel	*gTPTunnel;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_UPTransportLayerInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_UPTransportLayerInformation;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_UPTransportLayerInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_UPTransportLayerInformation_1[2];
extern asn_per_constraints_t asn_PER_type_NGAP_UPTransportLayerInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_UPTransportLayerInformation_H_ */
#include <asn_internal.h>
