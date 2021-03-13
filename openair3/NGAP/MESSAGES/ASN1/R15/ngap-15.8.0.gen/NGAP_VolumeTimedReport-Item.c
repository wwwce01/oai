/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#include "NGAP_VolumeTimedReport-Item.h"

#include "NGAP_ProtocolExtensionContainer.h"
static int
memb_NGAP_startTimeStamp_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 4)) {
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
memb_NGAP_endTimeStamp_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 4)) {
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
memb_NGAP_usageCountUL_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2long(st, &value)) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0 && value <= 18446744073709551615U)) {
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
memb_NGAP_usageCountDL_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2long(st, &value)) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0 && value <= 18446744073709551615U)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_NGAP_startTimeStamp_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NGAP_endTimeStamp_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NGAP_usageCountUL_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 64, -1,  0,  18446744073709551615U }	/* (0..18446744073709551615) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NGAP_usageCountDL_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 64, -1,  0,  18446744073709551615U }	/* (0..18446744073709551615) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NGAP_VolumeTimedReport_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_VolumeTimedReport_Item, startTimeStamp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_NGAP_startTimeStamp_constr_2,  memb_NGAP_startTimeStamp_constraint_1 },
		0, 0, /* No default value */
		"startTimeStamp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_VolumeTimedReport_Item, endTimeStamp),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_NGAP_endTimeStamp_constr_3,  memb_NGAP_endTimeStamp_constraint_1 },
		0, 0, /* No default value */
		"endTimeStamp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_VolumeTimedReport_Item, usageCountUL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ 0, &asn_PER_memb_NGAP_usageCountUL_constr_4,  memb_NGAP_usageCountUL_constraint_1 },
		0, 0, /* No default value */
		"usageCountUL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_VolumeTimedReport_Item, usageCountDL),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ 0, &asn_PER_memb_NGAP_usageCountDL_constr_5,  memb_NGAP_usageCountDL_constraint_1 },
		0, 0, /* No default value */
		"usageCountDL"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_VolumeTimedReport_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_6861P193,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_VolumeTimedReport_Item_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_NGAP_VolumeTimedReport_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_VolumeTimedReport_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startTimeStamp */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* endTimeStamp */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* usageCountUL */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* usageCountDL */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_VolumeTimedReport_Item_specs_1 = {
	sizeof(struct NGAP_VolumeTimedReport_Item),
	offsetof(struct NGAP_VolumeTimedReport_Item, _asn_ctx),
	asn_MAP_NGAP_VolumeTimedReport_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NGAP_VolumeTimedReport_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_VolumeTimedReport_Item = {
	"VolumeTimedReport-Item",
	"VolumeTimedReport-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_VolumeTimedReport_Item_tags_1,
	sizeof(asn_DEF_NGAP_VolumeTimedReport_Item_tags_1)
		/sizeof(asn_DEF_NGAP_VolumeTimedReport_Item_tags_1[0]), /* 1 */
	asn_DEF_NGAP_VolumeTimedReport_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_VolumeTimedReport_Item_tags_1)
		/sizeof(asn_DEF_NGAP_VolumeTimedReport_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_VolumeTimedReport_Item_1,
	5,	/* Elements count */
	&asn_SPC_NGAP_VolumeTimedReport_Item_specs_1	/* Additional specs */
};

