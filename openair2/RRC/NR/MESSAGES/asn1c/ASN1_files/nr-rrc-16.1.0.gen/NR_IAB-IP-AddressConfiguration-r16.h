/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_IAB_IP_AddressConfiguration_r16_H_
#define	_NR_IAB_IP_AddressConfiguration_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_IAB-IP-AddressIndex-r16.h"
#include "NR_IAB-IP-Usage-r16.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_IAB_IP_Address_r16;

/* NR_IAB-IP-AddressConfiguration-r16 */
typedef struct NR_IAB_IP_AddressConfiguration_r16 {
	NR_IAB_IP_AddressIndex_r16_t	 iab_IP_AddressIndex_r16;
	struct NR_IAB_IP_Address_r16	*iab_IP_Address_r16;	/* OPTIONAL */
	NR_IAB_IP_Usage_r16_t	*iab_IP_Usage_r16;	/* OPTIONAL */
	BIT_STRING_t	*iab_donor_DU_BAP_Address_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_IAB_IP_AddressConfiguration_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_IAB_IP_AddressConfiguration_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_IAB_IP_AddressConfiguration_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_IAB_IP_AddressConfiguration_r16_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_IAB-IP-Address-r16.h"

#endif	/* _NR_IAB_IP_AddressConfiguration_r16_H_ */
#include <asn_internal.h>