// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019 Lucian Copeland for Adafruit Industries
// SPDX-FileCopyrightText: Copyright (c) 2019 Artur Pacholec
// SPDX-FileCopyrightText: Copyright (c) 2023 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

/*
 * This file is autogenerated! Do NOT hand edit it. Instead, edit tools/gen_peripherals_data.py and
 * then rerun the script. You'll need to 1) clone https://github.com/nxp-mcuxpresso/mcux-soc-svd/
 * and 2) download and extract config tools data from https://mcuxpresso.nxp.com/en/select_config_tools_data.
 *
 * Run `python tools/gen_peripherals_data.py <svd dir> <config dir> MIMXRT1052` to update this file.
 */

#include "py/obj.h"
#include "py/mphal.h"
#include "mimxrt10xx/periph.h"

LPI2C_Type *const mcu_i2c_banks[4] = { LPI2C1, LPI2C2, LPI2C3, LPI2C4 };

const mcu_periph_obj_t mcu_i2c_sda_list[9] = {
    PERIPH_PIN(1, 2, kIOMUXC_LPI2C1_SDA_SELECT_INPUT, 0, &pin_GPIO_SD_B1_05),
    PERIPH_PIN(1, 3, kIOMUXC_LPI2C1_SDA_SELECT_INPUT, 1, &pin_GPIO_AD_B1_01),

    PERIPH_PIN(2, 3, kIOMUXC_LPI2C2_SDA_SELECT_INPUT, 0, &pin_GPIO_SD_B1_10),
    PERIPH_PIN(2, 2, kIOMUXC_LPI2C2_SDA_SELECT_INPUT, 1, &pin_GPIO_B0_05),

    PERIPH_PIN(3, 2, kIOMUXC_LPI2C3_SDA_SELECT_INPUT, 0, &pin_GPIO_EMC_21),
    PERIPH_PIN(3, 2, kIOMUXC_LPI2C3_SDA_SELECT_INPUT, 1, &pin_GPIO_SD_B0_01),
    PERIPH_PIN(3, 1, kIOMUXC_LPI2C3_SDA_SELECT_INPUT, 2, &pin_GPIO_AD_B1_06),

    PERIPH_PIN(4, 2, kIOMUXC_LPI2C4_SDA_SELECT_INPUT, 0, &pin_GPIO_EMC_11),
    PERIPH_PIN(4, 0, kIOMUXC_LPI2C4_SDA_SELECT_INPUT, 1, &pin_GPIO_AD_B0_13),
};

const mcu_periph_obj_t mcu_i2c_scl_list[9] = {
    PERIPH_PIN(1, 2, kIOMUXC_LPI2C1_SCL_SELECT_INPUT, 0, &pin_GPIO_SD_B1_04),
    PERIPH_PIN(1, 3, kIOMUXC_LPI2C1_SCL_SELECT_INPUT, 1, &pin_GPIO_AD_B1_00),

    PERIPH_PIN(2, 3, kIOMUXC_LPI2C2_SCL_SELECT_INPUT, 0, &pin_GPIO_SD_B1_11),
    PERIPH_PIN(2, 2, kIOMUXC_LPI2C2_SCL_SELECT_INPUT, 1, &pin_GPIO_B0_04),

    PERIPH_PIN(3, 2, kIOMUXC_LPI2C3_SCL_SELECT_INPUT, 0, &pin_GPIO_EMC_22),
    PERIPH_PIN(3, 2, kIOMUXC_LPI2C3_SCL_SELECT_INPUT, 1, &pin_GPIO_SD_B0_00),
    PERIPH_PIN(3, 1, kIOMUXC_LPI2C3_SCL_SELECT_INPUT, 2, &pin_GPIO_AD_B1_07),

    PERIPH_PIN(4, 2, kIOMUXC_LPI2C4_SCL_SELECT_INPUT, 0, &pin_GPIO_EMC_12),
    PERIPH_PIN(4, 0, kIOMUXC_LPI2C4_SCL_SELECT_INPUT, 1, &pin_GPIO_AD_B0_12),
};

