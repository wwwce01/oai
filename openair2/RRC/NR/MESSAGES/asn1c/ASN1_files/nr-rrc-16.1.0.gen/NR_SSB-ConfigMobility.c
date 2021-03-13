/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_SSB-ConfigMobility.h"

static asn_TYPE_member_t asn_MBR_NR_ext1_6[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_SSB_ConfigMobility__ext1, ssb_PositionQCL_Common_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SSB_PositionQCL_Relation_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-PositionQCL-Common-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SSB_ConfigMobility__ext1, ssb_PositionQCL_CellsToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SSB_PositionQCL_CellsToAddModList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-PositionQCL-CellsToAddModList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SSB_ConfigMobility__ext1, ssb_PositionQCL_CellsToRemoveList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PCI_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-PositionQCL-CellsToRemoveList-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_6[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-PositionQCL-Common-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssb-PositionQCL-CellsToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ssb-PositionQCL-CellsToRemoveList-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_6 = {
	sizeof(struct NR_SSB_ConfigMobility__ext1),
	offsetof(struct NR_SSB_ConfigMobility__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_6,
	3,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_6,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_6,
	sizeof(asn_DEF_NR_ext1_tags_6)
		/sizeof(asn_DEF_NR_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_6)
		/sizeof(asn_DEF_NR_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_6,
	3,	/* Elements count */
	&asn_SPC_NR_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SSB_ConfigMobility_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SSB_ConfigMobility, ssb_ToMeasure),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SSB_ToMeasure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-ToMeasure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SSB_ConfigMobility, deriveSSB_IndexFromCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deriveSSB-IndexFromCell"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SSB_ConfigMobility, ss_RSSI_Measurement),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SS_RSSI_Measurement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ss-RSSI-Measurement"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SSB_ConfigMobility, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_SSB_ConfigMobility_oms_1[] = { 0, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_SSB_ConfigMobility_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SSB_ConfigMobility_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-ToMeasure */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deriveSSB-IndexFromCell */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ss-RSSI-Measurement */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SSB_ConfigMobility_specs_1 = {
	sizeof(struct NR_SSB_ConfigMobility),
	offsetof(struct NR_SSB_ConfigMobility, _asn_ctx),
	asn_MAP_NR_SSB_ConfigMobility_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_SSB_ConfigMobility_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SSB_ConfigMobility = {
	"SSB-ConfigMobility",
	"SSB-ConfigMobility",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SSB_ConfigMobility_tags_1,
	sizeof(asn_DEF_NR_SSB_ConfigMobility_tags_1)
		/sizeof(asn_DEF_NR_SSB_ConfigMobility_tags_1[0]), /* 1 */
	asn_DEF_NR_SSB_ConfigMobility_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SSB_ConfigMobility_tags_1)
		/sizeof(asn_DEF_NR_SSB_ConfigMobility_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SSB_ConfigMobility_1,
	4,	/* Elements count */
	&asn_SPC_NR_SSB_ConfigMobility_specs_1	/* Additional specs */
};
