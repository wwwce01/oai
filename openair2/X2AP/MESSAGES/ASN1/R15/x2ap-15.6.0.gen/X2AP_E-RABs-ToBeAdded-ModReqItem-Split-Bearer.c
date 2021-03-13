/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_E-RABs-ToBeAdded-ModReqItem-Split-Bearer.h"

#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer, e_RAB_Level_QoS_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RAB_Level_QoS_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-Level-QoS-Parameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer, meNB_GTPtunnelEndpoint),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_GTPtunnelEndpoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"meNB-GTPtunnelEndpoint"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-RAB-Level-QoS-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* meNB-GTPtunnelEndpoint */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_specs_1 = {
	sizeof(struct X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer),
	offsetof(struct X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer, _asn_ctx),
	asn_MAP_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer = {
	"E-RABs-ToBeAdded-ModReqItem-Split-Bearer",
	"E-RABs-ToBeAdded-ModReqItem-Split-Bearer",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_tags_1,
	sizeof(asn_DEF_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_tags_1[0]), /* 1 */
	asn_DEF_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_1,
	4,	/* Elements count */
	&asn_SPC_X2AP_E_RABs_ToBeAdded_ModReqItem_Split_Bearer_specs_1	/* Additional specs */
};