LPSPI_Type *const mcu_spi_banks[4] = { LPSPI1, LPSPI2, LPSPI3, LPSPI4 };

const mcu_periph_obj_t mcu_spi_sck_list[8] = {
    PERIPH_PIN(1, 3, kIOMUXC_LPSPI1_SCK_SELECT_INPUT, 0, &pin_GPIO_EMC_27),
    PERIPH_PIN(1, 4, kIOMUXC_LPSPI1_SCK_SELECT_INPUT, 1, &pin_GPIO_SD_B0_00),

    PERIPH_PIN(2, 4, kIOMUXC_LPSPI2_SCK_SELECT_INPUT, 0, &pin_GPIO_SD_B1_07),
    PERIPH_PIN(2, 2, kIOMUXC_LPSPI2_SCK_SELECT_INPUT, 1, &pin_GPIO_EMC_00),

    PERIPH_PIN(3, 7, kIOMUXC_LPSPI3_SCK_SELECT_INPUT, 0, &pin_GPIO_AD_B0_00),
    PERIPH_PIN(3, 2, kIOMUXC_LPSPI3_SCK_SELECT_INPUT, 1, &pin_GPIO_AD_B1_15),

    PERIPH_PIN(4, 3, kIOMUXC_LPSPI4_SCK_SELECT_INPUT, 0, &pin_GPIO_B0_03),
    PERIPH_PIN(4, 1, kIOMUXC_LPSPI4_SCK_SELECT_INPUT, 1, &pin_GPIO_B1_07),
};

const mcu_periph_obj_t mcu_spi_sdo_list[8] = {
    PERIPH_PIN(1, 3, kIOMUXC_LPSPI1_SDO_SELECT_INPUT, 0, &pin_GPIO_EMC_28),
    PERIPH_PIN(1, 4, kIOMUXC_LPSPI1_SDO_SELECT_INPUT, 1, &pin_GPIO_SD_B0_02),

    PERIPH_PIN(2, 4, kIOMUXC_LPSPI2_SDO_SELECT_INPUT, 0, &pin_GPIO_SD_B1_08),
    PERIPH_PIN(2, 2, kIOMUXC_LPSPI2_SDO_SELECT_INPUT, 1, &pin_GPIO_EMC_02),

    PERIPH_PIN(3, 7, kIOMUXC_LPSPI3_SDO_SELECT_INPUT, 0, &pin_GPIO_AD_B0_01),
    PERIPH_PIN(3, 2, kIOMUXC_LPSPI3_SDO_SELECT_INPUT, 1, &pin_GPIO_AD_B1_14),

    PERIPH_PIN(4, 3, kIOMUXC_LPSPI4_SDO_SELECT_INPUT, 0, &pin_GPIO_B0_02),
    PERIPH_PIN(4, 1, kIOMUXC_LPSPI4_SDO_SELECT_INPUT, 1, &pin_GPIO_B1_06),
};

const mcu_periph_obj_t mcu_spi_sdi_list[8] = {
    PERIPH_PIN(1, 3, kIOMUXC_LPSPI1_SDI_SELECT_INPUT, 0, &pin_GPIO_EMC_29),
    PERIPH_PIN(1, 4, kIOMUXC_LPSPI1_SDI_SELECT_INPUT, 1, &pin_GPIO_SD_B0_03),

    PERIPH_PIN(2, 4, kIOMUXC_LPSPI2_SDI_SELECT_INPUT, 0, &pin_GPIO_SD_B1_09),
    PERIPH_PIN(2, 2, kIOMUXC_LPSPI2_SDI_SELECT_INPUT, 1, &pin_GPIO_EMC_03),

    PERIPH_PIN(3, 7, kIOMUXC_LPSPI3_SDI_SELECT_INPUT, 0, &pin_GPIO_AD_B0_02),
    PERIPH_PIN(3, 2, kIOMUXC_LPSPI3_SDI_SELECT_INPUT, 1, &pin_GPIO_AD_B1_13),

    PERIPH_PIN(4, 3, kIOMUXC_LPSPI4_SDI_SELECT_INPUT, 0, &pin_GPIO_B0_01),
    PERIPH_PIN(4, 1, kIOMUXC_LPSPI4_SDI_SELECT_INPUT, 1, &pin_GPIO_B1_05),
};

