/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_CellMeasurementResult-Item.h"

#include "X2AP_HWLoadIndicator.h"
#include "X2AP_S1TNLLoadIndicator.h"
#include "X2AP_RadioResourceStatus.h"
#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_CellMeasurementResult_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_CellMeasurementResult_Item, cell_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cell-ID"
		},
	{ ATF_POINTER, 4, offsetof(struct X2AP_CellMeasurementResult_Item, hWLoadIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_HWLoadIndicator,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hWLoadIndicator"
		},
	{ ATF_POINTER, 3, offsetof(struct X2AP_CellMeasurementResult_Item, s1TNLLoadIndicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_S1TNLLoadIndicator,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s1TNLLoadIndicator"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_CellMeasurementResult_Item, radioResourceStatus),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_RadioResourceStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceStatus"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_CellMeasurementResult_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_CellMeasurementResult_Item_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_X2AP_CellMeasurementResult_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_CellMeasurementResult_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cell-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hWLoadIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* s1TNLLoadIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* radioResourceStatus */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_CellMeasurementResult_Item_specs_1 = {
	sizeof(struct X2AP_CellMeasurementResult_Item),
	offsetof(struct X2AP_CellMeasurementResult_Item, _asn_ctx),
	asn_MAP_X2AP_CellMeasurementResult_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_X2AP_CellMeasurementResult_Item_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_CellMeasurementResult_Item = {
	"CellMeasurementResult-Item",
	"CellMeasurementResult-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_CellMeasurementResult_Item_tags_1,
	sizeof(asn_DEF_X2AP_CellMeasurementResult_Item_tags_1)
		/sizeof(asn_DEF_X2AP_CellMeasurementResult_Item_tags_1[0]), /* 1 */
	asn_DEF_X2AP_CellMeasurementResult_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_CellMeasurementResult_Item_tags_1)
		/sizeof(asn_DEF_X2AP_CellMeasurementResult_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_CellMeasurementResult_Item_1,
	5,	/* Elements count */
	&asn_SPC_X2AP_CellMeasurementResult_Item_specs_1	/* Additional specs */
};

