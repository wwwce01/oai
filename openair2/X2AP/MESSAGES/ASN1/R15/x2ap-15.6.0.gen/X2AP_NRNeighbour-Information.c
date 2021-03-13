/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_NRNeighbour-Information.h"

#include "X2AP_ProtocolExtensionContainer.h"
static asn_per_constraints_t asn_PER_type_X2AP_nRNeighbourModeInfo_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_X2AP_NRNeighbour_Information_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2AP_nRNeighbourModeInfo_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_NRNeighbour_Information__Member__nRNeighbourModeInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_FDD_InfoNeighbourServedNRCell_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_NRNeighbour_Information__Member__nRNeighbourModeInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_TDD_InfoNeighbourServedNRCell_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_nRNeighbourModeInfo_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_X2AP_nRNeighbourModeInfo_specs_8 = {
	sizeof(struct X2AP_NRNeighbour_Information__Member__nRNeighbourModeInfo),
	offsetof(struct X2AP_NRNeighbour_Information__Member__nRNeighbourModeInfo, _asn_ctx),
	offsetof(struct X2AP_NRNeighbour_Information__Member__nRNeighbourModeInfo, present),
	sizeof(((struct X2AP_NRNeighbour_Information__Member__nRNeighbourModeInfo *)0)->present),
	asn_MAP_X2AP_nRNeighbourModeInfo_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_nRNeighbourModeInfo_8 = {
	"nRNeighbourModeInfo",
	"nRNeighbourModeInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_nRNeighbourModeInfo_constr_8, CHOICE_constraint },
	asn_MBR_X2AP_nRNeighbourModeInfo_8,
	2,	/* Elements count */
	&asn_SPC_X2AP_nRNeighbourModeInfo_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_X2AP_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_NRNeighbour_Information__Member, nrpCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_NRPCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrpCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_NRNeighbour_Information__Member, nrCellID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrCellID"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_NRNeighbour_Information__Member, fiveGS_TAC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_FiveGS_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveGS-TAC"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_NRNeighbour_Information__Member, configured_TAC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configured-TAC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_NRNeighbour_Information__Member, measurementTimingConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementTimingConfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_NRNeighbour_Information__Member, nRNeighbourModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_X2AP_nRNeighbourModeInfo_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRNeighbourModeInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_NRNeighbour_Information__Member, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P175,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_Member_oms_2[] = { 2, 3, 6 };
static const ber_tlv_tag_t asn_DEF_X2AP_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrpCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nrCellID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fiveGS-TAC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* configured-TAC */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measurementTimingConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* nRNeighbourModeInfo */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_Member_specs_2 = {
	sizeof(struct X2AP_NRNeighbour_Information__Member),
	offsetof(struct X2AP_NRNeighbour_Information__Member, _asn_ctx),
	asn_MAP_X2AP_Member_tag2el_2,
	7,	/* Count of tags in the map */
	asn_MAP_X2AP_Member_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_Member_tags_2,
	sizeof(asn_DEF_X2AP_Member_tags_2)
		/sizeof(asn_DEF_X2AP_Member_tags_2[0]), /* 1 */
	asn_DEF_X2AP_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_X2AP_Member_tags_2)
		/sizeof(asn_DEF_X2AP_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_Member_2,
	7,	/* Elements count */
	&asn_SPC_X2AP_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_X2AP_NRNeighbour_Information_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_NRNeighbour_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_X2AP_NRNeighbour_Information_specs_1 = {
	sizeof(struct X2AP_NRNeighbour_Information),
	offsetof(struct X2AP_NRNeighbour_Information, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_NRNeighbour_Information = {
	"NRNeighbour-Information",
	"NRNeighbour-Information",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_X2AP_NRNeighbour_Information_tags_1,
	sizeof(asn_DEF_X2AP_NRNeighbour_Information_tags_1)
		/sizeof(asn_DEF_X2AP_NRNeighbour_Information_tags_1[0]), /* 1 */
	asn_DEF_X2AP_NRNeighbour_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_NRNeighbour_Information_tags_1)
		/sizeof(asn_DEF_X2AP_NRNeighbour_Information_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_NRNeighbour_Information_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_X2AP_NRNeighbour_Information_1,
	1,	/* Single element */
	&asn_SPC_X2AP_NRNeighbour_Information_specs_1	/* Additional specs */
};