LPUART_Type *const mcu_uart_banks[8] = { LPUART1, LPUART2, LPUART3, LPUART4, LPUART5, LPUART6, LPUART7, LPUART8 };

const mcu_periph_obj_t mcu_uart_rx_list[18] = {
    PERIPH_PIN(1, 2, 0, 0, &pin_GPIO_AD_B0_13),

    PERIPH_PIN(2, 2, kIOMUXC_LPUART2_RX_SELECT_INPUT, 0, &pin_GPIO_SD_B1_10),
    PERIPH_PIN(2, 2, kIOMUXC_LPUART2_RX_SELECT_INPUT, 1, &pin_GPIO_AD_B1_03),

    PERIPH_PIN(3, 2, kIOMUXC_LPUART3_RX_SELECT_INPUT, 0, &pin_GPIO_AD_B1_07),
    PERIPH_PIN(3, 2, kIOMUXC_LPUART3_RX_SELECT_INPUT, 1, &pin_GPIO_EMC_14),
    PERIPH_PIN(3, 3, kIOMUXC_LPUART3_RX_SELECT_INPUT, 2, &pin_GPIO_B0_09),

    PERIPH_PIN(4, 4, kIOMUXC_LPUART4_RX_SELECT_INPUT, 0, &pin_GPIO_SD_B1_01),
    PERIPH_PIN(4, 2, kIOMUXC_LPUART4_RX_SELECT_INPUT, 1, &pin_GPIO_EMC_20),
    PERIPH_PIN(4, 2, kIOMUXC_LPUART4_RX_SELECT_INPUT, 2, &pin_GPIO_B1_01),

    PERIPH_PIN(5, 2, kIOMUXC_LPUART5_RX_SELECT_INPUT, 0, &pin_GPIO_EMC_24),
    PERIPH_PIN(5, 1, kIOMUXC_LPUART5_RX_SELECT_INPUT, 1, &pin_GPIO_B1_13),

    PERIPH_PIN(6, 2, kIOMUXC_LPUART6_RX_SELECT_INPUT, 0, &pin_GPIO_EMC_26),
    PERIPH_PIN(6, 2, kIOMUXC_LPUART6_RX_SELECT_INPUT, 1, &pin_GPIO_AD_B0_03),

    PERIPH_PIN(7, 2, kIOMUXC_LPUART7_RX_SELECT_INPUT, 0, &pin_GPIO_SD_B1_09),
    PERIPH_PIN(7, 2, kIOMUXC_LPUART7_RX_SELECT_INPUT, 1, &pin_GPIO_EMC_32),

    PERIPH_PIN(8, 2, kIOMUXC_LPUART8_RX_SELECT_INPUT, 0, &pin_GPIO_SD_B0_05),
    PERIPH_PIN(8, 2, kIOMUXC_LPUART8_RX_SELECT_INPUT, 1, &pin_GPIO_AD_B1_11),
    PERIPH_PIN(8, 2, kIOMUXC_LPUART8_RX_SELECT_INPUT, 2, &pin_GPIO_EMC_39),
};

