/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_VictimSystemType_r16_H_
#define	_NR_VictimSystemType_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_VictimSystemType_r16__gps_r16 {
	NR_VictimSystemType_r16__gps_r16_true	= 0
} e_NR_VictimSystemType_r16__gps_r16;
typedef enum NR_VictimSystemType_r16__glonass_r16 {
	NR_VictimSystemType_r16__glonass_r16_true	= 0
} e_NR_VictimSystemType_r16__glonass_r16;
typedef enum NR_VictimSystemType_r16__bds_r16 {
	NR_VictimSystemType_r16__bds_r16_true	= 0
} e_NR_VictimSystemType_r16__bds_r16;
typedef enum NR_VictimSystemType_r16__galileo_r16 {
	NR_VictimSystemType_r16__galileo_r16_true	= 0
} e_NR_VictimSystemType_r16__galileo_r16;
typedef enum NR_VictimSystemType_r16__navIC_r16 {
	NR_VictimSystemType_r16__navIC_r16_true	= 0
} e_NR_VictimSystemType_r16__navIC_r16;
typedef enum NR_VictimSystemType_r16__wlan_r16 {
	NR_VictimSystemType_r16__wlan_r16_true	= 0
} e_NR_VictimSystemType_r16__wlan_r16;
typedef enum NR_VictimSystemType_r16__bluetooth_r16 {
	NR_VictimSystemType_r16__bluetooth_r16_true	= 0
} e_NR_VictimSystemType_r16__bluetooth_r16;

/* NR_VictimSystemType-r16 */
typedef struct NR_VictimSystemType_r16 {
	long	*gps_r16;	/* OPTIONAL */
	long	*glonass_r16;	/* OPTIONAL */
	long	*bds_r16;	/* OPTIONAL */
	long	*galileo_r16;	/* OPTIONAL */
	long	*navIC_r16;	/* OPTIONAL */
	long	*wlan_r16;	/* OPTIONAL */
	long	*bluetooth_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VictimSystemType_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gps_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_glonass_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_bds_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_galileo_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_navIC_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_wlan_r16_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_bluetooth_r16_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_VictimSystemType_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_VictimSystemType_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_VictimSystemType_r16_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_VictimSystemType_r16_H_ */
#include <asn_internal.h>