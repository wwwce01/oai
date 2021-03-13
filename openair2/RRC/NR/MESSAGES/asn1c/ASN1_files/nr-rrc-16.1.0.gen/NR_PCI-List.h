/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_PCI_List_H_
#define	_NR_PCI_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_PhysCellId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_PCI-List */
typedef struct NR_PCI_List {
	A_SEQUENCE_OF(NR_PhysCellId_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PCI_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PCI_List;
extern asn_SET_OF_specifics_t asn_SPC_NR_PCI_List_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PCI_List_1[1];
extern asn_per_constraints_t asn_PER_type_NR_PCI_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PCI_List_H_ */
#include <asn_internal.h>