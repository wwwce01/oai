/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.0  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/*! \file defs_NB_IoT.c
 * \brief MAC layer structures
 * \author  NTUST BMW Lab./Nick HO, Xavier LIU, Calvin HSU
 * \date 2017 - 2019
 * \email: nick133371@gmail.com, sephiroth7277@gmail.com , kai-hsiang.hsu@eurecom.fr
 * \version 1.0
 *
 */

#ifndef __LAYER2_MAC_DEFS_NB_IOT_H__
#define __LAYER2_MAC_DEFS_NB_IOT_H__
#ifdef USER_MODE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#endif
//#include "COMMON/openair_defs.h"
#include "COMMON/platform_constants.h"
#include "COMMON/mac_rrc_primitives.h"
#include "PHY/LTE_TRANSPORT/defs_NB_IoT.h"
//#include "PHY/defs.h"
#include "PHY/defs_NB_IoT.h"
#include "openair2/PHY_INTERFACE/IF_Module_NB_IoT.h"
#include "config_NB_IoT.h"

//  MAC definition
#define MAX_FRAME 0xfff
#define MAX_SUBFRAME 40960

#define MAX(a, b) (((a)>(b))?(a):(b))

//  RNTI
//#define P_RNTI      0xffee
//#define SI_RNTI     0xffff
//  RA-RNTI: 1+SFN_id>>2
#define RA_RNTI_LOW   0x0001  //  SFN_id = 0
#define RA_RNTI_HIGH  0x0100  //  SFN_id = 1023
#define C_RNTI_LOW  0x0101
#define C_RNTI_HIGH

// ULSCH LCHAN IDs
/*!\brief LCID of extended power headroom for ULSCH */
#define EXTENDED_POWER_HEADROOM 25
/*!\brief LCID of power headroom for ULSCH */
#define POWER_HEADROOM 26
/*!\brief LCID of CRNTI for ULSCH */
#define CRNTI 27
/*!\brief LCID of truncated BSR for ULSCH */
#define TRUNCATED_BSR 28
/*!\brief LCID of short BSR for ULSCH */
#define SHORT_BSR 29
/*!\brief LCID of long BSR for ULSCH */
#define LONG_BSR 30
/*! \brief Values of CCCH LCID for DLSCH */ 
#define CCCH_LCHANID 0
/*!\brief Values of BCCH logical channel */
#define BCCH 3  // SI 
/*!\brief Values of PCCH logical channel */
#define PCCH 4  // Paging 
/*!\brief Value of CCCH / SRB0 logical channel */
#define CCCH 0  // srb0
/*!\brief DCCH / SRB1 logical channel */
#define DCCH 1  // srb1
/*!\brief DCCH1 / SRB2  logical channel */
#define DCCH1 2 // srb2
/*!\brief DTCH DRB1  logical channel */
#define DTCH 3 // LCID
/*!\brief MCCH logical channel */
#define MCCH 4 
/*!\brief MTCH logical channel */
#define MTCH 1 
// DLSCH LCHAN ID
/*!\brief LCID of UE contention resolution identity for DLSCH*/
#define UE_CONT_RES 28
/*!\brief LCID of timing advance for DLSCH */
#define TIMING_ADV_CMD 29
/*!\brief LCID of discontinous reception mode for DLSCH */
#define DRX_CMD 30
/*!\brief LCID of padding LCID for DLSCH */
#define SHORT_PADDING 31

typedef enum rach_state_e
{
  initial_access = 0,
  rach_for_auth_rsp,
  rach_for_next,
}rach_state_t;


typedef enum tone_type_e
{
  sixtone = 0,
  threetone,
  singletone1,
  singletone2,
  singletone3
}tone_type_t;

typedef enum channel_NB_IoT_e
{
  NPDCCH = 0,
  NPUSCH,
  NPDSCH
}channel_NB_IoT_t;

typedef enum{
  UL = 0,
  DL
}message_direction_t;

#define MAX_NUMBER_OF_UE_MAX_NB_IoT 20
#define SCH_PAYLOAD_SIZE_MAX_NB_IoT 320
#define MAX_NUMBER_OF_SIBs_NB_IoT 16

