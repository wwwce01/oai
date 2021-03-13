/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_EthernetHeaderCompression-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_maxCID_EHC_UL_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_ehc_CID_Length_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_drb_ContinueEHC_DL_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_drb_ContinueEHC_UL_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_maxCID_EHC_UL_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  1,  32767 }	/* (1..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_ehc_CID_Length_value2enum_3[] = {
	{ 0,	5,	"bits7" },
	{ 1,	6,	"bits15" }
};
static const unsigned int asn_MAP_NR_ehc_CID_Length_enum2value_3[] = {
	1,	/* bits15(1) */
	0	/* bits7(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_ehc_CID_Length_specs_3 = {
	asn_MAP_NR_ehc_CID_Length_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_ehc_CID_Length_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_ehc_CID_Length_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ehc_CID_Length_3 = {
	"ehc-CID-Length",
	"ehc-CID-Length",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_ehc_CID_Length_tags_3,
	sizeof(asn_DEF_NR_ehc_CID_Length_tags_3)
		/sizeof(asn_DEF_NR_ehc_CID_Length_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_ehc_CID_Length_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_ehc_CID_Length_tags_3)
		/sizeof(asn_DEF_NR_ehc_CID_Length_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_NR_ehc_CID_Length_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_ehc_CID_Length_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ehc_Common_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EthernetHeaderCompression_r16__ehc_Common, ehc_CID_Length),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ehc_CID_Length_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ehc-CID-Length"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_ehc_Common_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ehc_Common_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ehc-CID-Length */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ehc_Common_specs_2 = {
	sizeof(struct NR_EthernetHeaderCompression_r16__ehc_Common),
	offsetof(struct NR_EthernetHeaderCompression_r16__ehc_Common, _asn_ctx),
	asn_MAP_NR_ehc_Common_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ehc_Common_2 = {
	"ehc-Common",
	"ehc-Common",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ehc_Common_tags_2,
	sizeof(asn_DEF_NR_ehc_Common_tags_2)
		/sizeof(asn_DEF_NR_ehc_Common_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_ehc_Common_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_ehc_Common_tags_2)
		/sizeof(asn_DEF_NR_ehc_Common_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ehc_Common_2,
	1,	/* Elements count */
	&asn_SPC_NR_ehc_Common_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_drb_ContinueEHC_DL_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_drb_ContinueEHC_DL_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_drb_ContinueEHC_DL_specs_8 = {
	asn_MAP_NR_drb_ContinueEHC_DL_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_drb_ContinueEHC_DL_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_drb_ContinueEHC_DL_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_drb_ContinueEHC_DL_8 = {
	"drb-ContinueEHC-DL",
	"drb-ContinueEHC-DL",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_drb_ContinueEHC_DL_tags_8,
	sizeof(asn_DEF_NR_drb_ContinueEHC_DL_tags_8)
		/sizeof(asn_DEF_NR_drb_ContinueEHC_DL_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_drb_ContinueEHC_DL_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_drb_ContinueEHC_DL_tags_8)
		/sizeof(asn_DEF_NR_drb_ContinueEHC_DL_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_NR_drb_ContinueEHC_DL_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_drb_ContinueEHC_DL_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ehc_Downlink_7[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_EthernetHeaderCompression_r16__ehc_Downlink, drb_ContinueEHC_DL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_drb_ContinueEHC_DL_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ContinueEHC-DL"
		},
};
static const int asn_MAP_NR_ehc_Downlink_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ehc_Downlink_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ehc_Downlink_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* drb-ContinueEHC-DL */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ehc_Downlink_specs_7 = {
	sizeof(struct NR_EthernetHeaderCompression_r16__ehc_Downlink),
	offsetof(struct NR_EthernetHeaderCompression_r16__ehc_Downlink, _asn_ctx),
	asn_MAP_NR_ehc_Downlink_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ehc_Downlink_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ehc_Downlink_7 = {
	"ehc-Downlink",
	"ehc-Downlink",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ehc_Downlink_tags_7,
	sizeof(asn_DEF_NR_ehc_Downlink_tags_7)
		/sizeof(asn_DEF_NR_ehc_Downlink_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_ehc_Downlink_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_ehc_Downlink_tags_7)
		/sizeof(asn_DEF_NR_ehc_Downlink_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ehc_Downlink_7,
	1,	/* Elements count */
	&asn_SPC_NR_ehc_Downlink_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_drb_ContinueEHC_UL_value2enum_13[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_drb_ContinueEHC_UL_enum2value_13[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_drb_ContinueEHC_UL_specs_13 = {
	asn_MAP_NR_drb_ContinueEHC_UL_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_drb_ContinueEHC_UL_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_drb_ContinueEHC_UL_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_drb_ContinueEHC_UL_13 = {
	"drb-ContinueEHC-UL",
	"drb-ContinueEHC-UL",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_drb_ContinueEHC_UL_tags_13,
	sizeof(asn_DEF_NR_drb_ContinueEHC_UL_tags_13)
		/sizeof(asn_DEF_NR_drb_ContinueEHC_UL_tags_13[0]) - 1, /* 1 */
	asn_DEF_NR_drb_ContinueEHC_UL_tags_13,	/* Same as above */
	sizeof(asn_DEF_NR_drb_ContinueEHC_UL_tags_13)
		/sizeof(asn_DEF_NR_drb_ContinueEHC_UL_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_NR_drb_ContinueEHC_UL_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_drb_ContinueEHC_UL_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ehc_Uplink_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EthernetHeaderCompression_r16__ehc_Uplink, maxCID_EHC_UL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_maxCID_EHC_UL_constr_12,  memb_NR_maxCID_EHC_UL_constraint_11 },
		0, 0, /* No default value */
		"maxCID-EHC-UL"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_EthernetHeaderCompression_r16__ehc_Uplink, drb_ContinueEHC_UL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_drb_ContinueEHC_UL_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ContinueEHC-UL"
		},
};
static const int asn_MAP_NR_ehc_Uplink_oms_11[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_ehc_Uplink_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ehc_Uplink_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxCID-EHC-UL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* drb-ContinueEHC-UL */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ehc_Uplink_specs_11 = {
	sizeof(struct NR_EthernetHeaderCompression_r16__ehc_Uplink),
	offsetof(struct NR_EthernetHeaderCompression_r16__ehc_Uplink, _asn_ctx),
	asn_MAP_NR_ehc_Uplink_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_NR_ehc_Uplink_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ehc_Uplink_11 = {
	"ehc-Uplink",
	"ehc-Uplink",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ehc_Uplink_tags_11,
	sizeof(asn_DEF_NR_ehc_Uplink_tags_11)
		/sizeof(asn_DEF_NR_ehc_Uplink_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_ehc_Uplink_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_ehc_Uplink_tags_11)
		/sizeof(asn_DEF_NR_ehc_Uplink_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ehc_Uplink_11,
	2,	/* Elements count */
	&asn_SPC_NR_ehc_Uplink_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_EthernetHeaderCompression_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EthernetHeaderCompression_r16, ehc_Common),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_ehc_Common_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ehc-Common"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_EthernetHeaderCompression_r16, ehc_Downlink),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_ehc_Downlink_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ehc-Downlink"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_EthernetHeaderCompression_r16, ehc_Uplink),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_ehc_Uplink_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ehc-Uplink"
		},
};
static const int asn_MAP_NR_EthernetHeaderCompression_r16_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_EthernetHeaderCompression_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_EthernetHeaderCompression_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ehc-Common */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ehc-Downlink */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ehc-Uplink */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_EthernetHeaderCompression_r16_specs_1 = {
	sizeof(struct NR_EthernetHeaderCompression_r16),
	offsetof(struct NR_EthernetHeaderCompression_r16, _asn_ctx),
	asn_MAP_NR_EthernetHeaderCompression_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_EthernetHeaderCompression_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_EthernetHeaderCompression_r16 = {
	"EthernetHeaderCompression-r16",
	"EthernetHeaderCompression-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_EthernetHeaderCompression_r16_tags_1,
	sizeof(asn_DEF_NR_EthernetHeaderCompression_r16_tags_1)
		/sizeof(asn_DEF_NR_EthernetHeaderCompression_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_EthernetHeaderCompression_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_EthernetHeaderCompression_r16_tags_1)
		/sizeof(asn_DEF_NR_EthernetHeaderCompression_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_EthernetHeaderCompression_r16_1,
	3,	/* Elements count */
	&asn_SPC_NR_EthernetHeaderCompression_r16_specs_1	/* Additional specs */
};
