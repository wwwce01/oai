/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_AdditionalSpecialSubframePatterns.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_X2AP_AdditionalSpecialSubframePatterns_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  9 }	/* (0..9,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_AdditionalSpecialSubframePatterns_value2enum_1[] = {
	{ 0,	4,	"ssp0" },
	{ 1,	4,	"ssp1" },
	{ 2,	4,	"ssp2" },
	{ 3,	4,	"ssp3" },
	{ 4,	4,	"ssp4" },
	{ 5,	4,	"ssp5" },
	{ 6,	4,	"ssp6" },
	{ 7,	4,	"ssp7" },
	{ 8,	4,	"ssp8" },
	{ 9,	4,	"ssp9" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_AdditionalSpecialSubframePatterns_enum2value_1[] = {
	0,	/* ssp0(0) */
	1,	/* ssp1(1) */
	2,	/* ssp2(2) */
	3,	/* ssp3(3) */
	4,	/* ssp4(4) */
	5,	/* ssp5(5) */
	6,	/* ssp6(6) */
	7,	/* ssp7(7) */
	8,	/* ssp8(8) */
	9	/* ssp9(9) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_X2AP_AdditionalSpecialSubframePatterns_specs_1 = {
	asn_MAP_X2AP_AdditionalSpecialSubframePatterns_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_AdditionalSpecialSubframePatterns_enum2value_1,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	11,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_AdditionalSpecialSubframePatterns_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_AdditionalSpecialSubframePatterns = {
	"AdditionalSpecialSubframePatterns",
	"AdditionalSpecialSubframePatterns",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_AdditionalSpecialSubframePatterns_tags_1,
	sizeof(asn_DEF_X2AP_AdditionalSpecialSubframePatterns_tags_1)
		/sizeof(asn_DEF_X2AP_AdditionalSpecialSubframePatterns_tags_1[0]), /* 1 */
	asn_DEF_X2AP_AdditionalSpecialSubframePatterns_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_AdditionalSpecialSubframePatterns_tags_1)
		/sizeof(asn_DEF_X2AP_AdditionalSpecialSubframePatterns_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_AdditionalSpecialSubframePatterns_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_AdditionalSpecialSubframePatterns_specs_1	/* Additional specs */
};

