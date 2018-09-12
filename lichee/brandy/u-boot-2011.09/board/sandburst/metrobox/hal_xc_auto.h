/*
 * board/sandburst/metrobox/hal_xc_auto.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
/* ****************************************************************
 * Common defs for reg spec for chip xc
 * Auto-generated by trex2: DO NOT HAND-EDIT!!
 * ****************************************************************
 */

#ifndef HAL_XC_AUTO_H
#define HAL_XC_AUTO_H

/* ----------------------------------------------------------------
 * For block: 'xcvr_cntl'
 */

/* ---- Block instance addressing (for block-select) */
#define XCVR_CNTL_BLOCK_ADDR_BIT_L 6
#define XCVR_CNTL_BLOCK_ADDR_BIT_H 9
#define XCVR_CNTL_BLOCK_ADDR_WIDTH 4

#define  XCVR_CNTL_ADDR  0x0

/* ---- Reg addressing (within block) */
#define XCVR_CNTL_REG_ADDR_BIT_L 2
#define XCVR_CNTL_REG_ADDR_BIT_H 5
#define XCVR_CNTL_REG_ADDR_WIDTH 4


/* ================================================================
 * ---- Register XC_XCVR_CNTL_REVISION */
#define SAND_HAL_XC_XCVR_CNTL_REVISION_OFFSET    0x000
#ifndef SAND_HAL_XC_XCVR_CNTL_REVISION_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_REVISION_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_REVISION_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_REVISION_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_REVISION_LSB      0

/* ================================================================
 * ---- Register XC_XCVR_CNTL_RESET */
#define SAND_HAL_XC_XCVR_CNTL_RESET_OFFSET    0x004
#ifndef SAND_HAL_XC_XCVR_CNTL_RESET_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_RESET_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_RESET_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_RESET_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_RESET_LSB      0

/* ================================================================
 * ---- Register XC_XCVR_CNTL_STATUS */
#define SAND_HAL_XC_XCVR_CNTL_STATUS_OFFSET    0x008
#ifndef SAND_HAL_XC_XCVR_CNTL_STATUS_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_STATUS_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_STATUS_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_STATUS_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_STATUS_LSB      0

/* ================================================================
 * ---- Register XC_XCVR_CNTL_CNTL */
#define SAND_HAL_XC_XCVR_CNTL_CNTL_OFFSET    0x01c
#ifndef SAND_HAL_XC_XCVR_CNTL_CNTL_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_CNTL_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_CNTL_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_CNTL_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_CNTL_LSB      0

/* ================================================================
 * ---- Register XC_XCVR_CNTL_BRD_INFO */
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_OFFSET    0x020
#ifndef SAND_HAL_XC_XCVR_CNTL_BRD_INFO_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_LSB      0

/* ================================================================
 * ---- Register XC_XCVR_CNTL_MAC_FLOW_CTL */
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_OFFSET    0x024
#ifndef SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_LSB      0

/* ================================================================
 * ---- Register XC_XCVR_CNTL_INTERRUPT */
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OFFSET    0x00c
#ifndef SAND_HAL_XC_XCVR_CNTL_INTERRUPT_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_LSB      0

/* ================================================================
 * ---- Register XC_XCVR_CNTL_INTERRUPT_MASK */
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OFFSET    0x010
#ifndef SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_LSB      0

/* ================================================================
 * ---- Register XC_XCVR_CNTL_SCRATCH */
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_OFFSET    0x014
#ifndef SAND_HAL_XC_XCVR_CNTL_SCRATCH_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_LSB      0

/* ================================================================
 * ---- Register XC_XCVR_CNTL_SCRATCH_MASK */
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_OFFSET    0x018
#ifndef SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_NO_TEST_MASK
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_NO_TEST_MASK    0x000
#endif
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_MSB     31
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_LSB      0

/* ================================================================
 * Field info for register XC_XCVR_CNTL_REVISION */
#define SAND_HAL_XC_XCVR_CNTL_REVISION_IDENTIFICATION_MASK    0x0000ff00
#define SAND_HAL_XC_XCVR_CNTL_REVISION_IDENTIFICATION_SHIFT    8
#define SAND_HAL_XC_XCVR_CNTL_REVISION_IDENTIFICATION_MSB    15
#define SAND_HAL_XC_XCVR_CNTL_REVISION_IDENTIFICATION_LSB    8
#define SAND_HAL_XC_XCVR_CNTL_REVISION_IDENTIFICATION_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_REVISION_IDENTIFICATION_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_REVISION_REVISION_MASK    0x000000ff
#define SAND_HAL_XC_XCVR_CNTL_REVISION_REVISION_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_REVISION_REVISION_MSB    7
#define SAND_HAL_XC_XCVR_CNTL_REVISION_REVISION_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_REVISION_REVISION_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_REVISION_REVISION_DEFAULT    0x00000000

