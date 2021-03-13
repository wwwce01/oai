/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_PUSCH_EnhancementsConfig_r14_H_
#define	_LTE_PUSCH_EnhancementsConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUSCH_EnhancementsConfig_r14_PR {
	LTE_PUSCH_EnhancementsConfig_r14_PR_NOTHING,	/* No components present */
	LTE_PUSCH_EnhancementsConfig_r14_PR_release,
	LTE_PUSCH_EnhancementsConfig_r14_PR_setup
} LTE_PUSCH_EnhancementsConfig_r14_PR;
typedef enum LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR {
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR_NOTHING,	/* No components present */
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR_interval_FDD_PUSCH_Enh_r14,
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR_interval_TDD_PUSCH_Enh_r14
} LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR;
typedef enum LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14 {
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14_int1	= 0,
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14_int2	= 1,
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14_int4	= 2,
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14_int8	= 3
} e_LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14;
typedef enum LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14 {
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14_int1	= 0,
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14_int5	= 1,
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14_int10	= 2,
	LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14_int20	= 3
} e_LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14;

/* LTE_PUSCH-EnhancementsConfig-r14 */
typedef struct LTE_PUSCH_EnhancementsConfig_r14 {
	LTE_PUSCH_EnhancementsConfig_r14_PR present;
	union LTE_PUSCH_EnhancementsConfig_r14_u {
		NULL_t	 release;
		struct LTE_PUSCH_EnhancementsConfig_r14__setup {
			long	*pusch_HoppingOffsetPUSCH_Enh_r14;	/* OPTIONAL */
			struct LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14 {
				LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR present;
				union LTE_PUSCH_EnhancementsConfig_r14__LTE_setup__LTE_interval_ULHoppingPUSCH_Enh_r14_u {
					long	 interval_FDD_PUSCH_Enh_r14;
					long	 interval_TDD_PUSCH_Enh_r14;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *interval_ULHoppingPUSCH_Enh_r14;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUSCH_EnhancementsConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_EnhancementsConfig_r14;
extern asn_CHOICE_specifics_t asn_SPC_LTE_PUSCH_EnhancementsConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUSCH_EnhancementsConfig_r14_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_PUSCH_EnhancementsConfig_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUSCH_EnhancementsConfig_r14_H_ */
#include <asn_internal.h>