const mcu_periph_obj_t mcu_uart_tx_list[18] = {
    PERIPH_PIN(1, 2, 0, 0, &pin_GPIO_AD_B0_12),

    PERIPH_PIN(2, 2, kIOMUXC_LPUART2_TX_SELECT_INPUT, 0, &pin_GPIO_SD_B1_11),
    PERIPH_PIN(2, 2, kIOMUXC_LPUART2_TX_SELECT_INPUT, 1, &pin_GPIO_AD_B1_02),

    PERIPH_PIN(3, 2, kIOMUXC_LPUART3_TX_SELECT_INPUT, 0, &pin_GPIO_AD_B1_06),
    PERIPH_PIN(3, 2, kIOMUXC_LPUART3_TX_SELECT_INPUT, 1, &pin_GPIO_EMC_13),
    PERIPH_PIN(3, 3, kIOMUXC_LPUART3_TX_SELECT_INPUT, 2, &pin_GPIO_B0_08),

    PERIPH_PIN(4, 4, kIOMUXC_LPUART4_TX_SELECT_INPUT, 0, &pin_GPIO_SD_B1_00),
    PERIPH_PIN(4, 2, kIOMUXC_LPUART4_TX_SELECT_INPUT, 1, &pin_GPIO_EMC_19),
    PERIPH_PIN(4, 2, kIOMUXC_LPUART4_TX_SELECT_INPUT, 2, &pin_GPIO_B1_00),

    PERIPH_PIN(5, 2, kIOMUXC_LPUART5_TX_SELECT_INPUT, 0, &pin_GPIO_EMC_23),
    PERIPH_PIN(5, 1, kIOMUXC_LPUART5_TX_SELECT_INPUT, 1, &pin_GPIO_B1_12),

    PERIPH_PIN(6, 2, kIOMUXC_LPUART6_TX_SELECT_INPUT, 0, &pin_GPIO_EMC_25),
    PERIPH_PIN(6, 2, kIOMUXC_LPUART6_TX_SELECT_INPUT, 1, &pin_GPIO_AD_B0_02),

    PERIPH_PIN(7, 2, kIOMUXC_LPUART7_TX_SELECT_INPUT, 0, &pin_GPIO_SD_B1_08),
    PERIPH_PIN(7, 2, kIOMUXC_LPUART7_TX_SELECT_INPUT, 1, &pin_GPIO_EMC_31),

    PERIPH_PIN(8, 2, kIOMUXC_LPUART8_TX_SELECT_INPUT, 0, &pin_GPIO_SD_B0_04),
    PERIPH_PIN(8, 2, kIOMUXC_LPUART8_TX_SELECT_INPUT, 1, &pin_GPIO_AD_B1_10),
    PERIPH_PIN(8, 2, kIOMUXC_LPUART8_TX_SELECT_INPUT, 2, &pin_GPIO_EMC_38),
};

const mcu_periph_obj_t mcu_uart_rts_list[9] = {
    PERIPH_PIN(1, 2, 0, 0, &pin_GPIO_AD_B0_15),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_AD_B1_01),

    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_EMC_16),
    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_AD_B1_05),

    PERIPH_PIN(4, 2, 0, 0, &pin_GPIO_EMC_18),

    PERIPH_PIN(5, 2, 0, 0, &pin_GPIO_EMC_27),

    PERIPH_PIN(6, 2, 0, 0, &pin_GPIO_EMC_29),

    PERIPH_PIN(7, 2, 0, 0, &pin_GPIO_SD_B1_07),

    PERIPH_PIN(8, 2, 0, 0, &pin_GPIO_SD_B0_03),
};

const mcu_periph_obj_t mcu_uart_cts_list[9] = {
    PERIPH_PIN(1, 2, 0, 0, &pin_GPIO_AD_B0_14),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_AD_B1_00),

    PERIPH_PIN(3, 2, kIOMUXC_LPUART3_CTS_B_SELECT_INPUT, 0, &pin_GPIO_EMC_15),
    PERIPH_PIN(3, 2, kIOMUXC_LPUART3_CTS_B_SELECT_INPUT, 1, &pin_GPIO_AD_B1_04),

    PERIPH_PIN(4, 2, 0, 0, &pin_GPIO_EMC_17),

    PERIPH_PIN(5, 2, 0, 0, &pin_GPIO_EMC_28),

    PERIPH_PIN(6, 2, 0, 0, &pin_GPIO_EMC_30),

    PERIPH_PIN(7, 2, 0, 0, &pin_GPIO_SD_B1_06),

    PERIPH_PIN(8, 2, 0, 0, &pin_GPIO_SD_B0_02),
};

I2S_Type *const mcu_i2s_banks[3] = { SAI1, SAI2, SAI3 };

