/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#ifndef _CAM_CSIPHY_2_1_0_HWREG_H_
#define _CAM_CSIPHY_2_1_0_HWREG_H_

#include "../cam_csiphy_dev.h"

struct csiphy_reg_parms_t csiphy_v2_1_0 = {
	.mipi_csiphy_interrupt_status0_addr = 0x10B0,
	.mipi_csiphy_interrupt_clear0_addr = 0x1058,
	.mipi_csiphy_glbl_irq_cmd_addr = 0x1028,
	.csiphy_common_array_size = 7,
	.csiphy_reset_array_size = 5,
	.csiphy_2ph_config_array_size = 23,
	.csiphy_3ph_config_array_size = 34,
	.csiphy_2ph_clock_lane = 0x1,
	.csiphy_2ph_combo_ck_ln = 0x10,
};

struct csiphy_reg_t csiphy_common_reg_2_1_0[] = {
	{0x1014, 0xD5, 0x00, CSIPHY_2PH_REGS},
	{0x1014, 0x2A, 0x00, CSIPHY_3PH_REGS},
	{0x1018, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x101C, 0x7A, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1000, 0x01, 0x01, CSIPHY_DEFAULT_PARAMS},
	{0x1000, 0x02, 0x00, CSIPHY_2PH_REGS},
	{0x1000, 0x0E, 0x00, CSIPHY_3PH_REGS},
};