/*!\brief Values of BCCH0 logical channel for MIB*/
#define BCCH0_NB_IoT 11 // MIB-NB_IoT
/*!\brief Values of BCCH1 logical channel for SIBs */
#define BCCH1_NB_IoT 12 // SI-SIB-NB_IoTs
/*!\brief Values of PCCH logical channel */
#define PCCH_NB_IoT 13  // Paging XXX not used for the moment
/*!\brief Value of CCCH / SRB0 logical channel */
#define CCCH_NB_IoT 0  // srb0 ---> XXX exactly the same as in LTE (commented for compilation purposes)
/*!\brief DCCH0 / SRB1bis logical channel */
#define DCCH0_NB_IoT 3  // srb1bis
/*!\brief DCCH1 / SRB1  logical channel */
#define DCCH1_NB_IoT 1 // srb1 //XXX we redefine it for the SRB1
/*!\brief DTCH0 DRB0  logical channel */
#define DTCH0_NB_IoT 4 // DRB0
/*!\brief DTCH1 DRB1  logical channel */
#define DTCH1_NB_IoT 5 // DRB1
/*Index of UE contention resoulution logical channel*/
#define UE_CONTENTION_RESOLUTION 28
/*Index of TIMING_ADVANCE logical channel*/
#define TIMING_ADVANCE 29
/*Index of DRX_COMMAND logical channel*/
#define DRX_COMMAND 30
/*Index of PADDING logical channel*/
#define PADDING 31

/*! \brief Downlink SCH PDU Structure */
typedef struct {
  uint8_t payload[SCH_PAYLOAD_SIZE_MAX_NB_IoT];
  uint32_t pdu_size;
} __attribute__ ((__packed__)) DLSCH_PDU_NB_IoT;

/*! \brief eNB template for UE context information  */
typedef struct {
    // C-RNTI of UE
  rnti_t rnti;
  // UE CE level
  int CE_level;
  // Direction of transmission(DL:0\UL:1\NONE:-1)
  int32_t direction;
  // DCI Reptition
  uint32_t R_dci;
  // MAX repetition
  uint32_t R_max;
  uint32_t special_mcs;

  // HARQ round
  uint32_t HARQ_round;
  /*Downlink information*/

  DLSCH_PDU_NB_IoT Security_pdu;
  DLSCH_PDU_NB_IoT Attach_pdu;

  /// DLSCH pdu
  DLSCH_PDU_NB_IoT DLSCH_pdu;
  // PDU size
  uint32_t DLSCH_pdu_size;
  // Data Reptition
  uint32_t R_dl;
  // MCS index
  uint32_t I_mcs_dl;
  // total downlink buffer DCCH0_NB_IoT
  uint32_t dl_buffer_DCCH0_NB_IoT;
  // NDI
  int oldNDI_DL;
  //HARQ ACK/NACK repetition
  uint32_t R_harq;

  /*Uplink information*/
  int oldNDI_UL;
  // Uplink data repeat, now just follow the rach repeat number
  uint32_t R_ul;
  // PHR value (0-3)
  uint32_t PHR;
  // The uplink data size from BSR or DVI
  uint32_t ul_total_buffer;
  // Determine if this UE support multi-tone transmission or not
  int multi_tone;
  // Next UE_template ID
  int next;
  // Previous UE_template ID
  int prev;
  // MSG4 complete
  int RRC_connected;
  uint8_t flag_schedule_success;
  // UE active flag
  boolean_t active;
  uint8_t allocated_data_size_ul;

} UE_TEMPLATE_NB_IoT;

// link list of uplink resource node 
typedef struct available_resource_UL_s{
  ///Resource start subframe
  uint32_t start_subframe;
  ///Resource end subframe
  uint32_t end_subframe;
  //pointer to next and previous node
  struct available_resource_UL_s *next, *prev;
}available_resource_UL_t;

// link list of downlink resource node
typedef struct available_resource_DL_s{
  ///Resource start subframe
  uint32_t start_subframe;
  ///Resource end subframe
  uint32_t end_subframe;
  //pointer to next and previous node
  struct available_resource_DL_s *next, *prev;
}available_resource_DL_t;

/*Structure used for scheduling*/
typedef struct{
  //resource position info.
  uint32_t sf_end,sf_start;
  //resource position info. separate by HyperSF, Frame, Subframe
  uint32_t start_h, end_h;
  uint32_t start_f, end_f;
  uint32_t start_sf, end_sf;
  //whcih available resource node is used
  available_resource_DL_t *node;
}sched_temp_DL_NB_IoT_t;

/*Structure used for UL scheduling*/
typedef struct{
  //resource position info, used subframe as unit
  uint32_t sf_end, sf_start;

  // information for allocating the resource (to fill DCIN)
  int tone;
  int scheduling_delay;
  int subcarrier_indication;
  int ACK_NACK_resource_field;
  available_resource_UL_t *node;
}sched_temp_UL_NB_IoT_t;

