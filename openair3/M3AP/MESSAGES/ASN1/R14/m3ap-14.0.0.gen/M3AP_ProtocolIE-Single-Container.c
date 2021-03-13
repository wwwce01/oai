/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-Containers"
 * 	found in "R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m3ap-14.0.0.gen/`
 */

#include "M3AP_ProtocolIE-Single-Container.h"

/*
 * This type is implemented using M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_M3AP_ProtocolIE_Single_Container_1006P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolIE_Single_Container_1006P0 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M3AP_ProtocolIE_Single_Container_1006P0_tags_1,
	sizeof(asn_DEF_M3AP_ProtocolIE_Single_Container_1006P0_tags_1)
		/sizeof(asn_DEF_M3AP_ProtocolIE_Single_Container_1006P0_tags_1[0]), /* 1 */
	asn_DEF_M3AP_ProtocolIE_Single_Container_1006P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_M3AP_ProtocolIE_Single_Container_1006P0_tags_1)
		/sizeof(asn_DEF_M3AP_ProtocolIE_Single_Container_1006P0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes_1,
	3,	/* Elements count */
	&asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes_specs_1	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_M3AP_ProtocolIE_Single_Container_1006P1_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolIE_Single_Container_1006P1 = {
	"ProtocolIE-Single-Container",
	"ProtocolIE-Single-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_M3AP_ProtocolIE_Single_Container_1006P1_tags_2,
	sizeof(asn_DEF_M3AP_ProtocolIE_Single_Container_1006P1_tags_2)
		/sizeof(asn_DEF_M3AP_ProtocolIE_Single_Container_1006P1_tags_2[0]), /* 1 */
	asn_DEF_M3AP_ProtocolIE_Single_Container_1006P1_tags_2,	/* Same as above */
	sizeof(asn_DEF_M3AP_ProtocolIE_Single_Container_1006P1_tags_2)
		/sizeof(asn_DEF_M3AP_ProtocolIE_Single_Container_1006P1_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck_5,
	3,	/* Elements count */
	&asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck_specs_5	/* Additional specs */
};
