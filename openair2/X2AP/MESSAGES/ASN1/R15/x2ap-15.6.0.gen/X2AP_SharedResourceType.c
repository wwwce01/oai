/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_SharedResourceType.h"

asn_per_constraints_t asn_PER_type_X2AP_SharedResourceType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_SharedResourceType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_SharedResourceType, choice.uLOnlySharing),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ULOnlySharing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uLOnlySharing"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_SharedResourceType, choice.uLandDLSharing),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ULandDLSharing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uLandDLSharing"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_SharedResourceType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uLOnlySharing */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uLandDLSharing */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_SharedResourceType_specs_1 = {
	sizeof(struct X2AP_SharedResourceType),
	offsetof(struct X2AP_SharedResourceType, _asn_ctx),
	offsetof(struct X2AP_SharedResourceType, present),
	sizeof(((struct X2AP_SharedResourceType *)0)->present),
	asn_MAP_X2AP_SharedResourceType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_SharedResourceType = {
	"SharedResourceType",
	"SharedResourceType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_SharedResourceType_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_SharedResourceType_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_SharedResourceType_specs_1	/* Additional specs */
};

