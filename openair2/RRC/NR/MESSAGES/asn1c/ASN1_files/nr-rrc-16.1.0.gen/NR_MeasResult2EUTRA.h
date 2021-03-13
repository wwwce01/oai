/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MeasResult2EUTRA_H_
#define	_NR_MeasResult2EUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ARFCN-ValueEUTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MeasResultEUTRA;

/* NR_MeasResult2EUTRA */
typedef struct NR_MeasResult2EUTRA {
	NR_ARFCN_ValueEUTRA_t	 carrierFreq;
	struct NR_MeasResultEUTRA	*measResultServingCell;	/* OPTIONAL */
	struct NR_MeasResultEUTRA	*measResultBestNeighCell;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasResult2EUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasResult2EUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasResult2EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasResult2EUTRA_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasResultEUTRA.h"

#endif	/* _NR_MeasResult2EUTRA_H_ */
#include <asn_internal.h>