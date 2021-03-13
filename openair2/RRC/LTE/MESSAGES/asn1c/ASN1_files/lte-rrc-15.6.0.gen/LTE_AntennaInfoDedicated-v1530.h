/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_AntennaInfoDedicated_v1530_H_
#define	_LTE_AntennaInfoDedicated_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AntennaInfoDedicated_v1530_PR {
	LTE_AntennaInfoDedicated_v1530_PR_NOTHING,	/* No components present */
	LTE_AntennaInfoDedicated_v1530_PR_release,
	LTE_AntennaInfoDedicated_v1530_PR_setup
} LTE_AntennaInfoDedicated_v1530_PR;
typedef enum LTE_AntennaInfoDedicated_v1530__setup_PR {
	LTE_AntennaInfoDedicated_v1530__setup_PR_NOTHING,	/* No components present */
	LTE_AntennaInfoDedicated_v1530__setup_PR_ue_TxAntennaSelection_SRS_1T4R_Config_r15,
	LTE_AntennaInfoDedicated_v1530__setup_PR_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15
} LTE_AntennaInfoDedicated_v1530__setup_PR;
typedef enum LTE_AntennaInfoDedicated_v1530__setup__ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15 {
	LTE_AntennaInfoDedicated_v1530__setup__ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_two	= 0,
	LTE_AntennaInfoDedicated_v1530__setup__ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_three	= 1
} e_LTE_AntennaInfoDedicated_v1530__setup__ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15;

/* LTE_AntennaInfoDedicated-v1530 */
typedef struct LTE_AntennaInfoDedicated_v1530 {
	LTE_AntennaInfoDedicated_v1530_PR present;
	union LTE_AntennaInfoDedicated_v1530_u {
		NULL_t	 release;
		struct LTE_AntennaInfoDedicated_v1530__setup {
			LTE_AntennaInfoDedicated_v1530__setup_PR present;
			union LTE_AntennaInfoDedicated_v1530__LTE_setup_u {
				NULL_t	 ue_TxAntennaSelection_SRS_1T4R_Config_r15;
				long	 ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AntennaInfoDedicated_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_TxAntennaSelection_SRS_2T4R_NrOfPairs_r15_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AntennaInfoDedicated_v1530;
extern asn_CHOICE_specifics_t asn_SPC_LTE_AntennaInfoDedicated_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AntennaInfoDedicated_v1530_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_AntennaInfoDedicated_v1530_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AntennaInfoDedicated_v1530_H_ */
#include <asn_internal.h>