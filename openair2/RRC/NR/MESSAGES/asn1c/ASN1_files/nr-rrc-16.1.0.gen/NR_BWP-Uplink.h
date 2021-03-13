/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_BWP_Uplink_H_
#define	_NR_BWP_Uplink_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_BWP-Id.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_BWP_UplinkCommon;
struct NR_BWP_UplinkDedicated;

/* NR_BWP-Uplink */
typedef struct NR_BWP_Uplink {
	NR_BWP_Id_t	 bwp_Id;
	struct NR_BWP_UplinkCommon	*bwp_Common;	/* OPTIONAL */
	struct NR_BWP_UplinkDedicated	*bwp_Dedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BWP_Uplink_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_BWP_Uplink;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BWP_Uplink_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BWP_Uplink_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_BWP-UplinkCommon.h"
#include "NR_BWP-UplinkDedicated.h"

#endif	/* _NR_BWP_Uplink_H_ */
#include <asn_internal.h>