/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_ServedEUTRAcellsENDCX2ManagementList_H_
#define	_X2AP_ServedEUTRAcellsENDCX2ManagementList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "X2AP_ServedCell-Information.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_NRNeighbour_Information;
struct X2AP_ProtocolExtensionContainer;

/* Forward definitions */
typedef struct X2AP_ServedEUTRAcellsENDCX2ManagementList__Member {
	X2AP_ServedCell_Information_t	 servedEUTRACellInfo;
	struct X2AP_NRNeighbour_Information	*nrNeighbourInfo;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedEUTRAcellsENDCX2ManagementList__Member;

/* X2AP_ServedEUTRAcellsENDCX2ManagementList */
typedef struct X2AP_ServedEUTRAcellsENDCX2ManagementList {
	A_SEQUENCE_OF(ServedEUTRAcellsENDCX2ManagementList__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ServedEUTRAcellsENDCX2ManagementList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ServedEUTRAcellsENDCX2ManagementList;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ServedEUTRAcellsENDCX2ManagementList_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_ServedEUTRAcellsENDCX2ManagementList_1[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ServedEUTRAcellsENDCX2ManagementList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ServedEUTRAcellsENDCX2ManagementList_H_ */
#include <asn_internal.h>
