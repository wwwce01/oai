/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "R15/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D R15/ngap-15.8.0.gen/`
 */

#ifndef	_NGAP_NgENB_ID_H_
#define	_NGAP_NgENB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_NgENB_ID_PR {
	NGAP_NgENB_ID_PR_NOTHING,	/* No components present */
	NGAP_NgENB_ID_PR_macroNgENB_ID,
	NGAP_NgENB_ID_PR_shortMacroNgENB_ID,
	NGAP_NgENB_ID_PR_longMacroNgENB_ID,
	NGAP_NgENB_ID_PR_choice_Extensions
} NGAP_NgENB_ID_PR;

/* Forward declarations */
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_NgENB-ID */
typedef struct NGAP_NgENB_ID {
	NGAP_NgENB_ID_PR present;
	union NGAP_NgENB_ID_u {
		BIT_STRING_t	 macroNgENB_ID;
		BIT_STRING_t	 shortMacroNgENB_ID;
		BIT_STRING_t	 longMacroNgENB_ID;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_NgENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_NgENB_ID;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_NgENB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_NgENB_ID_1[4];
extern asn_per_constraints_t asn_PER_type_NGAP_NgENB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_NgENB_ID_H_ */
#include <asn_internal.h>