const mcu_periph_obj_t mcu_i2s_rx_data0_list[6] = {
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_RX_DATA0_SELECT_INPUT, 0, &pin_GPIO_SD_B1_06),
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_RX_DATA0_SELECT_INPUT, 1, &pin_GPIO_AD_B1_12),
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_RX_DATA0_SELECT_INPUT, 2, &pin_GPIO_B1_00),

    PERIPH_PIN(2, 2, kIOMUXC_SAI2_RX_DATA0_SELECT_INPUT, 0, &pin_GPIO_EMC_08),
    PERIPH_PIN(2, 3, kIOMUXC_SAI2_RX_DATA0_SELECT_INPUT, 1, &pin_GPIO_AD_B0_08),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_33),
};

const mcu_periph_obj_t mcu_i2s_rx_sync_list[6] = {
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_RX_SYNC_SELECT_INPUT, 0, &pin_GPIO_SD_B1_04),
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_RX_SYNC_SELECT_INPUT, 1, &pin_GPIO_AD_B1_10),
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_RX_SYNC_SELECT_INPUT, 2, &pin_GPIO_B0_14),

    PERIPH_PIN(2, 2, kIOMUXC_SAI2_RX_SYNC_SELECT_INPUT, 0, &pin_GPIO_EMC_09),
    PERIPH_PIN(2, 3, kIOMUXC_SAI2_RX_SYNC_SELECT_INPUT, 1, &pin_GPIO_AD_B0_07),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_34),
};

const mcu_periph_obj_t mcu_i2s_tx_bclk_list[6] = {
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_TX_BCLK_SELECT_INPUT, 0, &pin_GPIO_SD_B1_08),
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_TX_BCLK_SELECT_INPUT, 1, &pin_GPIO_AD_B1_14),
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_TX_BCLK_SELECT_INPUT, 2, &pin_GPIO_B1_02),

    PERIPH_PIN(2, 2, kIOMUXC_SAI2_TX_BCLK_SELECT_INPUT, 0, &pin_GPIO_EMC_06),
    PERIPH_PIN(2, 3, kIOMUXC_SAI2_TX_BCLK_SELECT_INPUT, 1, &pin_GPIO_AD_B0_05),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_38),
};

const mcu_periph_obj_t mcu_i2s_tx_data0_list[6] = {
    PERIPH_PIN(1, 3, 0, 0, &pin_GPIO_AD_B1_13),
    PERIPH_PIN(1, 3, 0, 0, &pin_GPIO_B1_01),
    PERIPH_PIN(1, 3, 0, 0, &pin_GPIO_SD_B1_07),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_EMC_04),
    PERIPH_PIN(2, 3, 0, 0, &pin_GPIO_AD_B0_09),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_36),
};

const mcu_periph_obj_t mcu_i2s_tx_sync_list[6] = {
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_TX_SYNC_SELECT_INPUT, 0, &pin_GPIO_SD_B1_09),
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_TX_SYNC_SELECT_INPUT, 1, &pin_GPIO_AD_B1_15),
    PERIPH_PIN(1, 3, kIOMUXC_SAI1_TX_SYNC_SELECT_INPUT, 2, &pin_GPIO_B1_03),

    PERIPH_PIN(2, 2, kIOMUXC_SAI2_TX_SYNC_SELECT_INPUT, 0, &pin_GPIO_EMC_05),
    PERIPH_PIN(2, 3, kIOMUXC_SAI2_TX_SYNC_SELECT_INPUT, 1, &pin_GPIO_AD_B0_04),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_39),
};

const mcu_periph_obj_t mcu_i2s_mclk_list[6] = {
    PERIPH_PIN(1, 3, 0, 0, &pin_GPIO_AD_B1_09),
    PERIPH_PIN(1, 3, 0, 0, &pin_GPIO_B0_13),
    PERIPH_PIN(1, 3, 0, 0, &pin_GPIO_SD_B1_03),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_EMC_07),
    PERIPH_PIN(2, 3, 0, 0, &pin_GPIO_AD_B0_10),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_37),
};

const mcu_periph_obj_t mcu_mqs_left_list[3] = {
    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_14),
    PERIPH_PIN(3, 1, 0, 0, &pin_GPIO_AD_B0_05),
    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_B0_01),
};

const mcu_periph_obj_t mcu_mqs_right_list[3] = {
    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_13),
    PERIPH_PIN(3, 1, 0, 0, &pin_GPIO_AD_B0_04),
    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_B0_00),
};

