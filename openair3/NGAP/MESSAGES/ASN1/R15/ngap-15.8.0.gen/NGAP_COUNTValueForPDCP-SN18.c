/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#include "NGAP_COUNTValueForPDCP-SN18.h"

#include "NGAP_ProtocolExtensionContainer.h"
static int
memb_NGAP_pDCP_SN18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 262143)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NGAP_hFN_PDCP_SN18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 16383)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_NGAP_pDCP_SN18_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 18, -1,  0,  262143 }	/* (0..262143) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NGAP_hFN_PDCP_SN18_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 14,  14,  0,  16383 }	/* (0..16383) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NGAP_COUNTValueForPDCP_SN18_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_COUNTValueForPDCP_SN18, pDCP_SN18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NGAP_pDCP_SN18_constr_2,  memb_NGAP_pDCP_SN18_constraint_1 },
		0, 0, /* No default value */
		"pDCP-SN18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_COUNTValueForPDCP_SN18, hFN_PDCP_SN18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NGAP_hFN_PDCP_SN18_constr_3,  memb_NGAP_hFN_PDCP_SN18_constraint_1 },
		0, 0, /* No default value */
		"hFN-PDCP-SN18"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_COUNTValueForPDCP_SN18, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_6861P33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_COUNTValueForPDCP_SN18_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_NGAP_COUNTValueForPDCP_SN18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_COUNTValueForPDCP_SN18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pDCP-SN18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hFN-PDCP-SN18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_COUNTValueForPDCP_SN18_specs_1 = {
	sizeof(struct NGAP_COUNTValueForPDCP_SN18),
	offsetof(struct NGAP_COUNTValueForPDCP_SN18, _asn_ctx),
	asn_MAP_NGAP_COUNTValueForPDCP_SN18_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NGAP_COUNTValueForPDCP_SN18_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_COUNTValueForPDCP_SN18 = {
	"COUNTValueForPDCP-SN18",
	"COUNTValueForPDCP-SN18",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_COUNTValueForPDCP_SN18_tags_1,
	sizeof(asn_DEF_NGAP_COUNTValueForPDCP_SN18_tags_1)
		/sizeof(asn_DEF_NGAP_COUNTValueForPDCP_SN18_tags_1[0]), /* 1 */
	asn_DEF_NGAP_COUNTValueForPDCP_SN18_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_COUNTValueForPDCP_SN18_tags_1)
		/sizeof(asn_DEF_NGAP_COUNTValueForPDCP_SN18_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_COUNTValueForPDCP_SN18_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_COUNTValueForPDCP_SN18_specs_1	/* Additional specs */
};

