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

#include "nr_sdap_entity.h"
#include "common/utils/LOG/log.h"
#include <openair2/LAYER2/PDCP_v10.1.0/pdcp.h>
#include <openair3/ocp-gtpu/gtp_itf.h>

#include <stdlib.h>
#include <string.h>
#include <pthread.h>

typedef struct {
  nr_sdap_entity_t *sdap_entity_llist;
} nr_sdap_entity_info;

static nr_sdap_entity_info sdap_info;

static boolean_t nr_sdap_tx_entity(nr_sdap_entity_t *entity,
                                   protocol_ctxt_t *ctxt_p,
                                   const srb_flag_t srb_flag,
                                   const rb_id_t rb_id,
                                   const mui_t mui,
                                   const confirm_t confirm,
                                   const sdu_size_t sdu_buffer_size,
                                   unsigned char *const sdu_buffer,
                                   const pdcp_transmission_mode_t pt_mode,
                                   const uint32_t *sourceL2Id,
                                   const uint32_t *destinationL2Id
                                  ) {
  if(sdu_buffer == NULL) {
    LOG_E(SDAP, "%s:%d:%s: NULL sdu_buffer \n", __FILE__, __LINE__, __FUNCTION__);
    exit(1);
  }

  if(sdu_buffer_size == 0 || sdu_buffer_size > 8999) {
    LOG_E(SDAP, "%s:%d:%s: NULL or 0 or exceeded sdu_buffer_size \n", __FILE__, __LINE__, __FUNCTION__);
    exit(1);
  }

  uint8_t *sdap_buf = (uint8_t *)malloc(sdu_buffer_size+SDAP_HDR_LENGTH);
  rb_id_t sdap_drb_id = entity->sdap_map_qfi2drb(entity, ctxt_p->sdap.qfi);

  if(ctxt_p->enb_flag) { // gNB
    /*
     * TS 37.324 4.4 Functions
     * marking QoS flow ID in DL packets.
     *
     * Construct the DL SDAP data PDU.
     */
    nr_sdap_dl_hdr_t sdap_hdr;
    sdap_hdr.QFI = ctxt_p->sdap.qfi;
    sdap_hdr.RQI = ctxt_p->sdap.rqi;
    sdap_hdr.RDI = 0; // SDAP Hardcoded Value
    /* Add the SDAP DL Header to the buffer */
    memcpy(&sdap_buf[0], &sdap_hdr, SDAP_HDR_LENGTH);
    memcpy(&sdap_buf[SDAP_HDR_LENGTH], sdu_buffer, sdu_buffer_size);
    LOG_D(SDAP, "TX Entity QFI: %u \n", sdap_hdr.QFI);
    LOG_D(SDAP, "TX Entity RQI: %u \n", sdap_hdr.RQI);
    LOG_D(SDAP, "TX Entity RDI: %u \n", sdap_hdr.RDI);
  } else { // nrUE
    /*
     * TS 37.324 4.4 Functions
     * marking QoS flow ID in UL packets.
     *
     * 5.2.1 Uplink
     * construct the UL SDAP data PDU as specified in the subclause 6.2.2.3.
     */
    nr_sdap_ul_hdr_t sdap_hdr;
    sdap_hdr.QFI = ctxt_p->sdap.qfi;
    sdap_hdr.R = 0;
    sdap_hdr.DC = ctxt_p->sdap.dc;
    /* Add the SDAP UL Header to the buffer */
    memcpy(&sdap_buf[0], &sdap_hdr, SDAP_HDR_LENGTH);
    memcpy(&sdap_buf[SDAP_HDR_LENGTH], sdu_buffer, sdu_buffer_size);
    LOG_D(SDAP, "TX Entity QFI: %u \n", sdap_hdr.QFI);
    LOG_D(SDAP, "TX Entity R: %u \n", sdap_hdr.R);
    LOG_D(SDAP, "TX Entity DC: %u \n", sdap_hdr.DC);
  }

  /*
   * TS 37.324 5.2 Data transfer
   * 5.2.1 Uplink UE side
   * submit the constructed UL SDAP data PDU to the lower layers
   *
   * Downlink gNB side
   */
  boolean_t ret = pdcp_data_req(ctxt_p,
                                srb_flag,
                                sdap_drb_id,
                                mui,
                                confirm,
                                sdu_buffer_size+SDAP_HDR_LENGTH,
                                sdap_buf,
                                pt_mode,
                                sourceL2Id,
                                destinationL2Id);

  if(!ret) {
    LOG_E(SDAP, "%s:%d:%s: PDCP refused PDU\n", __FILE__, __LINE__, __FUNCTION__);
    free(sdap_buf);
    return 0;
  }

  free(sdap_buf);
  return 1;
}

