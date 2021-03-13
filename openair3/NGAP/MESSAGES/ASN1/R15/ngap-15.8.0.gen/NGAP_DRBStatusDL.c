/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#include "NGAP_DRBStatusDL.h"

#include "NGAP_DRBStatusDL12.h"
#include "NGAP_DRBStatusDL18.h"
#include "NGAP_ProtocolIE-SingleContainer.h"
asn_per_constraints_t asn_PER_type_NGAP_DRBStatusDL_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NGAP_DRBStatusDL_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NGAP_DRBStatusDL, choice.dRBStatusDL12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_DRBStatusDL12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBStatusDL12"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_DRBStatusDL, choice.dRBStatusDL18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_DRBStatusDL18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBStatusDL18"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_DRBStatusDL, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolIE_SingleContainer_6813P6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_DRBStatusDL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRBStatusDL12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dRBStatusDL18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_NGAP_DRBStatusDL_specs_1 = {
	sizeof(struct NGAP_DRBStatusDL),
	offsetof(struct NGAP_DRBStatusDL, _asn_ctx),
	offsetof(struct NGAP_DRBStatusDL, present),
	sizeof(((struct NGAP_DRBStatusDL *)0)->present),
	asn_MAP_NGAP_DRBStatusDL_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_DRBStatusDL = {
	"DRBStatusDL",
	"DRBStatusDL",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NGAP_DRBStatusDL_constr_1, CHOICE_constraint },
	asn_MBR_NGAP_DRBStatusDL_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_DRBStatusDL_specs_1	/* Additional specs */
};

