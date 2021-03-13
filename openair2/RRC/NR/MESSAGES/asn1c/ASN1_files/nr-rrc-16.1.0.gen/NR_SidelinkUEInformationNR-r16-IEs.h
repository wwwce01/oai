/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SidelinkUEInformationNR_r16_IEs_H_
#define	_NR_SidelinkUEInformationNR_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SL_InterestedFreqList_r16;
struct NR_SL_TxResourceReqList_r16;
struct NR_SL_FailureList_r16;

/* NR_SidelinkUEInformationNR-r16-IEs */
typedef struct NR_SidelinkUEInformationNR_r16_IEs {
	struct NR_SL_InterestedFreqList_r16	*sl_RxInterestedFreqList_r16;	/* OPTIONAL */
	struct NR_SL_TxResourceReqList_r16	*sl_TxResourceReqList_r16;	/* OPTIONAL */
	struct NR_SL_FailureList_r16	*sl_FailureList_r16;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_SidelinkUEInformationNR_r16_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SidelinkUEInformationNR_r16_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SidelinkUEInformationNR_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SidelinkUEInformationNR_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SidelinkUEInformationNR_r16_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-InterestedFreqList-r16.h"
#include "NR_SL-TxResourceReqList-r16.h"
#include "NR_SL-FailureList-r16.h"

#endif	/* _NR_SidelinkUEInformationNR_r16_IEs_H_ */
#include <asn_internal.h>