/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_AllocationAndRetentionPriority.h"

#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_AllocationAndRetentionPriority_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_AllocationAndRetentionPriority, priorityLevel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_PriorityLevel,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priorityLevel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_AllocationAndRetentionPriority, pre_emptionCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_Pre_emptionCapability,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pre-emptionCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_AllocationAndRetentionPriority, pre_emptionVulnerability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_Pre_emptionVulnerability,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pre-emptionVulnerability"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_AllocationAndRetentionPriority, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P106,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_AllocationAndRetentionPriority_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_X2AP_AllocationAndRetentionPriority_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_AllocationAndRetentionPriority_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityLevel */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pre-emptionCapability */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pre-emptionVulnerability */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_AllocationAndRetentionPriority_specs_1 = {
	sizeof(struct X2AP_AllocationAndRetentionPriority),
	offsetof(struct X2AP_AllocationAndRetentionPriority, _asn_ctx),
	asn_MAP_X2AP_AllocationAndRetentionPriority_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_X2AP_AllocationAndRetentionPriority_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_AllocationAndRetentionPriority = {
	"AllocationAndRetentionPriority",
	"AllocationAndRetentionPriority",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_AllocationAndRetentionPriority_tags_1,
	sizeof(asn_DEF_X2AP_AllocationAndRetentionPriority_tags_1)
		/sizeof(asn_DEF_X2AP_AllocationAndRetentionPriority_tags_1[0]), /* 1 */
	asn_DEF_X2AP_AllocationAndRetentionPriority_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_AllocationAndRetentionPriority_tags_1)
		/sizeof(asn_DEF_X2AP_AllocationAndRetentionPriority_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_AllocationAndRetentionPriority_1,
	4,	/* Elements count */
	&asn_SPC_X2AP_AllocationAndRetentionPriority_specs_1	/* Additional specs */
};

