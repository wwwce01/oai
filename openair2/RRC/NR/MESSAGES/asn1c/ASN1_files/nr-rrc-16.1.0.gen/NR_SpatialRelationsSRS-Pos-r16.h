/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SpatialRelationsSRS_Pos_r16_H_
#define	_NR_SpatialRelationsSRS_Pos_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnSSB_Serving_r16 {
	NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnSSB_Serving_r16_supported	= 0
} e_NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnSSB_Serving_r16;
typedef enum NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16 {
	NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16_supported	= 0
} e_NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16;
typedef enum NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnPRS_Serving_r16 {
	NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnPRS_Serving_r16_supported	= 0
} e_NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnPRS_Serving_r16;
typedef enum NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnSRS_r16 {
	NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnSRS_r16_supported	= 0
} e_NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnSRS_r16;
typedef enum NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnSSB_Neigh_r16 {
	NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnSSB_Neigh_r16_supported	= 0
} e_NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnSSB_Neigh_r16;
typedef enum NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnPRS_Neigh_r16 {
	NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnPRS_Neigh_r16_supported	= 0
} e_NR_SpatialRelationsSRS_Pos_r16__spatialRelation_SRS_PosBasedOnPRS_Neigh_r16;

/* NR_SpatialRelationsSRS-Pos-r16 */
typedef struct NR_SpatialRelationsSRS_Pos_r16 {
	long	*spatialRelation_SRS_PosBasedOnSSB_Serving_r16;	/* OPTIONAL */
	long	*spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16;	/* OPTIONAL */
	long	*spatialRelation_SRS_PosBasedOnPRS_Serving_r16;	/* OPTIONAL */
	long	*spatialRelation_SRS_PosBasedOnSRS_r16;	/* OPTIONAL */
	long	*spatialRelation_SRS_PosBasedOnSSB_Neigh_r16;	/* OPTIONAL */
	long	*spatialRelation_SRS_PosBasedOnPRS_Neigh_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SpatialRelationsSRS_Pos_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_spatialRelation_SRS_PosBasedOnSSB_Serving_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_spatialRelation_SRS_PosBasedOnPRS_Serving_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_spatialRelation_SRS_PosBasedOnSRS_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_spatialRelation_SRS_PosBasedOnSSB_Neigh_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_spatialRelation_SRS_PosBasedOnPRS_Neigh_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SpatialRelationsSRS_Pos_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SpatialRelationsSRS_Pos_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SpatialRelationsSRS_Pos_r16_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SpatialRelationsSRS_Pos_r16_H_ */
#include <asn_internal.h>