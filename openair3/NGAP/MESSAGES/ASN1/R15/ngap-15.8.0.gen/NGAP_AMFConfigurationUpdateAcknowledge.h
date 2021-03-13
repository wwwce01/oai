/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_AMFConfigurationUpdateAcknowledge_H_
#define	_NGAP_AMFConfigurationUpdateAcknowledge_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGAP_AMFConfigurationUpdateAcknowledge */
typedef struct NGAP_AMFConfigurationUpdateAcknowledge {
	NGAP_ProtocolIE_Container_6810P46_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_AMFConfigurationUpdateAcknowledge_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_AMFConfigurationUpdateAcknowledge;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_AMFConfigurationUpdateAcknowledge_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_AMFConfigurationUpdateAcknowledge_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_AMFConfigurationUpdateAcknowledge_H_ */
#include <asn_internal.h>
