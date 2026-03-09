/* Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */


#ifndef _TQM_UPDATE_TX_MPDU_COUNT_H_
#define _TQM_UPDATE_TX_MPDU_COUNT_H_
#if !defined(__ASSEMBLER__)
#endif

#include "uniform_tqm_cmd_header.h"
#include "tx_rate_stats_info.h"
#define NUM_OF_DWORDS_TQM_UPDATE_TX_MPDU_COUNT 8

#define NUM_OF_QWORDS_TQM_UPDATE_TX_MPDU_COUNT 4


struct tqm_update_tx_mpdu_count {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   uniform_tqm_cmd_header                                    cmd_header;
             uint32_t mpdu_queue_desc_addr_31_0                               : 32; // [31:0]
             uint32_t mpdu_queue_desc_addr_39_32                              :  8, // [7:0]
                      reserved_2a                                             :  8, // [15:8]
                      mpdu_tx_count                                           : 11, // [26:16]
                      refresh_cache_with_mpdu_links                           :  1, // [27:27]
                      max_cmd_execution_time_valid                            :  1, // [28:28]
                      command_source                                          :  1, // [29:29]
                      frame_not_from_tqm_count                                :  2; // [31:30]
             struct   tx_rate_stats_info                                        tx_rate_stats;
             uint32_t transmitted_mpdu_byte_count                             : 24, // [23:0]
                      reserved_5a                                             :  8; // [31:24]
             uint32_t tlv64_padding                                           : 32; // [31:0]
#else
             struct   uniform_tqm_cmd_header                                    cmd_header;
             uint32_t mpdu_queue_desc_addr_31_0                               : 32; // [31:0]
             uint32_t frame_not_from_tqm_count                                :  2, // [31:30]
                      command_source                                          :  1, // [29:29]
                      max_cmd_execution_time_valid                            :  1, // [28:28]
                      refresh_cache_with_mpdu_links                           :  1, // [27:27]
                      mpdu_tx_count                                           : 11, // [26:16]
                      reserved_2a                                             :  8, // [15:8]
                      mpdu_queue_desc_addr_39_32                              :  8; // [7:0]
             struct   tx_rate_stats_info                                        tx_rate_stats;
             uint32_t reserved_5a                                             :  8, // [31:24]
                      transmitted_mpdu_byte_count                             : 24; // [23:0]
             uint32_t tlv64_padding                                           : 32; // [31:0]
#endif
};

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_CMD_NUMBER_OFFSET                   0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_CMD_NUMBER_LSB                      0
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_CMD_NUMBER_MSB                      31
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_CMD_NUMBER_MASK                     0x00000000ffffffff

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP0_OFFSET    0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP0_LSB       32
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP0_MSB       32
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP0_MASK      0x0000000100000000

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP1_OFFSET    0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP1_LSB       33
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP1_MSB       33
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP1_MASK      0x0000000200000000

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP2_OFFSET    0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP2_LSB       34
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP2_MSB       34
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP2_MASK      0x0000000400000000

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP3_OFFSET    0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP3_LSB       35
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP3_MSB       35
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP3_MASK      0x0000000800000000

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SESSION_ID_OFFSET                       0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SESSION_ID_LSB                          36
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SESSION_ID_MSB                          43
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SESSION_ID_MASK                         0x00000ff000000000

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_RING_OFFSET                  0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_RING_LSB                     44
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_RING_MSB                     44
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_TQM_STATUS_RING_MASK                    0x0000100000000000

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_PASS_ON_TO_TQM_OFFSET                   0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_PASS_ON_TO_TQM_LSB                      45
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_PASS_ON_TO_TQM_MSB                      45
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_PASS_ON_TO_TQM_MASK                     0x0000200000000000

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SCH_SIFS_BURST_CMD_DROP_OFFSET          0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SCH_SIFS_BURST_CMD_DROP_LSB             46
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SCH_SIFS_BURST_CMD_DROP_MSB             46
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SCH_SIFS_BURST_CMD_DROP_MASK            0x0000400000000000

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SCH_BACKOFF_CMD_DROP_OFFSET             0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SCH_BACKOFF_CMD_DROP_LSB                47
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SCH_BACKOFF_CMD_DROP_MSB                47
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_SCH_BACKOFF_CMD_DROP_MASK               0x0000800000000000

