/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_VarMeasReport_H_
#define	_NR_VarMeasReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_MeasId.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_CellsTriggeredList;
struct NR_CLI_TriggeredList_r16;
struct NR_Tx_PoolMeasList_r16;

/* NR_VarMeasReport */
typedef struct NR_VarMeasReport {
	NR_MeasId_t	 measId;
	struct NR_CellsTriggeredList	*cellsTriggeredList;	/* OPTIONAL */
	long	 numberOfReportsSent;
	struct NR_CLI_TriggeredList_r16	*cli_TriggeredList_r16;	/* OPTIONAL */
	struct NR_Tx_PoolMeasList_r16	*tx_PoolMeasToAddModListNR_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VarMeasReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_VarMeasReport;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_VarMeasReport_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_VarMeasReport_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CellsTriggeredList.h"
#include "NR_CLI-TriggeredList-r16.h"
#include "NR_Tx-PoolMeasList-r16.h"

#endif	/* _NR_VarMeasReport_H_ */
#include <asn_internal.h>