/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SL_FreqConfigCommon_r16_H_
#define	_NR_SL_FreqConfigCommon_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ARFCN-ValueNR.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_FreqConfigCommon_r16__frequencyShift7p5khzSL_r16 {
	NR_SL_FreqConfigCommon_r16__frequencyShift7p5khzSL_r16_true	= 0
} e_NR_SL_FreqConfigCommon_r16__frequencyShift7p5khzSL_r16;
typedef enum NR_SL_FreqConfigCommon_r16__sl_SyncPriority_r16 {
	NR_SL_FreqConfigCommon_r16__sl_SyncPriority_r16_gnss	= 0,
	NR_SL_FreqConfigCommon_r16__sl_SyncPriority_r16_gnbEnb	= 1
} e_NR_SL_FreqConfigCommon_r16__sl_SyncPriority_r16;

/* Forward declarations */
struct NR_SL_SyncConfigList_r16;
struct NR_SCS_SpecificCarrier;
struct NR_SL_BWP_ConfigCommon_r16;

/* NR_SL-FreqConfigCommon-r16 */
typedef struct NR_SL_FreqConfigCommon_r16 {
	struct NR_SL_FreqConfigCommon_r16__sl_SCS_SpecificCarrierList_r16 {
		A_SEQUENCE_OF(struct NR_SCS_SpecificCarrier) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sl_SCS_SpecificCarrierList_r16;
	NR_ARFCN_ValueNR_t	 sl_AbsoluteFrequencyPointA_r16;
	NR_ARFCN_ValueNR_t	*sl_AbsoluteFrequencySSB_r16;	/* OPTIONAL */
	long	*frequencyShift7p5khzSL_r16;	/* OPTIONAL */
	long	 valueN_r16;
	struct NR_SL_FreqConfigCommon_r16__sl_BWP_List_r16 {
		A_SEQUENCE_OF(struct NR_SL_BWP_ConfigCommon_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_BWP_List_r16;
	long	*sl_SyncPriority_r16;	/* OPTIONAL */
	BOOLEAN_t	*sl_NbAsSync_r16;	/* OPTIONAL */
	struct NR_SL_SyncConfigList_r16	*sl_SyncConfigList_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_FreqConfigCommon_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_frequencyShift7p5khzSL_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_SyncPriority_r16_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_FreqConfigCommon_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_FreqConfigCommon_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_FreqConfigCommon_r16_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-SyncConfigList-r16.h"
#include "NR_SCS-SpecificCarrier.h"
#include "NR_SL-BWP-ConfigCommon-r16.h"

#endif	/* _NR_SL_FreqConfigCommon_r16_H_ */
#include <asn_internal.h>