struct csiphy_reg_t csiphy_reset_reg_2_1_0[] = {
	{0x1014, 0x00, 0x00, CSIPHY_LANE_ENABLE},
	{0x101C, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1018, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1000, 0x01, 0x01, CSIPHY_DEFAULT_PARAMS},
	{0x1000, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
};

struct csiphy_reg_t csiphy_irq_reg_2_1_0[] = {
	{0x102c, 0xff, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1030, 0xff, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1034, 0xfb, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1038, 0xff, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x103c, 0x7f, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1040, 0xff, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1044, 0xff, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1048, 0xef, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x104c, 0xff, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1050, 0xff, 0x00, CSIPHY_DEFAULT_PARAMS},
	{0x1054, 0xff, 0x00, CSIPHY_DEFAULT_PARAMS},
};

struct csiphy_reg_t csiphy_2ph_v2_1_0_reg[MAX_LANES][MAX_SETTINGS_PER_LANE] = {
	{
		{0x0094, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x00A0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0090, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0098, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0094, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0030, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0028, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0000, 0x8E, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x000C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0038, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x002C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0034, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x001C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0014, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x003C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0004, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0020, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0008, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0010, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x005C, 0x00, 0x00, CSIPHY_SKEW_CAL},
		{0x0060, 0xFD, 0x00, CSIPHY_SKEW_CAL},
		{0x0064, 0x7F, 0x00, CSIPHY_SKEW_CAL},
		{0x1000, 0x02, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0E94, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0EA0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E90, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E98, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E94, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0E30, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E28, 0x04, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E00, 0x80, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E0C, 0xFF, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E38, 0x1F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E2C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E34, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E1C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E14, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E3C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E04, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E20, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E08, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0E10, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E5C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0E60, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0E64, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x1000, 0x02, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0494, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x04A0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0490, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0498, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0494, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0430, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0428, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0400, 0x8E, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x040C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0438, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x042C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0434, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x041C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0414, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x043C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0404, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0420, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0408, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0410, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x045C, 0x00, 0x00, CSIPHY_SKEW_CAL},
		{0x0460, 0xFD, 0x00, CSIPHY_SKEW_CAL},
		{0x0464, 0x7F, 0x00, CSIPHY_SKEW_CAL},
		{0x1000, 0x02, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0894, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x08A0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0890, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0898, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0894, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0830, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0828, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0800, 0x8E, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x080C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0838, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x082C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0834, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x081C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0814, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x083C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0804, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0820, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0808, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0810, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x085C, 0x00, 0x00, CSIPHY_SKEW_CAL},
		{0x0860, 0xFD, 0x00, CSIPHY_SKEW_CAL},
		{0x0864, 0x7F, 0x00, CSIPHY_SKEW_CAL},
		{0x1000, 0x02, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0C94, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0CA0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C90, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C98, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C94, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0C30, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C28, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0C00, 0x8E, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C0C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0C38, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C2C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C34, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C1C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C14, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C3C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C04, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C20, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C08, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0C10, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C5C, 0x00, 0x00, CSIPHY_SKEW_CAL},
		{0x0C60, 0xFD, 0x00, CSIPHY_SKEW_CAL},
		{0x0C64, 0x7F, 0x00, CSIPHY_SKEW_CAL},
		{0x1000, 0x02, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
};

struct csiphy_reg_t
	csiphy_2ph_v2_1_0_combo_mode_reg[MAX_LANES][MAX_SETTINGS_PER_LANE] = {
	{
		{0x0094, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x00A0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0090, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0098, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0094, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0030, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0028, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0000, 0xD4, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x000C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0038, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x002C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0034, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x001C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0014, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x003C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0004, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0020, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0008, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0010, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x005C, 0x00, 0x00, CSIPHY_SKEW_CAL},
		{0x0060, 0xFD, 0x00, CSIPHY_SKEW_CAL},
		{0x0064, 0x7F, 0x00, CSIPHY_SKEW_CAL},
		{0x1000, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0E94, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0EA0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E90, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E98, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E94, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0E30, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E28, 0x04, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E00, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E0C, 0xFF, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E38, 0x1F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E2C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E34, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E1C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E14, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E3C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E04, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E20, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E08, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0E10, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0E5C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0E60, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0E64, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x1000, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0494, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x04A0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0490, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0498, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0494, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0430, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0428, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0400, 0xD4, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x040C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0438, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x042C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0434, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x041C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0414, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x043C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0404, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0420, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0408, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0410, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x045C, 0x00, 0x00, CSIPHY_SKEW_CAL},
		{0x0460, 0xFD, 0x00, CSIPHY_SKEW_CAL},
		{0x0464, 0x7F, 0x00, CSIPHY_SKEW_CAL},
		{0x1000, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0894, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x08A0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0890, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0898, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0894, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0830, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0800, 0xD4, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x080C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0838, 0xFE, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0828, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x082C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0834, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x081C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0814, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x083C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0804, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0820, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0808, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0810, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x085C, 0x00, 0x00, CSIPHY_SKEW_CAL},
		{0x0860, 0xFD, 0x00, CSIPHY_SKEW_CAL},
		{0x0864, 0x7F, 0x00, CSIPHY_SKEW_CAL},
		{0x1000, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0C94, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0CA0, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C90, 0x0f, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C98, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C94, 0x07, 0x01, CSIPHY_DEFAULT_PARAMS},
		{0x0C30, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C00, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C0C, 0xFF, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C38, 0x1F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C28, 0x0E, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C2C, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C34, 0x0F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C1C, 0x0A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C14, 0x60, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C3C, 0xB8, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C04, 0x0C, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C20, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C08, 0x10, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0C10, 0x52, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0C5C, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0C60, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x0C64, 0x00, 0x00, CSIPHY_DNP_PARAMS},
		{0x1000, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
};

struct csiphy_reg_t csiphy_3ph_v2_1_0_reg[MAX_LANES][MAX_SETTINGS_PER_LANE] = {
	{
		{0x0294, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x02F4, 0x1A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x02F8, 0x1A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x02FC, 0x1A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x02F0, 0xEF, 0x03, CSIPHY_DEFAULT_PARAMS},
		{0x0294, 0x09, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0278, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0290, 0x02, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0268, 0xA1, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x026C, 0x12, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0204, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x020C, 0x06, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0208, 0x00, 0x00, CSIPHY_SETTLE_CNT_HIGHER_BYTE},
		{0x0214, 0x20, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0260, 0xA0, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x02E4, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x02E8, 0x7F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x02EC, 0x7F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0218, 0x3E, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x021C, 0x41, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0220, 0x41, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0224, 0x7F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0228, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x022C, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0264, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0244, 0xB2, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0310, 0x35, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x025C, 0xC2, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x02BC, 0xD0, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0288, 0xAA, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x028C, 0x91, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0270, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0274, 0x05, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x1000, 0x0E, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0694, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x06F4, 0x1A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x06F8, 0x1A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x06FC, 0x1A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x06F0, 0xEF, 0x03, CSIPHY_DEFAULT_PARAMS},
		{0x0694, 0x09, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0678, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0690, 0x02, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0668, 0xA1, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x066C, 0x12, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0604, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x060C, 0x06, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0608, 0x00, 0x00, CSIPHY_SETTLE_CNT_HIGHER_BYTE},
		{0x0614, 0x20, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0660, 0xA0, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x06E4, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x06E8, 0x7F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x06EC, 0x7F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0618, 0x3E, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x061C, 0x41, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0620, 0x41, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0624, 0x7F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0628, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x062C, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0664, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0644, 0xB2, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0710, 0x35, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x065C, 0xC2, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x06BC, 0xD0, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0688, 0xAA, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x068C, 0x91, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0670, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0674, 0x05, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x1000, 0x0E, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
	{
		{0x0A94, 0x08, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0AF4, 0x1A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0AF8, 0x1A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0AFC, 0x1A, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0AF0, 0xEF, 0x03, CSIPHY_DEFAULT_PARAMS},
		{0x0A94, 0x09, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A78, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A90, 0x02, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A68, 0xA1, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A6C, 0x12, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A04, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A0C, 0x06, 0x00, CSIPHY_SETTLE_CNT_LOWER_BYTE},
		{0x0A08, 0x00, 0x00, CSIPHY_SETTLE_CNT_HIGHER_BYTE},
		{0x0A14, 0x20, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A60, 0xA0, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0AE4, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0AE8, 0x7F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0AEC, 0x7F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A18, 0x3E, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A1C, 0x41, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A20, 0x41, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A24, 0x7F, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A28, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A2C, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A64, 0x01, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A44, 0xB2, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0B10, 0x35, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A5C, 0xC2, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0ABC, 0xD0, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A88, 0xAA, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A8C, 0x91, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A70, 0x00, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x0A74, 0x05, 0x00, CSIPHY_DEFAULT_PARAMS},
		{0x1000, 0x0E, 0x00, CSIPHY_DEFAULT_PARAMS},
	},
};

#endif /* _CAM_CSIPHY_2_1_0_HWREG_H_ */
