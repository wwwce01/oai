/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_ULResourcesULandDLSharing.h"

asn_per_constraints_t asn_PER_type_X2AP_ULResourcesULandDLSharing_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_ULResourcesULandDLSharing_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_ULResourcesULandDLSharing, choice.unchanged),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"unchanged"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_ULResourcesULandDLSharing, choice.changed),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ULResourceBitmapULandDLSharing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"changed"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_ULResourcesULandDLSharing_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* unchanged */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* changed */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_ULResourcesULandDLSharing_specs_1 = {
	sizeof(struct X2AP_ULResourcesULandDLSharing),
	offsetof(struct X2AP_ULResourcesULandDLSharing, _asn_ctx),
	offsetof(struct X2AP_ULResourcesULandDLSharing, present),
	sizeof(((struct X2AP_ULResourcesULandDLSharing *)0)->present),
	asn_MAP_X2AP_ULResourcesULandDLSharing_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ULResourcesULandDLSharing = {
	"ULResourcesULandDLSharing",
	"ULResourcesULandDLSharing",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_ULResourcesULandDLSharing_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_ULResourcesULandDLSharing_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_ULResourcesULandDLSharing_specs_1	/* Additional specs */
};

