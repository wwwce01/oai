/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#include "NGAP_XnTNLConfigurationInfo.h"

#include "NGAP_XnExtTLAs.h"
#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_XnTNLConfigurationInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_XnTNLConfigurationInfo, xnTransportLayerAddresses),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_XnTLAs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xnTransportLayerAddresses"
		},
	{ ATF_POINTER, 2, offsetof(struct NGAP_XnTNLConfigurationInfo, xnExtendedTransportLayerAddresses),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_XnExtTLAs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xnExtendedTransportLayerAddresses"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_XnTNLConfigurationInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_6861P195,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_XnTNLConfigurationInfo_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NGAP_XnTNLConfigurationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_XnTNLConfigurationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* xnTransportLayerAddresses */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* xnExtendedTransportLayerAddresses */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_XnTNLConfigurationInfo_specs_1 = {
	sizeof(struct NGAP_XnTNLConfigurationInfo),
	offsetof(struct NGAP_XnTNLConfigurationInfo, _asn_ctx),
	asn_MAP_NGAP_XnTNLConfigurationInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NGAP_XnTNLConfigurationInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_XnTNLConfigurationInfo = {
	"XnTNLConfigurationInfo",
	"XnTNLConfigurationInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_XnTNLConfigurationInfo_tags_1,
	sizeof(asn_DEF_NGAP_XnTNLConfigurationInfo_tags_1)
		/sizeof(asn_DEF_NGAP_XnTNLConfigurationInfo_tags_1[0]), /* 1 */
	asn_DEF_NGAP_XnTNLConfigurationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_XnTNLConfigurationInfo_tags_1)
		/sizeof(asn_DEF_NGAP_XnTNLConfigurationInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_XnTNLConfigurationInfo_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_XnTNLConfigurationInfo_specs_1	/* Additional specs */
};

