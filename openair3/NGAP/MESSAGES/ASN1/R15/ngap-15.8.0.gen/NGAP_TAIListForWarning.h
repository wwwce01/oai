/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_TAIListForWarning_H_
#define	_NGAP_TAIListForWarning_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_TAI;

/* NGAP_TAIListForWarning */
typedef struct NGAP_TAIListForWarning {
	A_SEQUENCE_OF(struct NGAP_TAI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_TAIListForWarning_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_TAIListForWarning;
extern asn_SET_OF_specifics_t asn_SPC_NGAP_TAIListForWarning_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_TAIListForWarning_1[1];
extern asn_per_constraints_t asn_PER_type_NGAP_TAIListForWarning_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_TAIListForWarning_H_ */
#include <asn_internal.h>
