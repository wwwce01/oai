/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_PDUSessionResourceReleasedListPSAck_H_
#define	_NGAP_PDUSessionResourceReleasedListPSAck_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_PDUSessionResourceReleasedItemPSAck;

/* NGAP_PDUSessionResourceReleasedListPSAck */
typedef struct NGAP_PDUSessionResourceReleasedListPSAck {
	A_SEQUENCE_OF(struct NGAP_PDUSessionResourceReleasedItemPSAck) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionResourceReleasedListPSAck_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceReleasedListPSAck;
extern asn_SET_OF_specifics_t asn_SPC_NGAP_PDUSessionResourceReleasedListPSAck_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_PDUSessionResourceReleasedListPSAck_1[1];
extern asn_per_constraints_t asn_PER_type_NGAP_PDUSessionResourceReleasedListPSAck_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionResourceReleasedListPSAck_H_ */
#include <asn_internal.h>
