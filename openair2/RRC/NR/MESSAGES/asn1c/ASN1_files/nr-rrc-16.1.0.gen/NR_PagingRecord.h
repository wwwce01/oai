/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_PagingRecord_H_
#define	_NR_PagingRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_PagingUE-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PagingRecord__accessType {
	NR_PagingRecord__accessType_non3GPP	= 0
} e_NR_PagingRecord__accessType;

/* NR_PagingRecord */
typedef struct NR_PagingRecord {
	NR_PagingUE_Identity_t	 ue_Identity;
	long	*accessType;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PagingRecord_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_accessType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PagingRecord;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PagingRecord_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PagingRecord_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PagingRecord_H_ */
#include <asn_internal.h>