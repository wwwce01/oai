/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_FeatureSets.h"

static int
memb_NR_featureSetsDownlink_v1540_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_featureSetsUplink_v1540_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_featureSetsUplinkPerCC_v1540_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_featureSetsDownlink_v15a0_constraint_18(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_featureSetsDownlink_v1610_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_featureSetsUplink_v1610_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_featureSetsDownlink_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_featureSetsDownlinkPerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_featureSetsUplink_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_featureSetsUplinkPerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_featureSetsDownlink_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_featureSetsDownlinkPerCC_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_featureSetsUplink_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_featureSetsUplinkPerCC_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_featureSetsDownlink_v1540_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_featureSetsUplink_v1540_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_featureSetsUplinkPerCC_v1540_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsDownlink_v1540_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsUplink_v1540_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsUplinkPerCC_v1540_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_featureSetsDownlink_v15a0_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsDownlink_v15a0_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_featureSetsDownlink_v1610_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_featureSetsUplink_v1610_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsDownlink_v1610_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsUplink_v1610_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsDownlink_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsDownlinkPerCC_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsUplink_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_featureSetsUplinkPerCC_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_featureSetsDownlink_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetDownlink,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsDownlink_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsDownlink_specs_2 = {
	sizeof(struct NR_FeatureSets__featureSetsDownlink),
	offsetof(struct NR_FeatureSets__featureSetsDownlink, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsDownlink_2 = {
	"featureSetsDownlink",
	"featureSetsDownlink",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsDownlink_tags_2,
	sizeof(asn_DEF_NR_featureSetsDownlink_tags_2)
		/sizeof(asn_DEF_NR_featureSetsDownlink_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsDownlink_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsDownlink_tags_2)
		/sizeof(asn_DEF_NR_featureSetsDownlink_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsDownlink_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsDownlink_2,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsDownlink_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_featureSetsDownlinkPerCC_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetDownlinkPerCC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsDownlinkPerCC_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsDownlinkPerCC_specs_4 = {
	sizeof(struct NR_FeatureSets__featureSetsDownlinkPerCC),
	offsetof(struct NR_FeatureSets__featureSetsDownlinkPerCC, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsDownlinkPerCC_4 = {
	"featureSetsDownlinkPerCC",
	"featureSetsDownlinkPerCC",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsDownlinkPerCC_tags_4,
	sizeof(asn_DEF_NR_featureSetsDownlinkPerCC_tags_4)
		/sizeof(asn_DEF_NR_featureSetsDownlinkPerCC_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsDownlinkPerCC_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsDownlinkPerCC_tags_4)
		/sizeof(asn_DEF_NR_featureSetsDownlinkPerCC_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsDownlinkPerCC_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsDownlinkPerCC_4,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsDownlinkPerCC_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_featureSetsUplink_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetUplink,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsUplink_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsUplink_specs_6 = {
	sizeof(struct NR_FeatureSets__featureSetsUplink),
	offsetof(struct NR_FeatureSets__featureSetsUplink, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsUplink_6 = {
	"featureSetsUplink",
	"featureSetsUplink",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsUplink_tags_6,
	sizeof(asn_DEF_NR_featureSetsUplink_tags_6)
		/sizeof(asn_DEF_NR_featureSetsUplink_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsUplink_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsUplink_tags_6)
		/sizeof(asn_DEF_NR_featureSetsUplink_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsUplink_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsUplink_6,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsUplink_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_featureSetsUplinkPerCC_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetUplinkPerCC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsUplinkPerCC_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsUplinkPerCC_specs_8 = {
	sizeof(struct NR_FeatureSets__featureSetsUplinkPerCC),
	offsetof(struct NR_FeatureSets__featureSetsUplinkPerCC, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsUplinkPerCC_8 = {
	"featureSetsUplinkPerCC",
	"featureSetsUplinkPerCC",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsUplinkPerCC_tags_8,
	sizeof(asn_DEF_NR_featureSetsUplinkPerCC_tags_8)
		/sizeof(asn_DEF_NR_featureSetsUplinkPerCC_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsUplinkPerCC_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsUplinkPerCC_tags_8)
		/sizeof(asn_DEF_NR_featureSetsUplinkPerCC_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsUplinkPerCC_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsUplinkPerCC_8,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsUplinkPerCC_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_featureSetsDownlink_v1540_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetDownlink_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsDownlink_v1540_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsDownlink_v1540_specs_12 = {
	sizeof(struct NR_FeatureSets__ext1__featureSetsDownlink_v1540),
	offsetof(struct NR_FeatureSets__ext1__featureSetsDownlink_v1540, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsDownlink_v1540_12 = {
	"featureSetsDownlink-v1540",
	"featureSetsDownlink-v1540",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsDownlink_v1540_tags_12,
	sizeof(asn_DEF_NR_featureSetsDownlink_v1540_tags_12)
		/sizeof(asn_DEF_NR_featureSetsDownlink_v1540_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsDownlink_v1540_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsDownlink_v1540_tags_12)
		/sizeof(asn_DEF_NR_featureSetsDownlink_v1540_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsDownlink_v1540_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsDownlink_v1540_12,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsDownlink_v1540_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_featureSetsUplink_v1540_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetUplink_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsUplink_v1540_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsUplink_v1540_specs_14 = {
	sizeof(struct NR_FeatureSets__ext1__featureSetsUplink_v1540),
	offsetof(struct NR_FeatureSets__ext1__featureSetsUplink_v1540, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsUplink_v1540_14 = {
	"featureSetsUplink-v1540",
	"featureSetsUplink-v1540",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsUplink_v1540_tags_14,
	sizeof(asn_DEF_NR_featureSetsUplink_v1540_tags_14)
		/sizeof(asn_DEF_NR_featureSetsUplink_v1540_tags_14[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsUplink_v1540_tags_14,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsUplink_v1540_tags_14)
		/sizeof(asn_DEF_NR_featureSetsUplink_v1540_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsUplink_v1540_constr_14, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsUplink_v1540_14,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsUplink_v1540_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_featureSetsUplinkPerCC_v1540_16[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetUplinkPerCC_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsUplinkPerCC_v1540_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsUplinkPerCC_v1540_specs_16 = {
	sizeof(struct NR_FeatureSets__ext1__featureSetsUplinkPerCC_v1540),
	offsetof(struct NR_FeatureSets__ext1__featureSetsUplinkPerCC_v1540, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsUplinkPerCC_v1540_16 = {
	"featureSetsUplinkPerCC-v1540",
	"featureSetsUplinkPerCC-v1540",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsUplinkPerCC_v1540_tags_16,
	sizeof(asn_DEF_NR_featureSetsUplinkPerCC_v1540_tags_16)
		/sizeof(asn_DEF_NR_featureSetsUplinkPerCC_v1540_tags_16[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsUplinkPerCC_v1540_tags_16,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsUplinkPerCC_v1540_tags_16)
		/sizeof(asn_DEF_NR_featureSetsUplinkPerCC_v1540_tags_16[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsUplinkPerCC_v1540_constr_16, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsUplinkPerCC_v1540_16,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsUplinkPerCC_v1540_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_11[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_FeatureSets__ext1, featureSetsDownlink_v1540),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_featureSetsDownlink_v1540_12,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsDownlink_v1540_constr_12,  memb_NR_featureSetsDownlink_v1540_constraint_11 },
		0, 0, /* No default value */
		"featureSetsDownlink-v1540"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_FeatureSets__ext1, featureSetsUplink_v1540),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_featureSetsUplink_v1540_14,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsUplink_v1540_constr_14,  memb_NR_featureSetsUplink_v1540_constraint_11 },
		0, 0, /* No default value */
		"featureSetsUplink-v1540"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_FeatureSets__ext1, featureSetsUplinkPerCC_v1540),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_featureSetsUplinkPerCC_v1540_16,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsUplinkPerCC_v1540_constr_16,  memb_NR_featureSetsUplinkPerCC_v1540_constraint_11 },
		0, 0, /* No default value */
		"featureSetsUplinkPerCC-v1540"
		},
};
static const int asn_MAP_NR_ext1_oms_11[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* featureSetsDownlink-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* featureSetsUplink-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* featureSetsUplinkPerCC-v1540 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_11 = {
	sizeof(struct NR_FeatureSets__ext1),
	offsetof(struct NR_FeatureSets__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_11,
	3,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_11,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_11 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_11,
	sizeof(asn_DEF_NR_ext1_tags_11)
		/sizeof(asn_DEF_NR_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_11)
		/sizeof(asn_DEF_NR_ext1_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_11,
	3,	/* Elements count */
	&asn_SPC_NR_ext1_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_featureSetsDownlink_v15a0_19[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetDownlink_v15a0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsDownlink_v15a0_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsDownlink_v15a0_specs_19 = {
	sizeof(struct NR_FeatureSets__ext2__featureSetsDownlink_v15a0),
	offsetof(struct NR_FeatureSets__ext2__featureSetsDownlink_v15a0, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsDownlink_v15a0_19 = {
	"featureSetsDownlink-v15a0",
	"featureSetsDownlink-v15a0",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsDownlink_v15a0_tags_19,
	sizeof(asn_DEF_NR_featureSetsDownlink_v15a0_tags_19)
		/sizeof(asn_DEF_NR_featureSetsDownlink_v15a0_tags_19[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsDownlink_v15a0_tags_19,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsDownlink_v15a0_tags_19)
		/sizeof(asn_DEF_NR_featureSetsDownlink_v15a0_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsDownlink_v15a0_constr_19, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsDownlink_v15a0_19,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsDownlink_v15a0_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext2_18[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_FeatureSets__ext2, featureSetsDownlink_v15a0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_featureSetsDownlink_v15a0_19,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsDownlink_v15a0_constr_19,  memb_NR_featureSetsDownlink_v15a0_constraint_18 },
		0, 0, /* No default value */
		"featureSetsDownlink-v15a0"
		},
};
static const int asn_MAP_NR_ext2_oms_18[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext2_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext2_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* featureSetsDownlink-v15a0 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext2_specs_18 = {
	sizeof(struct NR_FeatureSets__ext2),
	offsetof(struct NR_FeatureSets__ext2, _asn_ctx),
	asn_MAP_NR_ext2_tag2el_18,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext2_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext2_18 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext2_tags_18,
	sizeof(asn_DEF_NR_ext2_tags_18)
		/sizeof(asn_DEF_NR_ext2_tags_18[0]) - 1, /* 1 */
	asn_DEF_NR_ext2_tags_18,	/* Same as above */
	sizeof(asn_DEF_NR_ext2_tags_18)
		/sizeof(asn_DEF_NR_ext2_tags_18[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext2_18,
	1,	/* Elements count */
	&asn_SPC_NR_ext2_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_featureSetsDownlink_v1610_22[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetDownlink_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsDownlink_v1610_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsDownlink_v1610_specs_22 = {
	sizeof(struct NR_FeatureSets__ext3__featureSetsDownlink_v1610),
	offsetof(struct NR_FeatureSets__ext3__featureSetsDownlink_v1610, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsDownlink_v1610_22 = {
	"featureSetsDownlink-v1610",
	"featureSetsDownlink-v1610",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsDownlink_v1610_tags_22,
	sizeof(asn_DEF_NR_featureSetsDownlink_v1610_tags_22)
		/sizeof(asn_DEF_NR_featureSetsDownlink_v1610_tags_22[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsDownlink_v1610_tags_22,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsDownlink_v1610_tags_22)
		/sizeof(asn_DEF_NR_featureSetsDownlink_v1610_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsDownlink_v1610_constr_22, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsDownlink_v1610_22,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsDownlink_v1610_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_featureSetsUplink_v1610_24[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_FeatureSetUplink_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_featureSetsUplink_v1610_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_featureSetsUplink_v1610_specs_24 = {
	sizeof(struct NR_FeatureSets__ext3__featureSetsUplink_v1610),
	offsetof(struct NR_FeatureSets__ext3__featureSetsUplink_v1610, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_featureSetsUplink_v1610_24 = {
	"featureSetsUplink-v1610",
	"featureSetsUplink-v1610",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_featureSetsUplink_v1610_tags_24,
	sizeof(asn_DEF_NR_featureSetsUplink_v1610_tags_24)
		/sizeof(asn_DEF_NR_featureSetsUplink_v1610_tags_24[0]) - 1, /* 1 */
	asn_DEF_NR_featureSetsUplink_v1610_tags_24,	/* Same as above */
	sizeof(asn_DEF_NR_featureSetsUplink_v1610_tags_24)
		/sizeof(asn_DEF_NR_featureSetsUplink_v1610_tags_24[0]), /* 2 */
	{ 0, &asn_PER_type_NR_featureSetsUplink_v1610_constr_24, SEQUENCE_OF_constraint },
	asn_MBR_NR_featureSetsUplink_v1610_24,
	1,	/* Single element */
	&asn_SPC_NR_featureSetsUplink_v1610_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext3_21[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_FeatureSets__ext3, featureSetsDownlink_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_featureSetsDownlink_v1610_22,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsDownlink_v1610_constr_22,  memb_NR_featureSetsDownlink_v1610_constraint_21 },
		0, 0, /* No default value */
		"featureSetsDownlink-v1610"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_FeatureSets__ext3, featureSetsUplink_v1610),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_featureSetsUplink_v1610_24,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsUplink_v1610_constr_24,  memb_NR_featureSetsUplink_v1610_constraint_21 },
		0, 0, /* No default value */
		"featureSetsUplink-v1610"
		},
};
static const int asn_MAP_NR_ext3_oms_21[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_ext3_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext3_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* featureSetsDownlink-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* featureSetsUplink-v1610 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext3_specs_21 = {
	sizeof(struct NR_FeatureSets__ext3),
	offsetof(struct NR_FeatureSets__ext3, _asn_ctx),
	asn_MAP_NR_ext3_tag2el_21,
	2,	/* Count of tags in the map */
	asn_MAP_NR_ext3_oms_21,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext3_21 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext3_tags_21,
	sizeof(asn_DEF_NR_ext3_tags_21)
		/sizeof(asn_DEF_NR_ext3_tags_21[0]) - 1, /* 1 */
	asn_DEF_NR_ext3_tags_21,	/* Same as above */
	sizeof(asn_DEF_NR_ext3_tags_21)
		/sizeof(asn_DEF_NR_ext3_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext3_21,
	2,	/* Elements count */
	&asn_SPC_NR_ext3_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_FeatureSets_1[] = {
	{ ATF_POINTER, 7, offsetof(struct NR_FeatureSets, featureSetsDownlink),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_featureSetsDownlink_2,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsDownlink_constr_2,  memb_NR_featureSetsDownlink_constraint_1 },
		0, 0, /* No default value */
		"featureSetsDownlink"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_FeatureSets, featureSetsDownlinkPerCC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_featureSetsDownlinkPerCC_4,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsDownlinkPerCC_constr_4,  memb_NR_featureSetsDownlinkPerCC_constraint_1 },
		0, 0, /* No default value */
		"featureSetsDownlinkPerCC"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_FeatureSets, featureSetsUplink),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_featureSetsUplink_6,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsUplink_constr_6,  memb_NR_featureSetsUplink_constraint_1 },
		0, 0, /* No default value */
		"featureSetsUplink"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_FeatureSets, featureSetsUplinkPerCC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_featureSetsUplinkPerCC_8,
		0,
		{ 0, &asn_PER_memb_NR_featureSetsUplinkPerCC_constr_8,  memb_NR_featureSetsUplinkPerCC_constraint_1 },
		0, 0, /* No default value */
		"featureSetsUplinkPerCC"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_FeatureSets, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_ext1_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_FeatureSets, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_ext2_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_FeatureSets, ext3),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_ext3_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_NR_FeatureSets_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_NR_FeatureSets_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_FeatureSets_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* featureSetsDownlink */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* featureSetsDownlinkPerCC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* featureSetsUplink */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* featureSetsUplinkPerCC */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_FeatureSets_specs_1 = {
	sizeof(struct NR_FeatureSets),
	offsetof(struct NR_FeatureSets, _asn_ctx),
	asn_MAP_NR_FeatureSets_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NR_FeatureSets_oms_1,	/* Optional members */
	4, 3,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_FeatureSets = {
	"FeatureSets",
	"FeatureSets",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_FeatureSets_tags_1,
	sizeof(asn_DEF_NR_FeatureSets_tags_1)
		/sizeof(asn_DEF_NR_FeatureSets_tags_1[0]), /* 1 */
	asn_DEF_NR_FeatureSets_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_FeatureSets_tags_1)
		/sizeof(asn_DEF_NR_FeatureSets_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_FeatureSets_1,
	7,	/* Elements count */
	&asn_SPC_NR_FeatureSets_specs_1	/* Additional specs */
};
