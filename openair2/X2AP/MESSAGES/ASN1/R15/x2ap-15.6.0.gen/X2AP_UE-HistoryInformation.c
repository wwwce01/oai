/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_UE-HistoryInformation.h"

#include "X2AP_LastVisitedCell-Item.h"
asn_per_constraints_t asn_PER_type_X2AP_UE_HistoryInformation_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_UE_HistoryInformation_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_X2AP_LastVisitedCell_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_UE_HistoryInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_X2AP_UE_HistoryInformation_specs_1 = {
	sizeof(struct X2AP_UE_HistoryInformation),
	offsetof(struct X2AP_UE_HistoryInformation, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_UE_HistoryInformation = {
	"UE-HistoryInformation",
	"UE-HistoryInformation",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_X2AP_UE_HistoryInformation_tags_1,
	sizeof(asn_DEF_X2AP_UE_HistoryInformation_tags_1)
		/sizeof(asn_DEF_X2AP_UE_HistoryInformation_tags_1[0]), /* 1 */
	asn_DEF_X2AP_UE_HistoryInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_UE_HistoryInformation_tags_1)
		/sizeof(asn_DEF_X2AP_UE_HistoryInformation_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_UE_HistoryInformation_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_X2AP_UE_HistoryInformation_1,
	1,	/* Single element */
	&asn_SPC_X2AP_UE_HistoryInformation_specs_1	/* Additional specs */
};

