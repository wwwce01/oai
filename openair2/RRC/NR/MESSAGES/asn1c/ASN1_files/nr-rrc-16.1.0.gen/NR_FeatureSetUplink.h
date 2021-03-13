/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_FeatureSetUplink_H_
#define	_NR_FeatureSetUplink_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_FreqSeparationClass.h"
#include "NR_FeatureSetUplinkPerCC-Id.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_FeatureSetUplink__scalingFactor {
	NR_FeatureSetUplink__scalingFactor_f0p4	= 0,
	NR_FeatureSetUplink__scalingFactor_f0p75	= 1,
	NR_FeatureSetUplink__scalingFactor_f0p8	= 2
} e_NR_FeatureSetUplink__scalingFactor;
typedef enum NR_FeatureSetUplink__crossCarrierScheduling_OtherSCS {
	NR_FeatureSetUplink__crossCarrierScheduling_OtherSCS_supported	= 0
} e_NR_FeatureSetUplink__crossCarrierScheduling_OtherSCS;
typedef enum NR_FeatureSetUplink__searchSpaceSharingCA_UL {
	NR_FeatureSetUplink__searchSpaceSharingCA_UL_supported	= 0
} e_NR_FeatureSetUplink__searchSpaceSharingCA_UL;
typedef enum NR_FeatureSetUplink__twoPUCCH_Group {
	NR_FeatureSetUplink__twoPUCCH_Group_supported	= 0
} e_NR_FeatureSetUplink__twoPUCCH_Group;
typedef enum NR_FeatureSetUplink__dynamicSwitchSUL {
	NR_FeatureSetUplink__dynamicSwitchSUL_supported	= 0
} e_NR_FeatureSetUplink__dynamicSwitchSUL;
typedef enum NR_FeatureSetUplink__simultaneousTxSUL_NonSUL {
	NR_FeatureSetUplink__simultaneousTxSUL_NonSUL_supported	= 0
} e_NR_FeatureSetUplink__simultaneousTxSUL_NonSUL;
typedef enum NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz {
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz_upto2	= 0,
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz_upto4	= 1,
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz_upto7	= 2
} e_NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz;
typedef enum NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz {
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz_upto2	= 0,
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz_upto4	= 1,
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz_upto7	= 2
} e_NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz;
typedef enum NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz {
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz_upto2	= 0,
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz_upto4	= 1,
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz_upto7	= 2
} e_NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz;
typedef enum NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz {
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz_upto2	= 0,
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz_upto4	= 1,
	NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz_upto7	= 2
} e_NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz;

/* Forward declarations */
struct NR_DummyI;
struct NR_SRS_Resources;
struct NR_DummyF;

/* NR_FeatureSetUplink */
typedef struct NR_FeatureSetUplink {
	struct NR_FeatureSetUplink__featureSetListPerUplinkCC {
		A_SEQUENCE_OF(NR_FeatureSetUplinkPerCC_Id_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} featureSetListPerUplinkCC;
	long	*scalingFactor;	/* OPTIONAL */
	long	*crossCarrierScheduling_OtherSCS;	/* OPTIONAL */
	NR_FreqSeparationClass_t	*intraBandFreqSeparationUL;	/* OPTIONAL */
	long	*searchSpaceSharingCA_UL;	/* OPTIONAL */
	struct NR_DummyI	*dummy1;	/* OPTIONAL */
	struct NR_SRS_Resources	*supportedSRS_Resources;	/* OPTIONAL */
	long	*twoPUCCH_Group;	/* OPTIONAL */
	long	*dynamicSwitchSUL;	/* OPTIONAL */
	long	*simultaneousTxSUL_NonSUL;	/* OPTIONAL */
	struct NR_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot {
		long	*scs_15kHz;	/* OPTIONAL */
		long	*scs_30kHz;	/* OPTIONAL */
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_ProcessingType1_DifferentTB_PerSlot;
	struct NR_DummyF	*dummy2;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FeatureSetUplink_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scalingFactor_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_crossCarrierScheduling_OtherSCS_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_searchSpaceSharingCA_UL_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoPUCCH_Group_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dynamicSwitchSUL_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simultaneousTxSUL_NonSUL_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_15kHz_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_30kHz_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_120kHz_34;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_FeatureSetUplink;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FeatureSetUplink_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FeatureSetUplink_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_DummyI.h"
#include "NR_SRS-Resources.h"
#include "NR_DummyF.h"

#endif	/* _NR_FeatureSetUplink_H_ */
#include <asn_internal.h>