/* ================================================================
 * Field info for register XC_XCVR_CNTL_RESET */
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC1_RESET_N_MASK    0x00020000
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC1_RESET_N_SHIFT    17
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC1_RESET_N_MSB    17
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC1_RESET_N_LSB    17
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC1_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC1_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC0_RESET_N_MASK    0x00010000
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC0_RESET_N_SHIFT    16
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC0_RESET_N_MSB    16
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC0_RESET_N_LSB    16
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC0_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_MAC0_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_SLAVE_RESET_N_MASK    0x00008000
#define SAND_HAL_XC_XCVR_CNTL_RESET_SLAVE_RESET_N_SHIFT    15
#define SAND_HAL_XC_XCVR_CNTL_RESET_SLAVE_RESET_N_MSB    15
#define SAND_HAL_XC_XCVR_CNTL_RESET_SLAVE_RESET_N_LSB    15
#define SAND_HAL_XC_XCVR_CNTL_RESET_SLAVE_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_SLAVE_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_BME_RESET_N_MASK    0x00004000
#define SAND_HAL_XC_XCVR_CNTL_RESET_BME_RESET_N_SHIFT    14
#define SAND_HAL_XC_XCVR_CNTL_RESET_BME_RESET_N_MSB    14
#define SAND_HAL_XC_XCVR_CNTL_RESET_BME_RESET_N_LSB    14
#define SAND_HAL_XC_XCVR_CNTL_RESET_BME_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_BME_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_ACE_RESET_N_MASK    0x00002000
#define SAND_HAL_XC_XCVR_CNTL_RESET_ACE_RESET_N_SHIFT    13
#define SAND_HAL_XC_XCVR_CNTL_RESET_ACE_RESET_N_MSB    13
#define SAND_HAL_XC_XCVR_CNTL_RESET_ACE_RESET_N_LSB    13
#define SAND_HAL_XC_XCVR_CNTL_RESET_ACE_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_ACE_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_CF_RESET_N_MASK    0x00001000
#define SAND_HAL_XC_XCVR_CNTL_RESET_CF_RESET_N_SHIFT    12
#define SAND_HAL_XC_XCVR_CNTL_RESET_CF_RESET_N_MSB    12
#define SAND_HAL_XC_XCVR_CNTL_RESET_CF_RESET_N_LSB    12
#define SAND_HAL_XC_XCVR_CNTL_RESET_CF_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_CF_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_A_RESET_N_MASK    0x00000800
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_A_RESET_N_SHIFT    11
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_A_RESET_N_MSB    11
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_A_RESET_N_LSB    11
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_A_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_A_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_A_RESET_N_MASK    0x00000400
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_A_RESET_N_SHIFT    10
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_A_RESET_N_MSB    10
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_A_RESET_N_LSB    10
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_A_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_A_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_A_RESET_N_MASK    0x00000200
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_A_RESET_N_SHIFT    9
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_A_RESET_N_MSB    9
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_A_RESET_N_LSB    9
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_A_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_A_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_B_RESET_N_MASK    0x00000100
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_B_RESET_N_SHIFT    8
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_B_RESET_N_MSB    8
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_B_RESET_N_LSB    8
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_B_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_QE_B_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_B_RESET_N_MASK    0x00000080
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_B_RESET_N_SHIFT    7
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_B_RESET_N_MSB    7
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_B_RESET_N_LSB    7
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_B_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_IFE_B_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_B_RESET_N_MASK    0x00000040
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_B_RESET_N_SHIFT    6
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_B_RESET_N_MSB    6
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_B_RESET_N_LSB    6
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_B_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_EFE_B_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK1_RESET_N_MASK    0x00000020
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK1_RESET_N_SHIFT    5
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK1_RESET_N_MSB    5
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK1_RESET_N_LSB    5
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK1_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK1_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK0_RESET_N_MASK    0x00000010
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK0_RESET_N_SHIFT    4
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK0_RESET_N_MSB    4
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK0_RESET_N_LSB    4
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK0_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_LOCK0_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX1_RESET_N_MASK    0x00000008
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX1_RESET_N_SHIFT    3
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX1_RESET_N_MSB    3
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX1_RESET_N_LSB    3
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX1_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX1_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX0_RESET_N_MASK    0x00000004
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX0_RESET_N_SHIFT    2
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX0_RESET_N_MSB    2
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX0_RESET_N_LSB    2
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX0_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_I2C_MUX0_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY0_RESET_N_MASK    0x00000002
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY0_RESET_N_SHIFT    1
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY0_RESET_N_MSB    1
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY0_RESET_N_LSB    1
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY0_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY0_RESET_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY1_RESET_N_MASK    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY1_RESET_N_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY1_RESET_N_MSB    0
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY1_RESET_N_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY1_RESET_N_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_RESET_PHY1_RESET_N_DEFAULT    0x00000000

