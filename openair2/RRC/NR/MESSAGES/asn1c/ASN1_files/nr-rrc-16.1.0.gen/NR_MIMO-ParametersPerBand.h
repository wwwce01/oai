/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MIMO_ParametersPerBand_H_
#define	_NR_MIMO_ParametersPerBand_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC {
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n4	= 0,
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n8	= 1,
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n16	= 2,
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n32	= 3,
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n64	= 4,
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n128	= 5
} e_NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC;
typedef enum NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP {
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n1	= 0,
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n2	= 1,
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n4	= 2,
	NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n8	= 3
} e_NR_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP;
typedef enum NR_MIMO_ParametersPerBand__additionalActiveTCI_StatePDCCH {
	NR_MIMO_ParametersPerBand__additionalActiveTCI_StatePDCCH_supported	= 0
} e_NR_MIMO_ParametersPerBand__additionalActiveTCI_StatePDCCH;
typedef enum NR_MIMO_ParametersPerBand__pusch_TransCoherence {
	NR_MIMO_ParametersPerBand__pusch_TransCoherence_nonCoherent	= 0,
	NR_MIMO_ParametersPerBand__pusch_TransCoherence_partialCoherent	= 1,
	NR_MIMO_ParametersPerBand__pusch_TransCoherence_fullCoherent	= 2
} e_NR_MIMO_ParametersPerBand__pusch_TransCoherence;
typedef enum NR_MIMO_ParametersPerBand__beamCorrespondenceWithoutUL_BeamSweeping {
	NR_MIMO_ParametersPerBand__beamCorrespondenceWithoutUL_BeamSweeping_supported	= 0
} e_NR_MIMO_ParametersPerBand__beamCorrespondenceWithoutUL_BeamSweeping;
typedef enum NR_MIMO_ParametersPerBand__periodicBeamReport {
	NR_MIMO_ParametersPerBand__periodicBeamReport_supported	= 0
} e_NR_MIMO_ParametersPerBand__periodicBeamReport;
typedef enum NR_MIMO_ParametersPerBand__aperiodicBeamReport {
	NR_MIMO_ParametersPerBand__aperiodicBeamReport_supported	= 0
} e_NR_MIMO_ParametersPerBand__aperiodicBeamReport;
typedef enum NR_MIMO_ParametersPerBand__sp_BeamReportPUCCH {
	NR_MIMO_ParametersPerBand__sp_BeamReportPUCCH_supported	= 0
} e_NR_MIMO_ParametersPerBand__sp_BeamReportPUCCH;
typedef enum NR_MIMO_ParametersPerBand__sp_BeamReportPUSCH {
	NR_MIMO_ParametersPerBand__sp_BeamReportPUSCH_supported	= 0
} e_NR_MIMO_ParametersPerBand__sp_BeamReportPUSCH;
typedef enum NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz {
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz_n4	= 0,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz_n7	= 1,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz_n14	= 2
} e_NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz;
typedef enum NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz {
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz_n4	= 0,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz_n7	= 1,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz_n14	= 2
} e_NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz;
typedef enum NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz {
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz_n4	= 0,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz_n7	= 1,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz_n14	= 2
} e_NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz;
typedef enum NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz {
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz_n4	= 0,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz_n7	= 1,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz_n14	= 2
} e_NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz;
typedef enum NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz {
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz_n4	= 0,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz_n7	= 1,
	NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz_n14	= 2
} e_NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz;
typedef enum NR_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting {
	NR_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting_n1	= 0,
	NR_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting_n2	= 1,
	NR_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting_n4	= 2
} e_NR_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting;
typedef enum NR_MIMO_ParametersPerBand__groupBeamReporting {
	NR_MIMO_ParametersPerBand__groupBeamReporting_supported	= 0
} e_NR_MIMO_ParametersPerBand__groupBeamReporting;
typedef enum NR_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM {
	NR_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n2	= 0,
	NR_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n4	= 1,
	NR_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n8	= 2,
	NR_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n16	= 3
} e_NR_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM;
typedef enum NR_MIMO_ParametersPerBand__dummy2 {
	NR_MIMO_ParametersPerBand__dummy2_supported	= 0
} e_NR_MIMO_ParametersPerBand__dummy2;
typedef enum NR_MIMO_ParametersPerBand__twoPortsPTRS_UL {
	NR_MIMO_ParametersPerBand__twoPortsPTRS_UL_supported	= 0
} e_NR_MIMO_ParametersPerBand__twoPortsPTRS_UL;
typedef enum NR_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz {
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz_sym2	= 0,
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz_sym4	= 1,
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz_sym8	= 2
} e_NR_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz;
typedef enum NR_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz {
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym4	= 0,
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym8	= 1,
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym14	= 2,
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym28	= 3
} e_NR_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz;
typedef enum NR_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz {
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz_sym8	= 0,
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz_sym14	= 1,
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz_sym28	= 2
} e_NR_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz;
typedef enum NR_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz {
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz_sym14	= 0,
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz_sym28	= 1,
	NR_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz_sym56	= 2
} e_NR_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz;
typedef enum NR_MIMO_ParametersPerBand__aperiodicTRS {
	NR_MIMO_ParametersPerBand__aperiodicTRS_supported	= 0
} e_NR_MIMO_ParametersPerBand__aperiodicTRS;
typedef enum NR_MIMO_ParametersPerBand__ext1__dummy6 {
	NR_MIMO_ParametersPerBand__ext1__dummy6_true	= 0
} e_NR_MIMO_ParametersPerBand__ext1__dummy6;
typedef enum NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz {
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym14	= 0,
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym28	= 1,
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym48	= 2,
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym224	= 3,
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym336	= 4
} e_NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz;
typedef enum NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz {
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym14	= 0,
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym28	= 1,
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym48	= 2,
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym224	= 3,
	NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym336	= 4
} e_NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz;
typedef enum NR_MIMO_ParametersPerBand__ext2__defaultQCL_TwoTCI_r16 {
	NR_MIMO_ParametersPerBand__ext2__defaultQCL_TwoTCI_r16_supported	= 0
} e_NR_MIMO_ParametersPerBand__ext2__defaultQCL_TwoTCI_r16;

