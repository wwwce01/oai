/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_BCCH_DL_SCH_Message_H_
#define	_NR_BCCH_DL_SCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_BCCH-DL-SCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_BCCH-DL-SCH-Message */
typedef struct NR_BCCH_DL_SCH_Message {
	NR_BCCH_DL_SCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BCCH_DL_SCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_BCCH_DL_SCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_BCCH_DL_SCH_Message_H_ */
#include <asn_internal.h>