/*** the value of variable in this structure is able to be changed in Preprocessor**/
typedef struct{
    uint8_t resent_flag;

  uint16_t TBS;
  uint8_t index_tbs;
  uint32_t total_sdu_size;
  //Repetition
  uint16_t R_dci;
  uint16_t R_dl_data;
  uint16_t R_dl_harq;
  uint16_t R_ul_data;
  //DL relative
  uint8_t dci_n1_index_R_dci;
  uint8_t dci_n1_index_R_data;
  uint8_t dci_n1_index_mcs;
  uint8_t dci_n1_index_sf;
  uint8_t dci_n1_index_delay;
  uint8_t dci_n1_index_ack_nack;
  uint32_t dci_n1_n_sf;
  //UL relative
  uint8_t dci_n0_index_R_dci;
  uint8_t dci_n0_index_R_data;
  uint8_t dci_n0_index_mcs;
  uint8_t dci_n0_index_ru;
  uint8_t dci_n0_index_delay;
  uint8_t dci_n0_index_subcarrier;
  uint32_t dci_n0_n_ru;
  uint8_t dci_n0_index_rv;
  uint8_t dci_n0_index_ndi;
  // byte
  uint16_t total_data_size_dl;
  // byte
  uint16_t total_data_size_ul;
  //0:UL 1:DL 2:both
  uint16_t transmit_direction;
  /*resource allocation*/
  // scheduling result for NPDCCH
  uint32_t NPDCCH_sf_end, NPDCCH_sf_start;
  // scheduling result for USS DL
  uint32_t NPDSCH_sf_end, NPDSCH_sf_start;
  uint32_t HARQ_sf_end, HARQ_sf_start;
  // scheduling result for USS UL
  uint32_t NPUSCH_sf_end, NPUSCH_sf_start;
  // schedule success 1 failure 0
  uint8_t flag_schedule_success;
}UE_SCHED_CTRL_NB_IoT_t;

/*36331 NPDCCH-ConfigDedicated-NB_IoT*/
typedef struct{
  //npdcch-NumRepetitions-r13
  uint32_t R_max;
  //npdcch-StartSF-USS-r13
  double G;
  //npdcch-Offset-USS-r13
  double a_offset;
  //NPDCCH period
  uint32_t T;
  //Starting subfrane of Search Space which is mod T
  uint32_t ss_start_uss;
}NPDCCH_config_dedicated_NB_IoT_t;


/*! \brief UE list used by eNB to order UEs/CC for scheduling*/
typedef struct {

  /// DCI template and MAC connection parameters for UEs
  UE_TEMPLATE_NB_IoT UE_template_NB_IoT[MAX_NUMBER_OF_UE_MAX_NB_IoT];

  UE_SCHED_CTRL_NB_IoT_t UE_sched_ctrl_NB_IoT[MAX_NUMBER_OF_UE_MAX_NB_IoT];

  /// NPDCCH Period and searching space info
  NPDCCH_config_dedicated_NB_IoT_t NPDCCH_config_dedicated;
  //int next[MAX_NUMBER_OF_UE_MAX_NB_IoT];
  // -1:No UE in list
  int head;
  // -1:No UE in list
  int tail;
  int num_UEs;
  //boolean_t active[MAX_NUMBER_OF_UE_MAX_NB_IoT];

} UE_list_NB_IoT_t;

// scheduling flag calculated by computing flag function
typedef struct{
  // flag to indicate scheduing MIB-NB_IoT
  uint8_t flag_MIB;
  // flag to indicate scheduling SIB1-NB_IoT
  uint8_t flag_SIB1;
  // flag to indicate scheduling SIBs-NB_IoT
  uint8_t flag_SIBs[MAX_NUMBER_OF_SIBs_NB_IoT];
  // flag to indicate scheduling type2 NPDCCH CSS with different CE level
  uint8_t flag_type2_css[3];
  // flag to indicate scheduling type1 NPDCCH CSS with different CE level
  uint8_t flag_type1_css[3];
  // flag to indicate scheduling NPDCCH USS with UE list
  uint8_t flag_uss[MAX_NUMBER_OF_UE_MAX_NB_IoT];
  // flag to indicate scheduling sib1/MIB
  uint8_t flag_fix_scheduling;
  // number of the type2 css to schedule in this period
  uint8_t num_type2_css_run;
  // number of the type1 css to schedule in this period
  uint8_t num_type1_css_run;
  // number of the uss to schedule in this period
  uint8_t num_uss_run;
}scheduling_flag_t;

