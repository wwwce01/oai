/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MeasResultSCG_Failure_H_
#define	_NR_MeasResultSCG_Failure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_MeasResultList2NR.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_LocationInfo_r16;

/* NR_MeasResultSCG-Failure */
typedef struct NR_MeasResultSCG_Failure {
	NR_MeasResultList2NR_t	 measResultPerMOList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MeasResultSCG_Failure__ext1 {
		struct NR_LocationInfo_r16	*locationInfo_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasResultSCG_Failure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasResultSCG_Failure;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_LocationInfo-r16.h"

#endif	/* _NR_MeasResultSCG_Failure_H_ */
#include <asn_internal.h>