/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_E-RABs-ToBeModified-SgNBModReq-Item-SgNBPDCPnotpresent.h"

#include "X2AP_E-RAB-Level-QoS-Parameters.h"
#include "X2AP_GTPtunnelEndpoint.h"
#include "X2AP_ULConfiguration.h"
#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_1[] = {
	{ ATF_POINTER, 4, offsetof(struct X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent, requested_SCG_E_RAB_Level_QoS_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RAB_Level_QoS_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requested-SCG-E-RAB-Level-QoS-Parameters"
		},
	{ ATF_POINTER, 3, offsetof(struct X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent, meNB_UL_GTP_TEIDatPDCP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_GTPtunnelEndpoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"meNB-UL-GTP-TEIDatPDCP"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent, uL_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ULConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-Configuration"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P58,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requested-SCG-E-RAB-Level-QoS-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* meNB-UL-GTP-TEIDatPDCP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uL-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_specs_1 = {
	sizeof(struct X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent),
	offsetof(struct X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent, _asn_ctx),
	asn_MAP_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent = {
	"E-RABs-ToBeModified-SgNBModReq-Item-SgNBPDCPnotpresent",
	"E-RABs-ToBeModified-SgNBModReq-Item-SgNBPDCPnotpresent",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_tags_1,
	sizeof(asn_DEF_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_tags_1[0]), /* 1 */
	asn_DEF_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_1,
	4,	/* Elements count */
	&asn_SPC_X2AP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_specs_1	/* Additional specs */
};
