/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_MeasResultForRSSI-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_channelOccupancy_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 100)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_rssi_Result_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_channelOccupancy_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  100 }	/* (0..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_rssi_Result_r16_value2enum_2[] = {
	{ 0,	3,	"ffs" }
};
static const unsigned int asn_MAP_NR_rssi_Result_r16_enum2value_2[] = {
	0	/* ffs(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_rssi_Result_r16_specs_2 = {
	asn_MAP_NR_rssi_Result_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_rssi_Result_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_rssi_Result_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_rssi_Result_r16_2 = {
	"rssi-Result-r16",
	"rssi-Result-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_rssi_Result_r16_tags_2,
	sizeof(asn_DEF_NR_rssi_Result_r16_tags_2)
		/sizeof(asn_DEF_NR_rssi_Result_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_rssi_Result_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_rssi_Result_r16_tags_2)
		/sizeof(asn_DEF_NR_rssi_Result_r16_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_rssi_Result_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_rssi_Result_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MeasResultForRSSI_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasResultForRSSI_r16, rssi_Result_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_rssi_Result_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rssi-Result-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasResultForRSSI_r16, channelOccupancy_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_channelOccupancy_r16_constr_4,  memb_NR_channelOccupancy_r16_constraint_1 },
		0, 0, /* No default value */
		"channelOccupancy-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_MeasResultForRSSI_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MeasResultForRSSI_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rssi-Result-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* channelOccupancy-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MeasResultForRSSI_r16_specs_1 = {
	sizeof(struct NR_MeasResultForRSSI_r16),
	offsetof(struct NR_MeasResultForRSSI_r16, _asn_ctx),
	asn_MAP_NR_MeasResultForRSSI_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MeasResultForRSSI_r16 = {
	"MeasResultForRSSI-r16",
	"MeasResultForRSSI-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MeasResultForRSSI_r16_tags_1,
	sizeof(asn_DEF_NR_MeasResultForRSSI_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasResultForRSSI_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_MeasResultForRSSI_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MeasResultForRSSI_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasResultForRSSI_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_MeasResultForRSSI_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_MeasResultForRSSI_r16_specs_1	/* Additional specs */
};