#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_RESERVED_1A_OFFSET                      0x0000000000000000
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_RESERVED_1A_LSB                         48
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_RESERVED_1A_MSB                         63
#define TQM_UPDATE_TX_MPDU_COUNT_CMD_HEADER_RESERVED_1A_MASK                        0xffff000000000000

#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_QUEUE_DESC_ADDR_31_0_OFFSET                   0x0000000000000008
#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_QUEUE_DESC_ADDR_31_0_LSB                      0
#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_QUEUE_DESC_ADDR_31_0_MSB                      31
#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_QUEUE_DESC_ADDR_31_0_MASK                     0x00000000ffffffff

#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_QUEUE_DESC_ADDR_39_32_OFFSET                  0x0000000000000008
#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_QUEUE_DESC_ADDR_39_32_LSB                     32
#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_QUEUE_DESC_ADDR_39_32_MSB                     39
#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_QUEUE_DESC_ADDR_39_32_MASK                    0x000000ff00000000

#define TQM_UPDATE_TX_MPDU_COUNT_RESERVED_2A_OFFSET                                 0x0000000000000008
#define TQM_UPDATE_TX_MPDU_COUNT_RESERVED_2A_LSB                                    40
#define TQM_UPDATE_TX_MPDU_COUNT_RESERVED_2A_MSB                                    47
#define TQM_UPDATE_TX_MPDU_COUNT_RESERVED_2A_MASK                                   0x0000ff0000000000

#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_TX_COUNT_OFFSET                               0x0000000000000008
#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_TX_COUNT_LSB                                  48
#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_TX_COUNT_MSB                                  58
#define TQM_UPDATE_TX_MPDU_COUNT_MPDU_TX_COUNT_MASK                                 0x07ff000000000000

#define TQM_UPDATE_TX_MPDU_COUNT_REFRESH_CACHE_WITH_MPDU_LINKS_OFFSET               0x0000000000000008
#define TQM_UPDATE_TX_MPDU_COUNT_REFRESH_CACHE_WITH_MPDU_LINKS_LSB                  59
#define TQM_UPDATE_TX_MPDU_COUNT_REFRESH_CACHE_WITH_MPDU_LINKS_MSB                  59
#define TQM_UPDATE_TX_MPDU_COUNT_REFRESH_CACHE_WITH_MPDU_LINKS_MASK                 0x0800000000000000

#define TQM_UPDATE_TX_MPDU_COUNT_MAX_CMD_EXECUTION_TIME_VALID_OFFSET                0x0000000000000008
#define TQM_UPDATE_TX_MPDU_COUNT_MAX_CMD_EXECUTION_TIME_VALID_LSB                   60
#define TQM_UPDATE_TX_MPDU_COUNT_MAX_CMD_EXECUTION_TIME_VALID_MSB                   60
#define TQM_UPDATE_TX_MPDU_COUNT_MAX_CMD_EXECUTION_TIME_VALID_MASK                  0x1000000000000000

#define TQM_UPDATE_TX_MPDU_COUNT_COMMAND_SOURCE_OFFSET                              0x0000000000000008
#define TQM_UPDATE_TX_MPDU_COUNT_COMMAND_SOURCE_LSB                                 61
#define TQM_UPDATE_TX_MPDU_COUNT_COMMAND_SOURCE_MSB                                 61
#define TQM_UPDATE_TX_MPDU_COUNT_COMMAND_SOURCE_MASK                                0x2000000000000000

