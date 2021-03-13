/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_EnhancedRNTPStartTime.h"

#include "X2AP_ProtocolExtensionContainer.h"
static int
memb_X2AP_startSFN_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_X2AP_startSubframeNumber_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_X2AP_startSFN_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  10,  10,  0,  1023 }	/* (0..1023,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_startSubframeNumber_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  9 }	/* (0..9,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_EnhancedRNTPStartTime_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_EnhancedRNTPStartTime, startSFN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_startSFN_constr_2,  memb_X2AP_startSFN_constraint_1 },
		0, 0, /* No default value */
		"startSFN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_EnhancedRNTPStartTime, startSubframeNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_startSubframeNumber_constr_3,  memb_X2AP_startSubframeNumber_constraint_1 },
		0, 0, /* No default value */
		"startSubframeNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_EnhancedRNTPStartTime, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P135,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_EnhancedRNTPStartTime_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_X2AP_EnhancedRNTPStartTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_EnhancedRNTPStartTime_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startSFN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* startSubframeNumber */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_EnhancedRNTPStartTime_specs_1 = {
	sizeof(struct X2AP_EnhancedRNTPStartTime),
	offsetof(struct X2AP_EnhancedRNTPStartTime, _asn_ctx),
	asn_MAP_X2AP_EnhancedRNTPStartTime_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_X2AP_EnhancedRNTPStartTime_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_EnhancedRNTPStartTime = {
	"EnhancedRNTPStartTime",
	"EnhancedRNTPStartTime",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_EnhancedRNTPStartTime_tags_1,
	sizeof(asn_DEF_X2AP_EnhancedRNTPStartTime_tags_1)
		/sizeof(asn_DEF_X2AP_EnhancedRNTPStartTime_tags_1[0]), /* 1 */
	asn_DEF_X2AP_EnhancedRNTPStartTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_EnhancedRNTPStartTime_tags_1)
		/sizeof(asn_DEF_X2AP_EnhancedRNTPStartTime_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_EnhancedRNTPStartTime_1,
	3,	/* Elements count */
	&asn_SPC_X2AP_EnhancedRNTPStartTime_specs_1	/* Additional specs */
};
