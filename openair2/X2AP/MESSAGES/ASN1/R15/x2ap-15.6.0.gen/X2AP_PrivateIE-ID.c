/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R15/x2ap-15.6.0.gen`
 */

#include "X2AP_PrivateIE-ID.h"

static int
memb_X2AP_local_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_X2AP_local_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_X2AP_PrivateIE_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_PrivateIE_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_PrivateIE_ID, choice.local),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_local_constr_2,  memb_X2AP_local_constraint_1 },
		0, 0, /* No default value */
		"local"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_PrivateIE_ID, choice.global),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OBJECT_IDENTIFIER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"global"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_PrivateIE_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* local */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* global */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_PrivateIE_ID_specs_1 = {
	sizeof(struct X2AP_PrivateIE_ID),
	offsetof(struct X2AP_PrivateIE_ID, _asn_ctx),
	offsetof(struct X2AP_PrivateIE_ID, present),
	sizeof(((struct X2AP_PrivateIE_ID *)0)->present),
	asn_MAP_X2AP_PrivateIE_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_PrivateIE_ID = {
	"PrivateIE-ID",
	"PrivateIE-ID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_PrivateIE_ID_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_PrivateIE_ID_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_PrivateIE_ID_specs_1	/* Additional specs */
};