/* ================================================================
 * Field info for register XC_XCVR_CNTL_STATUS */
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_A_PRES_N_MASK    0x00000004
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_A_PRES_N_SHIFT    2
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_A_PRES_N_MSB    2
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_A_PRES_N_LSB    2
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_A_PRES_N_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_A_PRES_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_B_PRES_N_MASK    0x00000002
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_B_PRES_N_SHIFT    1
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_B_PRES_N_MSB    1
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_B_PRES_N_LSB    1
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_B_PRES_N_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_STATUS_PS_B_PRES_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_STATUS_ALL_GOOD_MASK    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_STATUS_ALL_GOOD_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_STATUS_ALL_GOOD_MSB    0
#define SAND_HAL_XC_XCVR_CNTL_STATUS_ALL_GOOD_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_STATUS_ALL_GOOD_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_STATUS_ALL_GOOD_DEFAULT    0x00000000

/* ================================================================
 * Field info for register XC_XCVR_CNTL_CNTL */
#define SAND_HAL_XC_XCVR_CNTL_CNTL_SW_PWR_DOWN_MASK    0x00000400
#define SAND_HAL_XC_XCVR_CNTL_CNTL_SW_PWR_DOWN_SHIFT    10
#define SAND_HAL_XC_XCVR_CNTL_CNTL_SW_PWR_DOWN_MSB    10
#define SAND_HAL_XC_XCVR_CNTL_CNTL_SW_PWR_DOWN_LSB    10
#define SAND_HAL_XC_XCVR_CNTL_CNTL_SW_PWR_DOWN_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_CNTL_SW_PWR_DOWN_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_CNTL_OVER_TEMP_LED_MASK    0x00000300
#define SAND_HAL_XC_XCVR_CNTL_CNTL_OVER_TEMP_LED_SHIFT    8
#define SAND_HAL_XC_XCVR_CNTL_CNTL_OVER_TEMP_LED_MSB    9
#define SAND_HAL_XC_XCVR_CNTL_CNTL_OVER_TEMP_LED_LSB    8
#define SAND_HAL_XC_XCVR_CNTL_CNTL_OVER_TEMP_LED_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_CNTL_OVER_TEMP_LED_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_CNTL_ERROR_LED_MASK    0x000000c0
#define SAND_HAL_XC_XCVR_CNTL_CNTL_ERROR_LED_SHIFT    6
#define SAND_HAL_XC_XCVR_CNTL_CNTL_ERROR_LED_MSB    7
#define SAND_HAL_XC_XCVR_CNTL_CNTL_ERROR_LED_LSB    6
#define SAND_HAL_XC_XCVR_CNTL_CNTL_ERROR_LED_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_CNTL_ERROR_LED_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_R_LED_MASK    0x00000030
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_R_LED_SHIFT    4
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_R_LED_MSB    5
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_R_LED_LSB    4
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_R_LED_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_R_LED_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_L_LED_MASK    0x0000000c
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_L_LED_SHIFT    2
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_L_LED_MSB    3
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_L_LED_LSB    2
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_L_LED_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_CNTL_RS232_L_LED_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_CNTL_CORE_CLK_50_EN_MASK    0x00000002
#define SAND_HAL_XC_XCVR_CNTL_CNTL_CORE_CLK_50_EN_SHIFT    1
#define SAND_HAL_XC_XCVR_CNTL_CNTL_CORE_CLK_50_EN_MSB    1
#define SAND_HAL_XC_XCVR_CNTL_CNTL_CORE_CLK_50_EN_LSB    1
#define SAND_HAL_XC_XCVR_CNTL_CNTL_CORE_CLK_50_EN_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_CNTL_CORE_CLK_50_EN_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_CNTL_PCI_CLK_EN_MASK    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_CNTL_PCI_CLK_EN_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_CNTL_PCI_CLK_EN_MSB    0
#define SAND_HAL_XC_XCVR_CNTL_CNTL_PCI_CLK_EN_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_CNTL_PCI_CLK_EN_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_CNTL_PCI_CLK_EN_DEFAULT    0x00000001

