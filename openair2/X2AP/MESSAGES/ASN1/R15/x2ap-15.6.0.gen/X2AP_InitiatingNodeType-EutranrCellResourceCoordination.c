/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_InitiatingNodeType-EutranrCellResourceCoordination.h"

asn_per_constraints_t asn_PER_type_X2AP_InitiatingNodeType_EutranrCellResourceCoordination_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_InitiatingNodeType_EutranrCellResourceCoordination_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_InitiatingNodeType_EutranrCellResourceCoordination, choice.initiate_eNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolIE_Container_8370P92,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"initiate-eNB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_InitiatingNodeType_EutranrCellResourceCoordination, choice.initiate_en_gNB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolIE_Container_8370P93,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"initiate-en-gNB"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_InitiatingNodeType_EutranrCellResourceCoordination_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initiate-eNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* initiate-en-gNB */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_InitiatingNodeType_EutranrCellResourceCoordination_specs_1 = {
	sizeof(struct X2AP_InitiatingNodeType_EutranrCellResourceCoordination),
	offsetof(struct X2AP_InitiatingNodeType_EutranrCellResourceCoordination, _asn_ctx),
	offsetof(struct X2AP_InitiatingNodeType_EutranrCellResourceCoordination, present),
	sizeof(((struct X2AP_InitiatingNodeType_EutranrCellResourceCoordination *)0)->present),
	asn_MAP_X2AP_InitiatingNodeType_EutranrCellResourceCoordination_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_InitiatingNodeType_EutranrCellResourceCoordination = {
	"InitiatingNodeType-EutranrCellResourceCoordination",
	"InitiatingNodeType-EutranrCellResourceCoordination",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_InitiatingNodeType_EutranrCellResourceCoordination_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_InitiatingNodeType_EutranrCellResourceCoordination_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_InitiatingNodeType_EutranrCellResourceCoordination_specs_1	/* Additional specs */
};