static void nr_sdap_rx_entity(nr_sdap_entity_t *entity,
                              nr_pdcp_entity_t *pdcp_entity,
                              int rnti,
                              char *buf,
                              int size) {
  /* The offset of the SDAP header, it might be 0 if the has_sdap is not true in the pdcp entity. */
  int offset=0;

  if(pdcp_entity->is_gnb) { // gNB
    if(pdcp_entity->has_sdap && pdcp_entity->has_sdapULheader ) { // Handling the SDAP Header
      offset = SDAP_HDR_LENGTH;
      nr_sdap_ul_hdr_t *sdap_hdr = (nr_sdap_ul_hdr_t *)buf;
      LOG_D(SDAP, "RX Entity Received QFI : %u\n", sdap_hdr->QFI);
      LOG_D(SDAP, "RX Entity Received Reserved bit : %u\n", sdap_hdr->R);
      LOG_D(SDAP, "RX Entity Received DC bit : %u\n", sdap_hdr->DC);

      switch (sdap_hdr->DC) {
        case SDAP_HDR_UL_DATA_PDU:
          LOG_I(SDAP, "RX Entity Received SDAP Data PDU\n");
          break;

        case SDAP_HDR_UL_CTRL_PDU:
          LOG_I(SDAP, "RX Entity Received SDAP Control PDU\n");
          break;
      }
    }

    // Pushing SDAP SDU to GTP-U Layer
    MessageDef *message_p;
    uint8_t *gtpu_buffer_p;
    gtpu_buffer_p = itti_malloc(TASK_PDCP_ENB, TASK_GTPV1_U, size + GTPU_HEADER_OVERHEAD_MAX - offset);
    AssertFatal(gtpu_buffer_p != NULL, "OUT OF MEMORY");
    memcpy(&gtpu_buffer_p[GTPU_HEADER_OVERHEAD_MAX], buf+offset, size-offset);
    message_p = itti_alloc_new_message(TASK_PDCP_ENB, 0 , GTPV1U_GNB_TUNNEL_DATA_REQ);
    AssertFatal(message_p != NULL, "OUT OF MEMORY");
    GTPV1U_GNB_TUNNEL_DATA_REQ(message_p).buffer = gtpu_buffer_p;
    GTPV1U_GNB_TUNNEL_DATA_REQ(message_p).length              = size-offset;
    GTPV1U_GNB_TUNNEL_DATA_REQ(message_p).offset              = GTPU_HEADER_OVERHEAD_MAX;
    GTPV1U_GNB_TUNNEL_DATA_REQ(message_p).rnti                = rnti;
    GTPV1U_GNB_TUNNEL_DATA_REQ(message_p).pdusession_id       = pdcp_entity->pdusession_id;
    LOG_D(SDAP, "%s()  sending message to gtp size %d\n", __func__,  size-offset);
    itti_send_msg_to_task(TASK_VARIABLE, INSTANCE_DEFAULT, message_p);
  } else { //nrUE
    /*
     * TS 37.324 5.2 Data transfer
     * 5.2.2 Downlink
     * if the DRB from which this SDAP data PDU is received is configured by RRC with the presence of SDAP header.
     */
    if(pdcp_entity->has_sdap && pdcp_entity->has_sdapDLheader) { // Handling the SDAP Header
      offset = SDAP_HDR_LENGTH;
      /*
       * TS 37.324 5.2 Data transfer
       * 5.2.2 Downlink
       * retrieve the SDAP SDU from the DL SDAP data PDU as specified in the subclause 6.2.2.2.
       */
      nr_sdap_dl_hdr_t *sdap_hdr = (nr_sdap_dl_hdr_t *)buf;
      LOG_D(SDAP, "RX Entity Received QFI : %u\n", sdap_hdr->QFI);
      LOG_D(SDAP, "RX Entity Received RQI : %u\n", sdap_hdr->RQI);
      LOG_D(SDAP, "RX Entity Received RDI : %u\n", sdap_hdr->RDI);

      /*
       * TS 37.324 5.2 Data transfer
       * 5.2.2 Downlink
       * TODO :Perform reflective QoS flow to DRB mapping as specified in the subclause 5.3.2.
       */
      if(sdap_hdr->RDI == SDAP_REFLECTIVE_MAPPING) {
        LOG_I(SDAP, "UE - TODD 5.3.2\n");
      }

      /*
       * TS 37.324 5.2 Data transfer
       * 5.2.2 Downlink
       * perform RQI handling as specified in the subclause 5.4
       */
      if(sdap_hdr->RQI == SDAP_RQI_HANDLING) {
        LOG_I(SDAP, "UE - TODD 5.4\n");
      }
    } /*  else - retrieve the SDAP SDU from the DL SDAP data PDU as specified in the subclause 6.2.2.1 */

    /*
     * TS 37.324 5.2 Data transfer
     * 5.2.2 Downlink
     * deliver the retrieved SDAP SDU to the upper layer.
     */
    extern int nas_sock_fd[];
    int len = write(nas_sock_fd[0], &buf[offset], size-offset);
    LOG_D(SDAP, "RX Entity len : %d\n", len);
    LOG_D(SDAP, "RX Entity size : %d\n", size);
    LOG_D(SDAP, "RX Entity offset : %d\n", offset);

    if (len != size-SDAP_HDR_LENGTH)
      LOG_E(SDAP, "%s:%d:%s: fatal\n", __FILE__, __LINE__, __FUNCTION__);
  }
}