/* ================================================================
 * Field info for register XC_XCVR_CNTL_BRD_INFO */
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_ID_MASK    0x000000f0
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_ID_SHIFT    4
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_ID_MSB    7
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_ID_LSB    4
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_ID_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_ID_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_REV_MASK    0x00000003
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_REV_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_REV_MSB    1
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_REV_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_REV_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_BRD_INFO_BRD_REV_DEFAULT    0x00000000

/* ================================================================
 * Field info for register XC_XCVR_CNTL_MAC_FLOW_CTL */
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_FR_MASK    0x00001000
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_FR_SHIFT    12
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_FR_MSB    12
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_FR_LSB    12
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_FR_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_FR_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_ADDR_MASK    0x00000f00
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_ADDR_SHIFT    8
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_ADDR_MSB    11
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_ADDR_LSB    8
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_ADDR_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACB_TXPAUSE_ADDR_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_FR_MASK    0x00000010
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_FR_SHIFT    4
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_FR_MSB    4
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_FR_LSB    4
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_FR_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_FR_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_ADDR_MASK    0x0000000f
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_ADDR_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_ADDR_MSB    3
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_ADDR_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_ADDR_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_MAC_FLOW_CTL_MACA_TXPAUSE_ADDR_DEFAULT    0x00000000

/* ================================================================
 * Field info for register XC_XCVR_CNTL_INTERRUPT */
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_BME_TIMEOUT_MASK    0x00002000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_BME_TIMEOUT_SHIFT    13
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_BME_TIMEOUT_MSB    13
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_BME_TIMEOUT_LSB    13
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_BME_TIMEOUT_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_BME_TIMEOUT_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC_TIMEOUT_MASK    0x00001000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC_TIMEOUT_SHIFT    12
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC_TIMEOUT_MSB    12
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC_TIMEOUT_LSB    12
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC_TIMEOUT_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC_TIMEOUT_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_A_LOSOUT_N_MASK    0x00000800
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_A_LOSOUT_N_SHIFT    11
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_A_LOSOUT_N_MSB    11
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_A_LOSOUT_N_LSB    11
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_A_LOSOUT_N_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_A_LOSOUT_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_B_LOSOUT_N_MASK    0x00000400
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_B_LOSOUT_N_SHIFT    10
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_B_LOSOUT_N_MSB    10
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_B_LOSOUT_N_LSB    10
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_B_LOSOUT_N_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_QK_B_LOSOUT_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_NR_MASK    0x00000200
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_NR_SHIFT    9
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_NR_MSB    9
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_NR_LSB    9
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_NR_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_NR_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_NR_MASK    0x00000100
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_NR_SHIFT    8
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_NR_MSB    8
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_NR_LSB    8
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_NR_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_NR_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_INT_N_MASK    0x00000080
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_INT_N_SHIFT    7
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_INT_N_MSB    7
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_INT_N_LSB    7
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_INT_N_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_A_INT_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_INT_N_MASK    0x00000040
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_INT_N_SHIFT    6
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_INT_N_MSB    6
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_INT_N_LSB    6
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_INT_N_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_XFP_B_INT_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_A_MASK    0x00000020
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_A_SHIFT    5
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_A_MSB    5
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_A_LSB    5
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_A_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_A_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_B_MASK    0x00000010
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_B_SHIFT    4
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_B_MSB    4
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_B_LSB    4
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_B_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_OVER_TEMP_B_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_A_MASK    0x00000008
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_A_SHIFT    3
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_A_MSB    3
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_A_LSB    3
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_A_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_A_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_B_MASK    0x00000004
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_B_SHIFT    2
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_B_MSB    2
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_B_LSB    2
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_B_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_POWER_FAIL_B_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC1_INT_N_MASK    0x00000002
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC1_INT_N_SHIFT    1
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC1_INT_N_MSB    1
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC1_INT_N_LSB    1
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC1_INT_N_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC1_INT_N_DEFAULT    0x00000000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC0_INT_N_MASK    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC0_INT_N_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC0_INT_N_MSB    0
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC0_INT_N_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC0_INT_N_TYPE (SAND_HAL_TYPE_READ)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MAC0_INT_N_DEFAULT    0x00000000

