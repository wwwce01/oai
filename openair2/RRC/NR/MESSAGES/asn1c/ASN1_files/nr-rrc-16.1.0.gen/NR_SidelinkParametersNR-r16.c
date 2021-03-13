/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_SidelinkParametersNR-r16.h"

asn_TYPE_member_t asn_MBR_NR_SidelinkParametersNR_r16_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_SidelinkParametersNR_r16, rlc_ParametersSidelink_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RLC_ParametersSidelink_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-ParametersSidelink-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SidelinkParametersNR_r16, mac_ParametersSidelink_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MAC_ParametersSidelink_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-ParametersSidelink-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SidelinkParametersNR_r16, fdd_Add_UE_Sidelink_Capabilities_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UE_SidelinkCapabilityAddXDD_Mode_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-Sidelink-Capabilities-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SidelinkParametersNR_r16, tdd_Add_UE_Sidelink_Capabilities_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UE_SidelinkCapabilityAddXDD_Mode_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-Sidelink-Capabilities-r16"
		},
};
static const int asn_MAP_NR_SidelinkParametersNR_r16_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_SidelinkParametersNR_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SidelinkParametersNR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-ParametersSidelink-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mac-ParametersSidelink-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fdd-Add-UE-Sidelink-Capabilities-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* tdd-Add-UE-Sidelink-Capabilities-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SidelinkParametersNR_r16_specs_1 = {
	sizeof(struct NR_SidelinkParametersNR_r16),
	offsetof(struct NR_SidelinkParametersNR_r16, _asn_ctx),
	asn_MAP_NR_SidelinkParametersNR_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_SidelinkParametersNR_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SidelinkParametersNR_r16 = {
	"SidelinkParametersNR-r16",
	"SidelinkParametersNR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SidelinkParametersNR_r16_tags_1,
	sizeof(asn_DEF_NR_SidelinkParametersNR_r16_tags_1)
		/sizeof(asn_DEF_NR_SidelinkParametersNR_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SidelinkParametersNR_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SidelinkParametersNR_r16_tags_1)
		/sizeof(asn_DEF_NR_SidelinkParametersNR_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SidelinkParametersNR_r16_1,
	4,	/* Elements count */
	&asn_SPC_NR_SidelinkParametersNR_r16_specs_1	/* Additional specs */
};
