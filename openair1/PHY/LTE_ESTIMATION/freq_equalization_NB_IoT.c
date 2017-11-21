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

#include "PHY/defs_NB_IoT.h"
#include "PHY/extern_NB_IoT.h"
//#include "PHY/sse_intrin.h"

// This is 512/(1:256) in __m128i format
int16_t inv_ch_NB_IoT[256*8] = {512,512,512,512,512,512,512,512,
                         256,256,256,256,256,256,256,256,
                         170,170,170,170,170,170,170,170,
                         128,128,128,128,128,128,128,128,
                         102,102,102,102,102,102,102,102,
                         85,85,85,85,85,85,85,85,
                         73,73,73,73,73,73,73,73,
                         64,64,64,64,64,64,64,64,
                         56,56,56,56,56,56,56,56,
                         51,51,51,51,51,51,51,51,
                         46,46,46,46,46,46,46,46,
                         42,42,42,42,42,42,42,42,
                         39,39,39,39,39,39,39,39,
                         36,36,36,36,36,36,36,36,
                         34,34,34,34,34,34,34,34,
                         32,32,32,32,32,32,32,32,
                         30,30,30,30,30,30,30,30,
                         28,28,28,28,28,28,28,28,
                         26,26,26,26,26,26,26,26,
                         25,25,25,25,25,25,25,25,
                         24,24,24,24,24,24,24,24,
                         23,23,23,23,23,23,23,23,
                         22,22,22,22,22,22,22,22,
                         21,21,21,21,21,21,21,21,
                         20,20,20,20,20,20,20,20,
                         19,19,19,19,19,19,19,19,
                         18,18,18,18,18,18,18,18,
                         18,18,18,18,18,18,18,18,
                         17,17,17,17,17,17,17,17,
                         17,17,17,17,17,17,17,17,
                         16,16,16,16,16,16,16,16,
                         16,16,16,16,16,16,16,16,
                         15,15,15,15,15,15,15,15,
                         15,15,15,15,15,15,15,15,
                         14,14,14,14,14,14,14,14,
                         14,14,14,14,14,14,14,14,
                         13,13,13,13,13,13,13,13,
                         13,13,13,13,13,13,13,13,
                         13,13,13,13,13,13,13,13,
                         12,12,12,12,12,12,12,12,
                         12,12,12,12,12,12,12,12,
                         12,12,12,12,12,12,12,12,
                         11,11,11,11,11,11,11,11,
                         11,11,11,11,11,11,11,11,
                         11,11,11,11,11,11,11,11,
                         11,11,11,11,11,11,11,11,
                         10,10,10,10,10,10,10,10,
                         10,10,10,10,10,10,10,10,
                         10,10,10,10,10,10,10,10,
                         10,10,10,10,10,10,10,10,
                         10,10,10,10,10,10,10,10,
                         9,9,9,9,9,9,9,9,
                         9,9,9,9,9,9,9,9,
                         9,9,9,9,9,9,9,9,
                         9,9,9,9,9,9,9,9,
                         9,9,9,9,9,9,9,9,
                         8,8,8,8,8,8,8,8,
                         8,8,8,8,8,8,8,8,
                         8,8,8,8,8,8,8,8,
                         8,8,8,8,8,8,8,8,
                         8,8,8,8,8,8,8,8,
                         8,8,8,8,8,8,8,8,
                         8,8,8,8,8,8,8,8,
                         8,8,8,8,8,8,8,8,
                         7,7,7,7,7,7,7,7,
                         7,7,7,7,7,7,7,7,
                         7,7,7,7,7,7,7,7,
                         7,7,7,7,7,7,7,7,
                         7,7,7,7,7,7,7,7,
                         7,7,7,7,7,7,7,7,
                         7,7,7,7,7,7,7,7,
                         7,7,7,7,7,7,7,7,
                         7,7,7,7,7,7,7,7,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         6,6,6,6,6,6,6,6,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         5,5,5,5,5,5,5,5,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         4,4,4,4,4,4,4,4,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         3,3,3,3,3,3,3,3,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                         2,2,2,2,2,2,2,2,
                        };

void freq_equalization_NB_IoT(NB_IoT_DL_FRAME_PARMS *frame_parms,
                              int32_t **rxdataF_comp,
                              int32_t **ul_ch_mag,
                              int32_t **ul_ch_magb,
                              uint8_t symbol,
                              uint16_t Msc_RS,
                              uint8_t Qm)
{
  uint16_t re;
  int16_t amp;
#if defined(__x86_64__) || defined(__i386__)
  __m128i *ul_ch_mag128,*ul_ch_magb128,*rxdataF_comp128;
  rxdataF_comp128   = (__m128i *)&rxdataF_comp[0][symbol*frame_parms->N_RB_DL*12];
  ul_ch_mag128      = (__m128i *)&ul_ch_mag[0][symbol*frame_parms->N_RB_DL*12];
  ul_ch_magb128      = (__m128i *)&ul_ch_magb[0][symbol*frame_parms->N_RB_DL*12];
#elif defined(__arm__)
  int16x8_t *ul_ch_mag128,*ul_ch_magb128,*rxdataF_comp128;
  rxdataF_comp128   = (int16x8_t*)&rxdataF_comp[0][symbol*frame_parms->N_RB_DL*12];
  ul_ch_mag128      = (int16x8_t*)&ul_ch_mag[0][symbol*frame_parms->N_RB_DL*12];
  ul_ch_magb128     = (int16x8_t*)&ul_ch_magb[0][symbol*frame_parms->N_RB_DL*12];
#endif

  for (re=0; re<(Msc_RS>>2); re++) {

    amp=(*((int16_t*)&ul_ch_mag128[re]));

    if (amp>255)
      amp=255;

    //     printf("freq_eq: symbol %d re %d => %d,%d,%d, (%d) (%d,%d) => ",symbol,re,*((int16_t*)(&ul_ch_mag128[re])),amp,inv_ch[8*amp],*((int16_t*)(&ul_ch_mag128[re]))*inv_ch[8*amp],*(int16_t*)&(rxdataF_comp128[re]),*(1+(int16_t*)&(rxdataF_comp128[re])));
#if defined(__x86_64__) || defined(__i386__)
    rxdataF_comp128[re] = _mm_mullo_epi16(rxdataF_comp128[re],*((__m128i *)&inv_ch_NB_IoT[8*amp]));

    // if (Qm==4)
    //   ul_ch_mag128[re]  = _mm_set1_epi16(324);  // this is 512*2/sqrt(10)
   // else {
    //  ul_ch_mag128[re]  = _mm_set1_epi16(316);  // this is 512*4/sqrt(42)
    //  ul_ch_magb128[re] = _mm_set1_epi16(158);  // this is 512*2/sqrt(42)
   // }
#elif defined(__arm__)
    rxdataF_comp128[re] = vmulq_s16(rxdataF_comp128[re],*((int16x8_t *)&inv_ch_NB_IoT[8*amp]));

    // if (Qm==4)
    //   ul_ch_mag128[re]  = vdupq_n_s16(324);  // this is 512*2/sqrt(10)
    //else {
    //  ul_ch_mag128[re]  = vdupq_n_s16(316);  // this is 512*4/sqrt(42)
    //  ul_ch_magb128[re] = vdupq_n_s16(158);  // this is 512*2/sqrt(42)
    //}
#endif
    //            printf("(%d,%d)\n",*(int16_t*)&(rxdataF_comp128[re]),*(1+(int16_t*)&(rxdataF_comp128[re])));

  }
}
