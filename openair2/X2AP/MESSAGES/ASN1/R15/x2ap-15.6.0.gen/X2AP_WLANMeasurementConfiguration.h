/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#ifndef	_X2AP_WLANMeasurementConfiguration_H_
#define	_X2AP_WLANMeasurementConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_WLANMeasConfig.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_WLANMeasurementConfiguration__wlan_rssi {
	X2AP_WLANMeasurementConfiguration__wlan_rssi_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_WLANMeasurementConfiguration__wlan_rssi;
typedef enum X2AP_WLANMeasurementConfiguration__wlan_rtt {
	X2AP_WLANMeasurementConfiguration__wlan_rtt_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_WLANMeasurementConfiguration__wlan_rtt;

/* Forward declarations */
struct X2AP_WLANMeasConfigNameList;
struct X2AP_ProtocolExtensionContainer;

/* X2AP_WLANMeasurementConfiguration */
typedef struct X2AP_WLANMeasurementConfiguration {
	X2AP_WLANMeasConfig_t	 wlanMeasConfig;
	struct X2AP_WLANMeasConfigNameList	*wlanMeasConfigNameList;	/* OPTIONAL */
	long	*wlan_rssi;	/* OPTIONAL */
	long	*wlan_rtt;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_WLANMeasurementConfiguration_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_X2AP_wlan_rssi_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_X2AP_wlan_rtt_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_WLANMeasurementConfiguration;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_WLANMeasurementConfiguration_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_WLANMeasurementConfiguration_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_WLANMeasurementConfiguration_H_ */
#include <asn_internal.h>