/*!\brief  MAC subheader short with 7bit Length field */
typedef struct {
  uint8_t LCID:5;  // octet 1 LSB
  uint8_t E:1;
  uint8_t F2:1;
  uint8_t R:1;     // octet 1 MSB
  uint8_t L:7;     // octet 2 LSB
  uint8_t F:1;     // octet 2 MSB
} __attribute__((__packed__))SCH_SUBHEADER_SHORT_NB_IoT;

typedef struct {
  uint8_t LCID:5;   // octet 1 LSB
  uint8_t E:1;
  uint8_t F2:1;
  uint8_t R:1;      // octet 1 MSB
  uint8_t L_MSB:7;
  uint8_t F:1;      // octet 2 MSB
  uint8_t L_LSB:8;
} __attribute__((__packed__))SCH_SUBHEADER_LONG_NB_IoT;

typedef struct {
  uint8_t LCID:5;   // octet 1 LSB
  uint8_t E:1;
  uint8_t F2:1;
  uint8_t R:1;      // octet 1 MSB
  uint8_t L_MSB:8;      // octet 2 MSB
  uint8_t L_LSB:8;
} __attribute__((__packed__))SCH_SUBHEADER_LONG_EXTEND_NB_IoT;

/*!\brief MAC subheader short without length field */
typedef struct {
  uint8_t LCID:5;
  uint8_t E:1;
  uint8_t R:2;
} __attribute__((__packed__))SCH_SUBHEADER_FIXED_NB_IoT;


/*! \brief Uplink SCH PDU Structure */
typedef struct {
  int8_t payload[SCH_PAYLOAD_SIZE_MAX_NB_IoT];         /*!< \brief SACH payload */
  uint16_t Pdu_size;
} __attribute__ ((__packed__)) ULSCH_PDU_NB_IoT;

typedef struct {
  uint8_t PH:6;
  uint8_t R:2;
} __attribute__((__packed__))POWER_HEADROOM_CMD_NB_IoT;

typedef struct {
  uint8_t RAPID:6;
  uint8_t T:1;
  uint8_t E:1;
} __attribute__((__packed__))RA_HEADER_RAPID_NB_IoT;


typedef struct Available_resource_tones_UL_s{

  ///Available Resoruce for sixtone
  available_resource_UL_t *sixtone_Head;//, *sixtone_npusch_frame;
  uint32_t sixtone_end_subframe;
  ///Available Resoruce for threetone
  available_resource_UL_t *threetone_Head;//, *threetone_npusch_frame;
  uint32_t threetone_end_subframe;
  ///Available Resoruce for singletone1
  available_resource_UL_t *singletone1_Head;//, *singletone1_npusch_frame;
  uint32_t singletone1_end_subframe;
  ///Available Resoruce for singletone2
  available_resource_UL_t *singletone2_Head;//, *singletone2_npusch_frame;
  uint32_t singletone2_end_subframe;
  ///Available Resoruce for singletone3
  available_resource_UL_t *singletone3_Head;//, *singletone3_npusch_frame;
  uint32_t singletone3_end_subframe;
  
}available_resource_tones_UL_t;

typedef struct schedule_result{
  // The subframe read by output handler
  uint32_t output_subframe;
  // SDU length
  uint32_t sdu_length;
  // MAC PDU
  uint8_t *DLSCH_pdu;
  // The data direction indicated by this DCI
  uint8_t direction;
  // pointer to DCI
  void *DCI_pdu;
  // when all the procedure related to this DCI, enable this flag
  boolean_t DCI_release;
  // Indicate the channel which to transmit
  channel_NB_IoT_t channel;
  // rnti
  rnti_t rnti;
  // 0 = TC-RNTI , 1 = RA-RNTI, 2 = P-RNTI, 3 = others
  uint8_t rnti_type;
  // 0 = data, 1 = ACK/NACK
  uint8_t npusch_format;
  //HARQ ACK/NACK repetition
  uint32_t R_harq;
  // pointer to next node
  struct schedule_result *next;

  uint32_t end_subframe;
  
  uint8_t *rar_buffer;

  int16_t dl_sdly;
  int16_t ul_sdly;
  int16_t num_sf;
  
  int16_t harq_round;
  // determine this uplink data is msg3 or not (different TBS table here)
  uint8_t msg3_flag;
  
}schedule_result_t;