/* ================================================================
 * Field info for register XC_XCVR_CNTL_INTERRUPT_MASK */
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_BME_TIMEOUT_DISINT_MASK    0x00002000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_BME_TIMEOUT_DISINT_SHIFT    13
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_BME_TIMEOUT_DISINT_MSB    13
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_BME_TIMEOUT_DISINT_LSB    13
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_BME_TIMEOUT_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_BME_TIMEOUT_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC_TIMEOUT_DISINT_MASK    0x00001000
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC_TIMEOUT_DISINT_SHIFT    12
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC_TIMEOUT_DISINT_MSB    12
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC_TIMEOUT_DISINT_LSB    12
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC_TIMEOUT_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC_TIMEOUT_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_A_LOSOUT_N_DISINT_MASK    0x00000800
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_A_LOSOUT_N_DISINT_SHIFT    11
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_A_LOSOUT_N_DISINT_MSB    11
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_A_LOSOUT_N_DISINT_LSB    11
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_A_LOSOUT_N_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_A_LOSOUT_N_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_B_LOSOUT_N_DISINT_MASK    0x00000400
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_B_LOSOUT_N_DISINT_SHIFT    10
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_B_LOSOUT_N_DISINT_MSB    10
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_B_LOSOUT_N_DISINT_LSB    10
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_B_LOSOUT_N_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_QK_B_LOSOUT_N_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_NR_DISINT_MASK    0x00000200
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_NR_DISINT_SHIFT    9
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_NR_DISINT_MSB    9
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_NR_DISINT_LSB    9
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_NR_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_NR_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_NR_DISINT_MASK    0x00000100
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_NR_DISINT_SHIFT    8
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_NR_DISINT_MSB    8
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_NR_DISINT_LSB    8
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_NR_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_NR_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_INT_N_DISINT_MASK    0x00000080
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_INT_N_DISINT_SHIFT    7
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_INT_N_DISINT_MSB    7
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_INT_N_DISINT_LSB    7
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_INT_N_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_A_INT_N_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_INT_N_DISINT_MASK    0x00000040
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_INT_N_DISINT_SHIFT    6
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_INT_N_DISINT_MSB    6
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_INT_N_DISINT_LSB    6
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_INT_N_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_XFP_B_INT_N_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_A_DISINT_MASK    0x00000020
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_A_DISINT_SHIFT    5
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_A_DISINT_MSB    5
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_A_DISINT_LSB    5
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_A_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_A_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_B_DISINT_MASK    0x00000010
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_B_DISINT_SHIFT    4
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_B_DISINT_MSB    4
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_B_DISINT_LSB    4
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_B_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_OVER_TEMP_B_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_A_DISINT_MASK    0x00000008
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_A_DISINT_SHIFT    3
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_A_DISINT_MSB    3
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_A_DISINT_LSB    3
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_A_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_A_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_B_DISINT_MASK    0x00000004
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_B_DISINT_SHIFT    2
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_B_DISINT_MSB    2
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_B_DISINT_LSB    2
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_B_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_POWER_FAIL_B_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC1_INT_N_DISINT_MASK    0x00000002
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC1_INT_N_DISINT_SHIFT    1
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC1_INT_N_DISINT_MSB    1
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC1_INT_N_DISINT_LSB    1
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC1_INT_N_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC1_INT_N_DISINT_DEFAULT    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC0_INT_N_DISINT_MASK    0x00000001
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC0_INT_N_DISINT_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC0_INT_N_DISINT_MSB    0
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC0_INT_N_DISINT_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC0_INT_N_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_INTERRUPT_MASK_MAC0_INT_N_DISINT_DEFAULT    0x00000001

/* ================================================================
 * Field info for register XC_XCVR_CNTL_SCRATCH */
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_TEST_BITS_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_TEST_BITS_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_TEST_BITS_MSB    31
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_TEST_BITS_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_TEST_BITS_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_TEST_BITS_DEFAULT    0x00000000

/* ================================================================
 * Field info for register XC_XCVR_CNTL_SCRATCH_MASK */
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_TEST_BITS_DISINT_MASK    0xffffffff
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_TEST_BITS_DISINT_SHIFT    0
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_TEST_BITS_DISINT_MSB    31
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_TEST_BITS_DISINT_LSB    0
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_TEST_BITS_DISINT_TYPE (SAND_HAL_TYPE_WRITE)
#define SAND_HAL_XC_XCVR_CNTL_SCRATCH_MASK_TEST_BITS_DISINT_DEFAULT    0xffffffff

#endif /* matches #ifndef HAL_XC_AUTO_H */