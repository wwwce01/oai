/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_MeasurementFailureCause_List_H_
#define	_X2AP_MeasurementFailureCause_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolIE_Single_Container;

/* X2AP_MeasurementFailureCause-List */
typedef struct X2AP_MeasurementFailureCause_List {
	A_SEQUENCE_OF(struct X2AP_ProtocolIE_Single_Container) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_MeasurementFailureCause_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_MeasurementFailureCause_List;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_MeasurementFailureCause_List_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_MeasurementFailureCause_List_1[1];
extern asn_per_constraints_t asn_PER_type_X2AP_MeasurementFailureCause_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_MeasurementFailureCause_List_H_ */
#include <asn_internal.h>