void nr_sdap_update_map(nr_sdap_entity_t *entity, uint8_t qfi, uint8_t drb) {
  if(qfi < SDAP_MAX_QFI &&
      qfi > SDAP_MAP_RULE_EMPTY &&
      drb > 0 &&
      drb <= AVLBL_DRB) {
    entity->nr_sdap_qfi_drb_map[qfi] = drb;
    LOG_D(SDAP, "Updated QFI to DRB Map: QFI %u -> DRB %u \n", qfi, drb);
  }
}

void nr_sdap_del_map(nr_sdap_entity_t *entity, uint8_t qfi) {
  entity->nr_sdap_qfi_drb_map[qfi]=SDAP_NO_MAPPING_RULE;
  LOG_D(SDAP, "Deleted QFI to DRB Map for QFI %u \n", qfi);
}

uint8_t nr_sdap_map_qfi2drb(nr_sdap_entity_t *entity, uint8_t qfi) {
  uint8_t drb = entity->nr_sdap_qfi_drb_map[qfi];

  if(!drb) {
    drb = entity->default_drb;
    LOG_D(SDAP, "Mapped QFI %u to Default DRB\n", qfi);
    entity->sdap_update_qfi2drb(entity, qfi, entity->default_drb);
  }

  return drb;
}

void *new_nr_sdap_entity(uint16_t rnti, uint8_t is_gnb, uint8_t pdusession_id, boolean_t is_defaultDRB, uint8_t default_DRB, uint8_t mapped_qfi_2_add) {
  if(nr_sdap_get_entity(rnti)) {
    LOG_E(SDAP, "SDAP Entity for UE already exists.\n");
    return NULL;
  }

  nr_sdap_entity_t *sdap_entity;
  sdap_entity = calloc(1, sizeof(nr_sdap_entity_t));

  if(sdap_entity == NULL) {
    LOG_E(SDAP, "SDAP Entity creation failed, out of memory\n");
    exit(1);
  }

  sdap_entity->rnti = rnti;
  sdap_entity->pdusession_id = pdusession_id;
  sdap_entity->tx_entity = nr_sdap_tx_entity;
  sdap_entity->rx_entity = nr_sdap_rx_entity;
  sdap_entity->sdap_update_qfi2drb = nr_sdap_update_map;
  sdap_entity->sdap_delete_qfi2drb = nr_sdap_del_map;
  sdap_entity->sdap_map_qfi2drb = nr_sdap_map_qfi2drb;

  if(is_defaultDRB) {
    sdap_entity->default_drb = default_DRB;
    LOG_D(SDAP, "Default DRB for the created SDAP entity: %u \n", sdap_entity->default_drb);

    if(mapped_qfi_2_add) {
      LOG_D(SDAP, "Mapped QFI to Add : %u \n", mapped_qfi_2_add);
      sdap_entity->sdap_update_qfi2drb(sdap_entity, mapped_qfi_2_add, sdap_entity->default_drb);
    }
  }

  sdap_entity->next_entity = sdap_info.sdap_entity_llist;
  sdap_info.sdap_entity_llist = sdap_entity;
  return NULL;
}

nr_sdap_entity_t *nr_sdap_get_entity(uint16_t rnti) {
  nr_sdap_entity_t *sdap_entity;
  sdap_entity = sdap_info.sdap_entity_llist;

  if(sdap_entity == NULL)
    return NULL;

  while(sdap_entity->rnti != rnti && sdap_entity->next_entity != NULL) {
    sdap_entity = sdap_entity->next_entity;
  }

  if (sdap_entity->rnti == rnti)
    return sdap_entity;

  return NULL;
}

void delete_nr_sdap_entity(uint16_t rnti) {
  nr_sdap_entity_t *entityPtr, *entityPrev = NULL;
  entityPtr = sdap_info.sdap_entity_llist;

  if(entityPtr->rnti == rnti) {
    sdap_info.sdap_entity_llist = sdap_info.sdap_entity_llist->next_entity;
    free(entityPtr);
  } else {
    while(entityPtr->rnti != rnti && entityPtr->next_entity != NULL) {
      entityPrev = entityPtr;
      entityPtr = entityPtr->next_entity;
    }

    if(entityPtr->rnti != rnti) {
      entityPrev->next_entity = entityPtr->next_entity;
      free(entityPtr);
    }
  }
}