#define TQM_UPDATE_TX_MPDU_COUNT_FRAME_NOT_FROM_TQM_COUNT_OFFSET                    0x0000000000000008
#define TQM_UPDATE_TX_MPDU_COUNT_FRAME_NOT_FROM_TQM_COUNT_LSB                       62
#define TQM_UPDATE_TX_MPDU_COUNT_FRAME_NOT_FROM_TQM_COUNT_MSB                       63
#define TQM_UPDATE_TX_MPDU_COUNT_FRAME_NOT_FROM_TQM_COUNT_MASK                      0xc000000000000000

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TX_RATE_STATS_INFO_VALID_OFFSET      0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TX_RATE_STATS_INFO_VALID_LSB         0
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TX_RATE_STATS_INFO_VALID_MSB         0
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TX_RATE_STATS_INFO_VALID_MASK        0x0000000000000001

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_BW_OFFSET                   0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_BW_LSB                      1
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_BW_MSB                      3
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_BW_MASK                     0x000000000000000e

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_PKT_TYPE_OFFSET             0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_PKT_TYPE_LSB                4
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_PKT_TYPE_MSB                7
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_PKT_TYPE_MASK               0x00000000000000f0

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_STBC_OFFSET                 0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_STBC_LSB                    8
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_STBC_MSB                    8
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_STBC_MASK                   0x0000000000000100

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_LDPC_OFFSET                 0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_LDPC_LSB                    9
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_LDPC_MSB                    9
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_LDPC_MASK                   0x0000000000000200

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_SGI_OFFSET                  0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_SGI_LSB                     10
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_SGI_MSB                     11
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_SGI_MASK                    0x0000000000000c00

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_MCS_OFFSET                  0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_MCS_LSB                     12
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_MCS_MSB                     15
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TRANSMIT_MCS_MASK                    0x000000000000f000

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_OFDMA_TRANSMISSION_OFFSET            0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_OFDMA_TRANSMISSION_LSB               16
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_OFDMA_TRANSMISSION_MSB               16
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_OFDMA_TRANSMISSION_MASK              0x0000000000010000

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TONES_IN_RU_OFFSET                   0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TONES_IN_RU_LSB                      17
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TONES_IN_RU_MSB                      28
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_TONES_IN_RU_MASK                     0x000000001ffe0000

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_RESERVED_0A_OFFSET                   0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_RESERVED_0A_LSB                      29
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_RESERVED_0A_MSB                      31
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_RESERVED_0A_MASK                     0x00000000e0000000

#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_PPDU_TRANSMISSION_TSF_OFFSET         0x0000000000000010
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_PPDU_TRANSMISSION_TSF_LSB            32
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_PPDU_TRANSMISSION_TSF_MSB            63
#define TQM_UPDATE_TX_MPDU_COUNT_TX_RATE_STATS_PPDU_TRANSMISSION_TSF_MASK           0xffffffff00000000

#define TQM_UPDATE_TX_MPDU_COUNT_TRANSMITTED_MPDU_BYTE_COUNT_OFFSET                 0x0000000000000018
#define TQM_UPDATE_TX_MPDU_COUNT_TRANSMITTED_MPDU_BYTE_COUNT_LSB                    0
#define TQM_UPDATE_TX_MPDU_COUNT_TRANSMITTED_MPDU_BYTE_COUNT_MSB                    23
#define TQM_UPDATE_TX_MPDU_COUNT_TRANSMITTED_MPDU_BYTE_COUNT_MASK                   0x0000000000ffffff

#define TQM_UPDATE_TX_MPDU_COUNT_RESERVED_5A_OFFSET                                 0x0000000000000018
#define TQM_UPDATE_TX_MPDU_COUNT_RESERVED_5A_LSB                                    24
#define TQM_UPDATE_TX_MPDU_COUNT_RESERVED_5A_MSB                                    31
#define TQM_UPDATE_TX_MPDU_COUNT_RESERVED_5A_MASK                                   0x00000000ff000000

#define TQM_UPDATE_TX_MPDU_COUNT_TLV64_PADDING_OFFSET                               0x0000000000000018
#define TQM_UPDATE_TX_MPDU_COUNT_TLV64_PADDING_LSB                                  32
#define TQM_UPDATE_TX_MPDU_COUNT_TLV64_PADDING_MSB                                  63
#define TQM_UPDATE_TX_MPDU_COUNT_TLV64_PADDING_MASK                                 0xffffffff00000000

#endif   // TQM_UPDATE_TX_MPDU_COUNT
