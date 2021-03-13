/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MeasResultNR_H_
#define	_NR_MeasResultNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_PhysCellId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MeasQuantityResults;
struct NR_ResultsPerSSB_IndexList;
struct NR_ResultsPerCSI_RS_IndexList;
struct NR_CGI_InfoNR;

/* NR_MeasResultNR */
typedef struct NR_MeasResultNR {
	NR_PhysCellId_t	*physCellId;	/* OPTIONAL */
	struct NR_MeasResultNR__measResult {
		struct NR_MeasResultNR__measResult__cellResults {
			struct NR_MeasQuantityResults	*resultsSSB_Cell;	/* OPTIONAL */
			struct NR_MeasQuantityResults	*resultsCSI_RS_Cell;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} cellResults;
		struct NR_MeasResultNR__measResult__rsIndexResults {
			struct NR_ResultsPerSSB_IndexList	*resultsSSB_Indexes;	/* OPTIONAL */
			struct NR_ResultsPerCSI_RS_IndexList	*resultsCSI_RS_Indexes;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *rsIndexResults;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MeasResultNR__ext1 {
		struct NR_CGI_InfoNR	*cgi_Info;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasResultNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasResultNR;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasResultNR_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasResultNR_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasQuantityResults.h"
#include "NR_ResultsPerSSB-IndexList.h"
#include "NR_ResultsPerCSI-RS-IndexList.h"
#include "NR_CGI-InfoNR.h"

#endif	/* _NR_MeasResultNR_H_ */
#include <asn_internal.h>