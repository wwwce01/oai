/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_ServedCellsToActivate_Item_H_
#define	_X2AP_ServedCellsToActivate_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_ECGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_ServedCellsToActivate-Item */
typedef struct X2AP_ServedCellsToActivate_Item {
	X2AP_ECGI_t	 ecgi;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ServedCellsToActivate_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ServedCellsToActivate_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_ServedCellsToActivate_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_ServedCellsToActivate_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ServedCellsToActivate_Item_H_ */
#include <asn_internal.h>
