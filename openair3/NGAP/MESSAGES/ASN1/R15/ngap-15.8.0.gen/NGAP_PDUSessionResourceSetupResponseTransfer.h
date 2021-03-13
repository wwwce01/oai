/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_PDUSessionResourceSetupResponseTransfer_H_
#define	_NGAP_PDUSessionResourceSetupResponseTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_QosFlowPerTNLInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_QosFlowPerTNLInformationList;
struct NGAP_SecurityResult;
struct NGAP_QosFlowListWithCause;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_PDUSessionResourceSetupResponseTransfer */
typedef struct NGAP_PDUSessionResourceSetupResponseTransfer {
	NGAP_QosFlowPerTNLInformation_t	 dLQosFlowPerTNLInformation;
	struct NGAP_QosFlowPerTNLInformationList	*additionalDLQosFlowPerTNLInformation;	/* OPTIONAL */
	struct NGAP_SecurityResult	*securityResult;	/* OPTIONAL */
	struct NGAP_QosFlowListWithCause	*qosFlowFailedToSetupList;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionResourceSetupResponseTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceSetupResponseTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionResourceSetupResponseTransfer_H_ */
#include <asn_internal.h>
