/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D lte-rrc-15.6.0.gen`
 */

#ifndef	_LTE_VarMeasIdleReport_r15_H_
#define	_LTE_VarMeasIdleReport_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MeasResultListIdle-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_VarMeasIdleReport-r15 */
typedef struct LTE_VarMeasIdleReport_r15 {
	LTE_MeasResultListIdle_r15_t	 measReportIdle_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarMeasIdleReport_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarMeasIdleReport_r15;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_VarMeasIdleReport_r15_H_ */
#include <asn_internal.h>