/* Forward declarations */
struct NR_DummyG;
struct NR_SRS_Resources;
struct NR_DummyH;
struct NR_PTRS_DensityRecommendationDL;
struct NR_PTRS_DensityRecommendationUL;
struct NR_BeamManagementSSB_CSI_RS;
struct NR_CodebookParameters;
struct NR_CSI_RS_IM_ReceptionForFeedback;
struct NR_CSI_RS_ProcFrameworkForSRS;
struct NR_CSI_ReportFramework;
struct NR_CSI_RS_ForTracking;
struct NR_SpatialRelations;
struct NR_SupportedCSI_RS_Resource;
struct NR_CodebookParameters_v1610;

/* NR_MIMO-ParametersPerBand */
typedef struct NR_MIMO_ParametersPerBand {
	struct NR_MIMO_ParametersPerBand__tci_StatePDSCH {
		long	*maxNumberConfiguredTCIstatesPerCC;	/* OPTIONAL */
		long	*maxNumberActiveTCI_PerBWP;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tci_StatePDSCH;
	long	*additionalActiveTCI_StatePDCCH;	/* OPTIONAL */
	long	*pusch_TransCoherence;	/* OPTIONAL */
	long	*beamCorrespondenceWithoutUL_BeamSweeping;	/* OPTIONAL */
	long	*periodicBeamReport;	/* OPTIONAL */
	long	*aperiodicBeamReport;	/* OPTIONAL */
	long	*sp_BeamReportPUCCH;	/* OPTIONAL */
	long	*sp_BeamReportPUSCH;	/* OPTIONAL */
	struct NR_DummyG	*dummy1;	/* OPTIONAL */
	long	*maxNumberRxBeam;	/* OPTIONAL */
	struct NR_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL {
		long	*scs_15kHz;	/* OPTIONAL */
		long	*scs_30kHz;	/* OPTIONAL */
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		long	*scs_240kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *maxNumberRxTxBeamSwitchDL;
	long	*maxNumberNonGroupBeamReporting;	/* OPTIONAL */
	long	*groupBeamReporting;	/* OPTIONAL */
	struct NR_MIMO_ParametersPerBand__uplinkBeamManagement {
		long	 maxNumberSRS_ResourcePerSet_BM;
		long	 maxNumberSRS_ResourceSet;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplinkBeamManagement;
	long	*maxNumberCSI_RS_BFD;	/* OPTIONAL */
	long	*maxNumberSSB_BFD;	/* OPTIONAL */
	long	*maxNumberCSI_RS_SSB_CBD;	/* OPTIONAL */
	long	*dummy2;	/* OPTIONAL */
	long	*twoPortsPTRS_UL;	/* OPTIONAL */
	struct NR_SRS_Resources	*dummy5;	/* OPTIONAL */
	long	*dummy3;	/* OPTIONAL */
	struct NR_MIMO_ParametersPerBand__beamReportTiming {
		long	*scs_15kHz;	/* OPTIONAL */
		long	*scs_30kHz;	/* OPTIONAL */
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *beamReportTiming;
	struct NR_MIMO_ParametersPerBand__ptrs_DensityRecommendationSetDL {
		struct NR_PTRS_DensityRecommendationDL	*scs_15kHz;	/* OPTIONAL */
		struct NR_PTRS_DensityRecommendationDL	*scs_30kHz;	/* OPTIONAL */
		struct NR_PTRS_DensityRecommendationDL	*scs_60kHz;	/* OPTIONAL */
		struct NR_PTRS_DensityRecommendationDL	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ptrs_DensityRecommendationSetDL;
	struct NR_MIMO_ParametersPerBand__ptrs_DensityRecommendationSetUL {
		struct NR_PTRS_DensityRecommendationUL	*scs_15kHz;	/* OPTIONAL */
		struct NR_PTRS_DensityRecommendationUL	*scs_30kHz;	/* OPTIONAL */
		struct NR_PTRS_DensityRecommendationUL	*scs_60kHz;	/* OPTIONAL */
		struct NR_PTRS_DensityRecommendationUL	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ptrs_DensityRecommendationSetUL;
	struct NR_DummyH	*dummy4;	/* OPTIONAL */
	long	*aperiodicTRS;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MIMO_ParametersPerBand__ext1 {
		long	*dummy6;	/* OPTIONAL */
		struct NR_BeamManagementSSB_CSI_RS	*beamManagementSSB_CSI_RS;	/* OPTIONAL */
		struct NR_MIMO_ParametersPerBand__ext1__beamSwitchTiming {
			long	*scs_60kHz;	/* OPTIONAL */
			long	*scs_120kHz;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *beamSwitchTiming;
		struct NR_CodebookParameters	*codebookParameters;	/* OPTIONAL */
		struct NR_CSI_RS_IM_ReceptionForFeedback	*csi_RS_IM_ReceptionForFeedback;	/* OPTIONAL */
		struct NR_CSI_RS_ProcFrameworkForSRS	*csi_RS_ProcFrameworkForSRS;	/* OPTIONAL */
		struct NR_CSI_ReportFramework	*csi_ReportFramework;	/* OPTIONAL */
		struct NR_CSI_RS_ForTracking	*csi_RS_ForTracking;	/* OPTIONAL */
		struct NR_MIMO_ParametersPerBand__ext1__srs_AssocCSI_RS {
			A_SEQUENCE_OF(struct NR_SupportedCSI_RS_Resource) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *srs_AssocCSI_RS;
		struct NR_SpatialRelations	*spatialRelations;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_MIMO_ParametersPerBand__ext2 {
		long	*defaultQCL_TwoTCI_r16;	/* OPTIONAL */
		struct NR_CodebookParameters_v1610	*codebookParametersPerBand_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MIMO_ParametersPerBand_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberConfiguredTCIstatesPerCC_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberActiveTCI_PerBWP_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_additionalActiveTCI_StatePDCCH_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_TransCoherence_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_beamCorrespondenceWithoutUL_BeamSweeping_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_periodicBeamReport_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_aperiodicBeamReport_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sp_BeamReportPUCCH_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sp_BeamReportPUSCH_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_15kHz_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_30kHz_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_120kHz_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_240kHz_50;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberNonGroupBeamReporting_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_groupBeamReporting_58;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSRS_ResourcePerSet_BM_61;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dummy2_70;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoPortsPTRS_UL_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_15kHz_77;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_30kHz_81;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_86;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_120kHz_90;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_aperiodicTRS_105;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dummy6_109;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_113;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_120kHz_119;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_defaultQCL_TwoTCI_r16_134;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MIMO_ParametersPerBand;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MIMO_ParametersPerBand_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MIMO_ParametersPerBand_1[28];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_DummyG.h"
#include "NR_SRS-Resources.h"
#include "NR_DummyH.h"
#include "NR_PTRS-DensityRecommendationDL.h"
#include "NR_PTRS-DensityRecommendationUL.h"
#include "NR_BeamManagementSSB-CSI-RS.h"
#include "NR_CodebookParameters.h"
#include "NR_CSI-RS-IM-ReceptionForFeedback.h"
#include "NR_CSI-RS-ProcFrameworkForSRS.h"
#include "NR_CSI-ReportFramework.h"
#include "NR_CSI-RS-ForTracking.h"
#include "NR_SpatialRelations.h"
#include "NR_SupportedCSI-RS-Resource.h"
#include "NR_CodebookParameters-v1610.h"

#endif	/* _NR_MIMO_ParametersPerBand_H_ */
#include <asn_internal.h>