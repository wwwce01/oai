/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MultiFrequencyBandListNR_SIB_H_
#define	_NR_MultiFrequencyBandListNR_SIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_NR_MultiBandInfo;

/* NR_MultiFrequencyBandListNR-SIB */
typedef struct NR_MultiFrequencyBandListNR_SIB {
	A_SEQUENCE_OF(struct NR_NR_MultiBandInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MultiFrequencyBandListNR_SIB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MultiFrequencyBandListNR_SIB;
extern asn_SET_OF_specifics_t asn_SPC_NR_MultiFrequencyBandListNR_SIB_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MultiFrequencyBandListNR_SIB_1[1];
extern asn_per_constraints_t asn_PER_type_NR_MultiFrequencyBandListNR_SIB_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_NR-MultiBandInfo.h"

#endif	/* _NR_MultiFrequencyBandListNR_SIB_H_ */
#include <asn_internal.h>