const mcu_pwm_obj_t mcu_pwm_list[67] = {
    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_EMC_23_FLEXPWM1_PWM0_A, &pin_GPIO_EMC_23),
    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_SD_B0_00_FLEXPWM1_PWM0_A, &pin_GPIO_SD_B0_00),

    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_EMC_24_FLEXPWM1_PWM0_B, &pin_GPIO_EMC_24),
    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_SD_B0_01_FLEXPWM1_PWM0_B, &pin_GPIO_SD_B0_01),

    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmX, IOMUXC_GPIO_AD_B0_02_FLEXPWM1_PWM0_X, &pin_GPIO_AD_B0_02),

    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_EMC_25_FLEXPWM1_PWM1_A, &pin_GPIO_EMC_25),
    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_SD_B0_02_FLEXPWM1_PWM1_A, &pin_GPIO_SD_B0_02),

    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_EMC_26_FLEXPWM1_PWM1_B, &pin_GPIO_EMC_26),
    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_SD_B0_03_FLEXPWM1_PWM1_B, &pin_GPIO_SD_B0_03),

    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmX, IOMUXC_GPIO_AD_B0_03_FLEXPWM1_PWM1_X, &pin_GPIO_AD_B0_03),

    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_EMC_27_FLEXPWM1_PWM2_A, &pin_GPIO_EMC_27),
    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_SD_B0_04_FLEXPWM1_PWM2_A, &pin_GPIO_SD_B0_04),

    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_EMC_28_FLEXPWM1_PWM2_B, &pin_GPIO_EMC_28),
    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_SD_B0_05_FLEXPWM1_PWM2_B, &pin_GPIO_SD_B0_05),

    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmX, IOMUXC_GPIO_AD_B0_12_FLEXPWM1_PWM2_X, &pin_GPIO_AD_B0_12),

    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_12_FLEXPWM1_PWM3_A, &pin_GPIO_EMC_12),
    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_38_FLEXPWM1_PWM3_A, &pin_GPIO_EMC_38),
    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_AD_B0_10_FLEXPWM1_PWM3_A, &pin_GPIO_AD_B0_10),
    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_B1_00_FLEXPWM1_PWM3_A, &pin_GPIO_B1_00),
    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_SD_B1_00_FLEXPWM1_PWM3_A, &pin_GPIO_SD_B1_00),

    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_13_FLEXPWM1_PWM3_B, &pin_GPIO_EMC_13),
    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_39_FLEXPWM1_PWM3_B, &pin_GPIO_EMC_39),
    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_AD_B0_11_FLEXPWM1_PWM3_B, &pin_GPIO_AD_B0_11),
    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_B1_01_FLEXPWM1_PWM3_B, &pin_GPIO_B1_01),
    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_SD_B1_01_FLEXPWM1_PWM3_B, &pin_GPIO_SD_B1_01),

    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmX, IOMUXC_GPIO_AD_B0_13_FLEXPWM1_PWM3_X, &pin_GPIO_AD_B0_13),

    PWM_PIN(PWM2, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_EMC_06_FLEXPWM2_PWM0_A, &pin_GPIO_EMC_06),
    PWM_PIN(PWM2, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_B0_06_FLEXPWM2_PWM0_A, &pin_GPIO_B0_06),

    PWM_PIN(PWM2, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_EMC_07_FLEXPWM2_PWM0_B, &pin_GPIO_EMC_07),
    PWM_PIN(PWM2, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_B0_07_FLEXPWM2_PWM0_B, &pin_GPIO_B0_07),

    PWM_PIN(PWM2, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_EMC_08_FLEXPWM2_PWM1_A, &pin_GPIO_EMC_08),
    PWM_PIN(PWM2, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_B0_08_FLEXPWM2_PWM1_A, &pin_GPIO_B0_08),

    PWM_PIN(PWM2, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_EMC_09_FLEXPWM2_PWM1_B, &pin_GPIO_EMC_09),
    PWM_PIN(PWM2, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_B0_09_FLEXPWM2_PWM1_B, &pin_GPIO_B0_09),

    PWM_PIN(PWM2, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_EMC_10_FLEXPWM2_PWM2_A, &pin_GPIO_EMC_10),
    PWM_PIN(PWM2, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_B0_10_FLEXPWM2_PWM2_A, &pin_GPIO_B0_10),

    PWM_PIN(PWM2, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_EMC_11_FLEXPWM2_PWM2_B, &pin_GPIO_EMC_11),
    PWM_PIN(PWM2, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_B0_11_FLEXPWM2_PWM2_B, &pin_GPIO_B0_11),

    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_19_FLEXPWM2_PWM3_A, &pin_GPIO_EMC_19),
    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_AD_B0_00_FLEXPWM2_PWM3_A, &pin_GPIO_AD_B0_00),
    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_AD_B0_09_FLEXPWM2_PWM3_A, &pin_GPIO_AD_B0_09),
    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_B1_02_FLEXPWM2_PWM3_A, &pin_GPIO_B1_02),
    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_SD_B1_02_FLEXPWM2_PWM3_A, &pin_GPIO_SD_B1_02),

    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_20_FLEXPWM2_PWM3_B, &pin_GPIO_EMC_20),
    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_AD_B0_01_FLEXPWM2_PWM3_B, &pin_GPIO_AD_B0_01),
    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_B1_03_FLEXPWM2_PWM3_B, &pin_GPIO_B1_03),
    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_SD_B1_03_FLEXPWM2_PWM3_B, &pin_GPIO_SD_B1_03),

    PWM_PIN(PWM3, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_EMC_29_FLEXPWM3_PWM0_A, &pin_GPIO_EMC_29),

    PWM_PIN(PWM3, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_EMC_30_FLEXPWM3_PWM0_B, &pin_GPIO_EMC_30),

    PWM_PIN(PWM3, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_EMC_31_FLEXPWM3_PWM1_A, &pin_GPIO_EMC_31),

    PWM_PIN(PWM3, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_EMC_32_FLEXPWM3_PWM1_B, &pin_GPIO_EMC_32),

    PWM_PIN(PWM3, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_EMC_33_FLEXPWM3_PWM2_A, &pin_GPIO_EMC_33),

    PWM_PIN(PWM3, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_EMC_34_FLEXPWM3_PWM2_B, &pin_GPIO_EMC_34),

    PWM_PIN(PWM3, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_21_FLEXPWM3_PWM3_A, &pin_GPIO_EMC_21),

    PWM_PIN(PWM3, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_22_FLEXPWM3_PWM3_B, &pin_GPIO_EMC_22),

    PWM_PIN(PWM4, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_EMC_00_FLEXPWM4_PWM0_A, &pin_GPIO_EMC_00),
    PWM_PIN(PWM4, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_AD_B1_08_FLEXPWM4_PWM0_A, &pin_GPIO_AD_B1_08),

    PWM_PIN(PWM4, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_EMC_01_FLEXPWM4_PWM0_B, &pin_GPIO_EMC_01),

    PWM_PIN(PWM4, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_EMC_02_FLEXPWM4_PWM1_A, &pin_GPIO_EMC_02),
    PWM_PIN(PWM4, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_AD_B1_09_FLEXPWM4_PWM1_A, &pin_GPIO_AD_B1_09),

    PWM_PIN(PWM4, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_EMC_03_FLEXPWM4_PWM1_B, &pin_GPIO_EMC_03),

    PWM_PIN(PWM4, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_EMC_04_FLEXPWM4_PWM2_A, &pin_GPIO_EMC_04),
    PWM_PIN(PWM4, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_B1_14_FLEXPWM4_PWM2_A, &pin_GPIO_B1_14),

    PWM_PIN(PWM4, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_EMC_05_FLEXPWM4_PWM2_B, &pin_GPIO_EMC_05),

    PWM_PIN(PWM4, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_17_FLEXPWM4_PWM3_A, &pin_GPIO_EMC_17),
    PWM_PIN(PWM4, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_B1_15_FLEXPWM4_PWM3_A, &pin_GPIO_B1_15),

    PWM_PIN(PWM4, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_18_FLEXPWM4_PWM3_B, &pin_GPIO_EMC_18),
};