/*Flag structure used for trigger each scheduler*/
typedef struct{
  scheduling_flag_t scheduling_flag;
  //sched_temp_DL_NB_IoT_t sched_result_DL;
  //resource grid for Uplink
  available_resource_tones_UL_t *UL_resource;
  //scheduling result read by output handler
  schedule_result_t *schedule_result_list_UL;
  schedule_result_t *schedule_result_list_DL;
}SCHEDULE_NB_IoT_t;

typedef struct{
  uint32_t num_dlsf_per_period;
  uint16_t *sf_to_dlsf_table;
  uint16_t *dlsf_to_sf_table;
}DLSF_INFO_t;

typedef enum ce_level_e{
  ce0=0,
  ce1,
  ce2,
  ce_level_total
}ce_level_t;



/*! \brief eNB template for the Random access information */
typedef struct RA_TEMPLATE_NB_IoT_s{

  boolean_t active;
  uint32_t msg3_retransmit_count;
  uint32_t msg4_retransmit_count;
  uint16_t ta;
  uint8_t preamble_index;
  ce_level_t ce_level;
  rnti_t ue_rnti;
  rnti_t ra_rnti;
  struct RA_TEMPLATE_NB_IoT_s *next, *prev;
  boolean_t wait_msg4_ack;
  boolean_t wait_msg3_ack;
  uint8_t rar_buffer[7];
  uint8_t *ccch_buffer;
  uint8_t msg4_buffer[16];
  uint8_t *msg4_rrc_buffer;
} RA_TEMPLATE_NB_IoT;

typedef struct RA_template_list_s{
  RA_TEMPLATE_NB_IoT *head;
  RA_TEMPLATE_NB_IoT *tail;
}RA_template_list_t;


/*36331 NPDCCH-ConfigDedicated-NB_IoT*/
typedef struct{
  //npdcch-NumRepetitions-r13
  uint32_t R_max;
  //npdcch-StartSF-CSS-r13
  double G;
  //npdcch-Offset-USS-r13
  double a_offset;
  //NPDCCH period
  uint32_t T;
  //Starting subfrane of Search Space which is mod T
  uint32_t ss_start_css;
}NPDCCH_config_common_NB_IoT_t;


/*! \brief top level eNB MAC structure */
typedef struct mac_NB_IoT_s{

    uint8_t Mod_id;

  //  System
  uint32_t hyper_system_frame;
  uint32_t system_frame;
  uint32_t sub_frame;

  uint32_t current_subframe;

  //  RA
  RA_template_list_t RA_msg2_list;
  RA_template_list_t RA_msg3_list;
  RA_template_list_t RA_msg4_list;

  RA_TEMPLATE_NB_IoT RA_template[MAX_NUMBER_OF_UE_MAX_NB_IoT];

  //int32_t last_tx_subframe;

  //  for tool
  int32_t sib1_flag[64];
  int32_t sib1_count[64];
  int32_t sib1_period;
  uint16_t dlsf_table[64];
  int32_t sibs_table[256];

  //  channel config

  //USS list
  //Number of USS period is used
  int num_uss_list;
  UE_list_NB_IoT_t *UE_list_spec;

  scheduling_flag_t scheduling_flag;

  uint32_t schedule_subframe_DL;
  //uint32_t schedule_subframe_UL;
  NPDCCH_config_common_NB_IoT_t npdcch_config_common[3];

  rrc_config_NB_IoT_t rrc_config;

  nfapi_config_request_t config;


  IF_Module_NB_IoT_t *if_inst_NB_IoT;

  Sched_Rsp_NB_IoT_t Sched_INFO;

} eNB_MAC_INST_NB_IoT;

// actually not here, but for now put it here
typedef  struct {
  uint32_t       bytes_in_buffer; /*!< \brief Bytes buffered in RLC protocol instance. */
  uint32_t       pdus_in_buffer;  /*!< \brief Number of PDUs buffered in RLC protocol instance (OBSOLETE). */
  uint32_t       head_sdu_creation_time;           /*!< \brief Head SDU creation time. */
  uint32_t       head_sdu_remaining_size_to_send;  /*!< \brief remaining size of sdu: could be the total size or the remaining size of already segmented sdu */
  boolean_t      head_sdu_is_segmented;     /*!< \brief 0 if head SDU has not been segmented, 1 if already segmented */
} mac_rlc_status_resp_NB_IoT_t;

// global variables

nprach_parameters_NB_IoT_t nprach_list[3];

nfapi_config_request_t config;

//DLSF Table
DLSF_INFO_t DLSF_information;

#endif /*__LAYER2_MAC_DEFS_NB_IoT_H__ */
