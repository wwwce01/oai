/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-CommonDataTypes"
 * 	found in "R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D R14/m3ap-14.0.0.gen/`
 */

#ifndef	_M3AP_ProtocolIE_ID_H_
#define	_M3AP_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M3AP_ProtocolIE-ID */
typedef long	 M3AP_ProtocolIE_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolIE_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolIE_ID;
asn_struct_free_f M3AP_ProtocolIE_ID_free;
asn_struct_print_f M3AP_ProtocolIE_ID_print;
asn_constr_check_f M3AP_ProtocolIE_ID_constraint;
ber_type_decoder_f M3AP_ProtocolIE_ID_decode_ber;
der_type_encoder_f M3AP_ProtocolIE_ID_encode_der;
xer_type_decoder_f M3AP_ProtocolIE_ID_decode_xer;
xer_type_encoder_f M3AP_ProtocolIE_ID_encode_xer;
per_type_decoder_f M3AP_ProtocolIE_ID_decode_uper;
per_type_encoder_f M3AP_ProtocolIE_ID_encode_uper;
per_type_decoder_f M3AP_ProtocolIE_ID_decode_aper;
per_type_encoder_f M3AP_ProtocolIE_ID_encode_aper;
#define M3AP_ProtocolIE_ID_id_MME_MBMS_M3AP_ID	((M3AP_ProtocolIE_ID_t)0)
#define M3AP_ProtocolIE_ID_id_MCE_MBMS_M3AP_ID	((M3AP_ProtocolIE_ID_t)1)
#define M3AP_ProtocolIE_ID_id_TMGI	((M3AP_ProtocolIE_ID_t)2)
#define M3AP_ProtocolIE_ID_id_MBMS_Session_ID	((M3AP_ProtocolIE_ID_t)3)
#define M3AP_ProtocolIE_ID_id_MBMS_E_RAB_QoS_Parameters	((M3AP_ProtocolIE_ID_t)4)
#define M3AP_ProtocolIE_ID_id_MBMS_Session_Duration	((M3AP_ProtocolIE_ID_t)5)
#define M3AP_ProtocolIE_ID_id_MBMS_Service_Area	((M3AP_ProtocolIE_ID_t)6)
#define M3AP_ProtocolIE_ID_id_TNL_Information	((M3AP_ProtocolIE_ID_t)7)
#define M3AP_ProtocolIE_ID_id_CriticalityDiagnostics	((M3AP_ProtocolIE_ID_t)8)
#define M3AP_ProtocolIE_ID_id_Cause	((M3AP_ProtocolIE_ID_t)9)
#define M3AP_ProtocolIE_ID_id_MBMS_Service_Area_List	((M3AP_ProtocolIE_ID_t)10)
#define M3AP_ProtocolIE_ID_id_MBMS_Service_Area_List_Item	((M3AP_ProtocolIE_ID_t)11)
#define M3AP_ProtocolIE_ID_id_TimeToWait	((M3AP_ProtocolIE_ID_t)12)
#define M3AP_ProtocolIE_ID_id_ResetType	((M3AP_ProtocolIE_ID_t)13)
#define M3AP_ProtocolIE_ID_id_MBMS_Service_associatedLogicalM3_ConnectionItem	((M3AP_ProtocolIE_ID_t)14)
#define M3AP_ProtocolIE_ID_id_MBMS_Service_associatedLogicalM3_ConnectionListResAck	((M3AP_ProtocolIE_ID_t)15)
#define M3AP_ProtocolIE_ID_id_MinimumTimeToMBMSDataTransfer	((M3AP_ProtocolIE_ID_t)16)
#define M3AP_ProtocolIE_ID_id_AllocationAndRetentionPriority	((M3AP_ProtocolIE_ID_t)17)
#define M3AP_ProtocolIE_ID_id_Global_MCE_ID	((M3AP_ProtocolIE_ID_t)18)
#define M3AP_ProtocolIE_ID_id_MCEname	((M3AP_ProtocolIE_ID_t)19)
#define M3AP_ProtocolIE_ID_id_MBMSServiceAreaList	((M3AP_ProtocolIE_ID_t)20)
#define M3AP_ProtocolIE_ID_id_Time_ofMBMS_DataTransfer	((M3AP_ProtocolIE_ID_t)21)
#define M3AP_ProtocolIE_ID_id_Time_ofMBMS_DataStop	((M3AP_ProtocolIE_ID_t)22)
#define M3AP_ProtocolIE_ID_id_Reestablishment	((M3AP_ProtocolIE_ID_t)23)
#define M3AP_ProtocolIE_ID_id_Alternative_TNL_Information	((M3AP_ProtocolIE_ID_t)24)
#define M3AP_ProtocolIE_ID_id_MBMS_Cell_List	((M3AP_ProtocolIE_ID_t)25)

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_ProtocolIE_ID_H_ */
#include <asn_internal.h>