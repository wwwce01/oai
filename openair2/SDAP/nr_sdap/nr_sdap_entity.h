/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
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

#ifndef _NR_SDAP_ENTITY_H_
#define _NR_SDAP_ENTITY_H_

#include <stdint.h>
#include "openair2/COMMON/platform_types.h"
#include "openair2/LAYER2/nr_pdcp/nr_pdcp_entity.h"

#define SDAP_BITMASK_DC         (0x80)
#define SDAP_BITMASK_R          (0x40)
#define SDAP_BITMASK_QFI        (0x3F)
#define SDAP_BITMASK_RQI        (0x40)
#define SDAP_HDR_UL_DATA_PDU    (1)
#define SDAP_HDR_UL_CTRL_PDU    (0)
#define SDAP_HDR_LENGTH         (1)
#define SDAP_MAX_QFI            (64)
#define SDAP_MAP_RULE_EMPTY     (0)
#define AVLBL_DRB               (5)
#define SDAP_NO_MAPPING_RULE    (0)
#define SDAP_REFLECTIVE_MAPPING (1)
#define SDAP_RQI_HANDLING       (1)

/*
 * The values of QoS Flow ID (QFI) and Reflective QoS Indication,
 * are located in the PDU Session Container, which is conveyed by
 * the GTP-U Extension Header. Inside the DL PDU SESSION INFORMATION frame.
 * TS 38.415 Fig. 5.5.2.1-1
 */
typedef struct nr_sdap_dl_hdr_s {
  uint8_t QFI:6;
  uint8_t RQI:1;
  uint8_t RDI:1;
} __attribute__((packed)) nr_sdap_dl_hdr_t;

typedef struct nr_sdap_ul_hdr_s {
  uint8_t QFI:6;
  uint8_t R:1;
  uint8_t DC:1;
} __attribute__((packed)) nr_sdap_ul_hdr_t;

typedef struct nr_sdap_entity_s {
  uint16_t rnti;
  uint8_t default_drb;
  uint8_t pdusession_id;
  uint8_t nr_sdap_qfi_drb_map[SDAP_MAX_QFI];

  void (*sdap_delete_qfi2drb)(struct nr_sdap_entity_s *entity, uint8_t qfi);
  void (*sdap_update_qfi2drb)(struct nr_sdap_entity_s *entity, uint8_t qfi, uint8_t drb);
  uint8_t (*sdap_map_qfi2drb)(struct nr_sdap_entity_s *entity, uint8_t qfi);

  boolean_t (*tx_entity)(struct nr_sdap_entity_s *entity,
                         protocol_ctxt_t *ctxt_p,
                         const srb_flag_t srb_flag,
                         const rb_id_t rb_id,
                         const mui_t mui,
                         const confirm_t confirm,
                         const sdu_size_t sdu_buffer_size,
                         unsigned char *const sdu_buffer,
                         const pdcp_transmission_mode_t pt_mode,
                         const uint32_t *sourceL2Id,
                         const uint32_t *destinationL2Id);

  void (*rx_entity)(struct nr_sdap_entity_s *entity,
                    nr_pdcp_entity_t *pdcp_entity,
                    int rnti,
                    char *buf,
                    int size);

  /* List of entities */
  struct nr_sdap_entity_s *next_entity;
} nr_sdap_entity_t;

/* QFI to DRB Mapping Related Function */
void nr_sdap_update_map(nr_sdap_entity_t *entity, uint8_t qfi, uint8_t drb);

/* QFI to DRB Mapping Related Function */
void nr_sdap_del_map(nr_sdap_entity_t *entity, uint8_t qfi);

/*
 * TS 37.324
 * 4.4 Functions
 * Mapping between a QoS flow and a DRB for both DL and UL.
 *
 * 5.2.1 Uplink
 * If there is no stored QoS flow to DRB mapping rule for the QoS flow as specified in the subclause 5.3, map the SDAP SDU to the default DRB
 * else, map the SDAP SDU to the DRB according to the stored QoS flow to DRB mapping rule.
 */
uint8_t nr_sdap_map_qfi2drb(nr_sdap_entity_t *entity, uint8_t qfi);

/*
 * TS 37.324 4.4 5.1.1 SDAP entity establishment
 * Establish an SDAP entity.
 */
void *new_nr_sdap_entity(uint16_t rnti, uint8_t is_gnb, uint8_t pdusession_id, boolean_t is_defaultDRB, uint8_t default_DRB, uint8_t mapped_qfi_2_add);

/* Entity Handling Related Functions */
nr_sdap_entity_t *nr_sdap_get_entity(uint16_t rnti);

/* Entity Handling Related Functions */
void delete_nr_sdap_entity(uint16_t rnti);

#endif
