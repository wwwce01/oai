/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MeasResultIdleNR_r16_H_
#define	_NR_MeasResultIdleNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RSRP-Range.h"
#include "NR_RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_ResultsPerSSB_IndexList_r16;
struct NR_MeasResultsPerCarrierIdleNR_r16;

/* NR_MeasResultIdleNR-r16 */
typedef struct NR_MeasResultIdleNR_r16 {
	struct NR_MeasResultIdleNR_r16__measResultServingCell_r16 {
		NR_RSRP_Range_t	*rsrp_Result_r16;	/* OPTIONAL */
		NR_RSRQ_Range_t	*rsrq_Result_r16;	/* OPTIONAL */
		struct NR_ResultsPerSSB_IndexList_r16	*resultsSSB_Indexes_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultServingCell_r16;
	struct NR_MeasResultIdleNR_r16__measResultsPerCarrierListIdleNR_r16 {
		A_SEQUENCE_OF(struct NR_MeasResultsPerCarrierIdleNR_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultsPerCarrierListIdleNR_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasResultIdleNR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasResultIdleNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasResultIdleNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasResultIdleNR_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_ResultsPerSSB-IndexList-r16.h"
#include "NR_MeasResultsPerCarrierIdleNR-r16.h"

#endif	/* _NR_MeasResultIdleNR_r16_H_ */
#include <asn_internal.h>