/* Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: ISC
 */


#ifndef _UNIFORM_TQM_CMD_HEADER_H_
#define _UNIFORM_TQM_CMD_HEADER_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_UNIFORM_TQM_CMD_HEADER 2


struct uniform_tqm_cmd_header {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t tqm_cmd_number                                          : 32; // [31:0]
             uint32_t tqm_status_required_for_chip0                           :  1, // [0:0]
                      tqm_status_required_for_chip1                           :  1, // [1:1]
                      tqm_status_required_for_chip2                           :  1, // [2:2]
                      tqm_status_required_for_chip3                           :  1, // [3:3]
                      session_id                                              :  8, // [11:4]
                      tqm_status_ring                                         :  1, // [12:12]
                      pass_on_to_tqm                                          :  1, // [13:13]
                      sch_sifs_burst_cmd_drop                                 :  1, // [14:14]
                      sch_backoff_cmd_drop                                    :  1, // [15:15]
                      reserved_1a                                             : 16; // [31:16]
#else
             uint32_t tqm_cmd_number                                          : 32; // [31:0]
             uint32_t reserved_1a                                             : 16, // [31:16]
                      sch_backoff_cmd_drop                                    :  1, // [15:15]
                      sch_sifs_burst_cmd_drop                                 :  1, // [14:14]
                      pass_on_to_tqm                                          :  1, // [13:13]
                      tqm_status_ring                                         :  1, // [12:12]
                      session_id                                              :  8, // [11:4]
                      tqm_status_required_for_chip3                           :  1, // [3:3]
                      tqm_status_required_for_chip2                           :  1, // [2:2]
                      tqm_status_required_for_chip1                           :  1, // [1:1]
                      tqm_status_required_for_chip0                           :  1; // [0:0]
#endif
};

#define UNIFORM_TQM_CMD_HEADER_TQM_CMD_NUMBER_OFFSET                                0x00000000
#define UNIFORM_TQM_CMD_HEADER_TQM_CMD_NUMBER_LSB                                   0
#define UNIFORM_TQM_CMD_HEADER_TQM_CMD_NUMBER_MSB                                   31
#define UNIFORM_TQM_CMD_HEADER_TQM_CMD_NUMBER_MASK                                  0xffffffff

#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP0_OFFSET                 0x00000004
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP0_LSB                    0
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP0_MSB                    0
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP0_MASK                   0x00000001

#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP1_OFFSET                 0x00000004
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP1_LSB                    1
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP1_MSB                    1
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP1_MASK                   0x00000002

#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP2_OFFSET                 0x00000004
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP2_LSB                    2
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP2_MSB                    2
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP2_MASK                   0x00000004

#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP3_OFFSET                 0x00000004
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP3_LSB                    3
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP3_MSB                    3
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_REQUIRED_FOR_CHIP3_MASK                   0x00000008

#define UNIFORM_TQM_CMD_HEADER_SESSION_ID_OFFSET                                    0x00000004
#define UNIFORM_TQM_CMD_HEADER_SESSION_ID_LSB                                       4
#define UNIFORM_TQM_CMD_HEADER_SESSION_ID_MSB                                       11
#define UNIFORM_TQM_CMD_HEADER_SESSION_ID_MASK                                      0x00000ff0

#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_RING_OFFSET                               0x00000004
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_RING_LSB                                  12
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_RING_MSB                                  12
#define UNIFORM_TQM_CMD_HEADER_TQM_STATUS_RING_MASK                                 0x00001000

#define UNIFORM_TQM_CMD_HEADER_PASS_ON_TO_TQM_OFFSET                                0x00000004
#define UNIFORM_TQM_CMD_HEADER_PASS_ON_TO_TQM_LSB                                   13
#define UNIFORM_TQM_CMD_HEADER_PASS_ON_TO_TQM_MSB                                   13
#define UNIFORM_TQM_CMD_HEADER_PASS_ON_TO_TQM_MASK                                  0x00002000

#define UNIFORM_TQM_CMD_HEADER_SCH_SIFS_BURST_CMD_DROP_OFFSET                       0x00000004
#define UNIFORM_TQM_CMD_HEADER_SCH_SIFS_BURST_CMD_DROP_LSB                          14
#define UNIFORM_TQM_CMD_HEADER_SCH_SIFS_BURST_CMD_DROP_MSB                          14
#define UNIFORM_TQM_CMD_HEADER_SCH_SIFS_BURST_CMD_DROP_MASK                         0x00004000

#define UNIFORM_TQM_CMD_HEADER_SCH_BACKOFF_CMD_DROP_OFFSET                          0x00000004
#define UNIFORM_TQM_CMD_HEADER_SCH_BACKOFF_CMD_DROP_LSB                             15
#define UNIFORM_TQM_CMD_HEADER_SCH_BACKOFF_CMD_DROP_MSB                             15
#define UNIFORM_TQM_CMD_HEADER_SCH_BACKOFF_CMD_DROP_MASK                            0x00008000

#define UNIFORM_TQM_CMD_HEADER_RESERVED_1A_OFFSET                                   0x00000004
#define UNIFORM_TQM_CMD_HEADER_RESERVED_1A_LSB                                      16
#define UNIFORM_TQM_CMD_HEADER_RESERVED_1A_MSB                                      31
#define UNIFORM_TQM_CMD_HEADER_RESERVED_1A_MASK                                     0xffff0000

#endif   // UNIFORM_TQM_CMD_HEADER
