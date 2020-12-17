/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2019-2020, The Linux Foundation. All rights reserved.
 */


#ifndef _CAM_VFE_LITE68X_H_
#define _CAM_VFE_LITE68X_H_
#include "cam_vfe_camif_ver3.h"
#include "cam_vfe_top_ver4.h"
#include "cam_vfe_core.h"
#include "cam_vfe_bus_ver3.h"
#include "cam_irq_controller.h"

static struct cam_irq_register_set vfe68x_top_irq_reg_set[3] = {
	{
		.mask_reg_offset   = 0x00001024,
		.clear_reg_offset  = 0x0000102C,
		.status_reg_offset = 0x0000101C,
	},
	{
		.mask_reg_offset   = 0x00001028,
		.clear_reg_offset  = 0x00001030,
		.status_reg_offset = 0x00001020,
	},
};

static struct cam_irq_controller_reg_info vfe68x_top_irq_reg_info = {
	.num_registers = 2,
	.irq_reg_set = vfe68x_top_irq_reg_set,
	.global_clear_offset  = 0x00001038,
	.global_clear_bitmask = 0x00000001,
};

static struct cam_vfe_top_ver4_reg_offset_common vfe68x_top_common_reg = {
	.hw_version               = 0x00001000,
	.hw_capability            = 0x00001004,
	.core_cgc_ovd_0           = 0x00001014,
	.ahb_cgc_ovd              = 0x00001018,
	.core_cfg_0               = 0x0000103C,
	.diag_config              = 0x00001040,
	.diag_sensor_status_0     = 0x00001044,
	.diag_sensor_status_1     = 0x00001048,
	.violation_status         = 0x00001054,
	.top_debug_cfg            = 0x00001074,
	.top_debug_0              = 0x0000105C,
	.top_debug_1              = 0x00001060,
	.top_debug_2              = 0x00001064,
	.top_debug_3              = 0x00001068,
	.top_debug_4              = 0x0000106C,
};

static struct cam_vfe_ver4_path_reg_data vfe68x_rdi_reg_data[4] = {

	{
		.sof_irq_mask                    = 0x4,
		.eof_irq_mask                    = 0x8,
		.error_irq_mask                 = 0x1,
		.enable_diagnostic_hw            = 0x1,
		.top_debug_cfg_en                = 0x1,
	},
	{
		.sof_irq_mask                    = 0x10,
		.eof_irq_mask                    = 0x20,
		.error_irq_mask                 = 0x1,
		.enable_diagnostic_hw            = 0x1,
		.top_debug_cfg_en                = 0x1,
	},
	{
		.sof_irq_mask                    = 0x40,
		.eof_irq_mask                    = 0x80,
		.error_irq_mask                 = 0x1,
		.enable_diagnostic_hw            = 0x1,
		.top_debug_cfg_en                = 0x1,
	},
	{
		.sof_irq_mask                    = 0x100,
		.eof_irq_mask                    = 0x200,
		.error_irq_mask                 = 0x1,
		.enable_diagnostic_hw            = 0x1,
		.top_debug_cfg_en                = 0x1,
	},
};

static struct cam_vfe_ver4_path_hw_info
	vfe68x_rdi_hw_info[CAM_VFE_RDI_VER2_MAX] = {
	{
		.common_reg     = &vfe68x_top_common_reg,
		.reg_data       = &vfe68x_rdi_reg_data[0],
	},
	{
		.common_reg     = &vfe68x_top_common_reg,
		.reg_data       = &vfe68x_rdi_reg_data[1],
	},
	{
		.common_reg     = &vfe68x_top_common_reg,
		.reg_data       = &vfe68x_rdi_reg_data[2],
	},
	{
		.common_reg     = &vfe68x_top_common_reg,
		.reg_data       = &vfe68x_rdi_reg_data[3],
	},
};


static struct cam_vfe_top_ver4_hw_info vfe68x_top_hw_info = {
	.common_reg = &vfe68x_top_common_reg,
	.rdi_hw_info[0] = &vfe68x_rdi_hw_info[0],
	.rdi_hw_info[1] = &vfe68x_rdi_hw_info[1],
	.rdi_hw_info[2] = &vfe68x_rdi_hw_info[2],
	.rdi_hw_info[3] = &vfe68x_rdi_hw_info[3],
	.num_mux = 4,
	.mux_type = {
		CAM_VFE_RDI_VER_1_0,
		CAM_VFE_RDI_VER_1_0,
		CAM_VFE_RDI_VER_1_0,
		CAM_VFE_RDI_VER_1_0,
	},

};

static struct cam_irq_register_set vfe680x_bus_irq_reg[2] = {
		{
			.mask_reg_offset   = 0x00001218,
			.clear_reg_offset  = 0x00001220,
			.status_reg_offset = 0x00001228,
		},
		{
			.mask_reg_offset   = 0x0000121C,
			.clear_reg_offset  = 0x00001224,
			.status_reg_offset = 0x0000122C,
		},
};

static struct cam_vfe_bus_ver3_hw_info vfe680x_bus_hw_info = {
	.common_reg = {
		.hw_version                       = 0x00001200,
		.cgc_ovd                          = 0x00001208,
		.if_frameheader_cfg               = {
			0x00001234,
			0x00001238,
			0x0000123C,
			0x00001240,
			0x00001244,
		},
		.pwr_iso_cfg                      = 0x0000125C,
		.overflow_status_clear            = 0x00001260,
		.ccif_violation_status            = 0x00001264,
		.overflow_status                  = 0x00001268,
		.image_size_violation_status      = 0x00001270,
		.debug_status_top_cfg             = 0x000012D4,
		.debug_status_top                 = 0x000012D8,
		.test_bus_ctrl                    = 0x000012DC,
		.irq_reg_info = {
			.num_registers            = 2,
			.irq_reg_set              = vfe680x_bus_irq_reg,
			.global_clear_offset      = 0x00001230,
			.global_clear_bitmask     = 0x00000001,
		},
	},
	.num_client = 6,
	.bus_client_reg = {
		/* BUS Client 0 RDI0 */
		{
			.cfg                      = 0x00001400,
			.image_addr               = 0x00001404,
			.frame_incr               = 0x00001408,
			.image_cfg_0              = 0x0000140C,
			.image_cfg_1              = 0x00001410,
			.image_cfg_2              = 0x00001414,
			.packer_cfg               = 0x00001418,
			.frame_header_addr        = 0x00001420,
			.frame_header_incr        = 0x00001424,
			.frame_header_cfg         = 0x00001428,
			.irq_subsample_period     = 0x00001430,
			.irq_subsample_pattern    = 0x00001434,
			.framedrop_period         = 0x00001438,
			.framedrop_pattern        = 0x0000143C,
			.mmu_prefetch_cfg         = 0x00001460,
			.mmu_prefetch_max_offset  = 0x00001464,
			.system_cache_cfg         = 0x00001468,
			.addr_status_0            = 0x00001470,
			.addr_status_1            = 0x00001474,
			.addr_status_2            = 0x00001478,
			.addr_status_3            = 0x0000147C,
			.debug_status_cfg         = 0x00001480,
			.debug_status_0           = 0x00001484,
			.debug_status_1           = 0x00001488,
			.comp_group               = CAM_VFE_BUS_VER3_COMP_GRP_1,
			.ubwc_regs                = NULL,
		},
		/* BUS Client 1 RDI1 */
		{
			.cfg                      = 0x00001500,
			.image_addr               = 0x00001504,
			.frame_incr               = 0x00001508,
			.image_cfg_0              = 0x0000150C,
			.image_cfg_1              = 0x00001510,
			.image_cfg_2              = 0x00001514,
			.packer_cfg               = 0x00001518,
			.frame_header_addr        = 0x00001520,
			.frame_header_incr        = 0x00001524,
			.frame_header_cfg         = 0x00001528,
			.irq_subsample_period     = 0x00001530,
			.irq_subsample_pattern    = 0x00001534,
			.framedrop_period         = 0x00001538,
			.framedrop_pattern        = 0x0000153C,
			.mmu_prefetch_cfg         = 0x00001560,
			.mmu_prefetch_max_offset  = 0x00001564,
			.system_cache_cfg         = 0x00001568,
			.addr_status_0            = 0x00001570,
			.addr_status_1            = 0x00001574,
			.addr_status_2            = 0x00001578,
			.addr_status_3            = 0x0000157C,
			.debug_status_cfg         = 0x00001580,
			.debug_status_0           = 0x00001584,
			.debug_status_1           = 0x00001588,
			.comp_group               = CAM_VFE_BUS_VER3_COMP_GRP_2,
			.ubwc_regs                = NULL,
		},
		/* BUS Client 2 RDI2 */
		{
			.cfg                      = 0x00001600,
			.image_addr               = 0x00001604,
			.frame_incr               = 0x00001608,
			.image_cfg_0              = 0x0000160C,
			.image_cfg_1              = 0x00001610,
			.image_cfg_2              = 0x00001614,
			.packer_cfg               = 0x00001618,
			.frame_header_addr        = 0x00001620,
			.frame_header_incr        = 0x00001624,
			.frame_header_cfg         = 0x00001628,
			.irq_subsample_period     = 0x00001630,
			.irq_subsample_pattern    = 0x00001634,
			.framedrop_period         = 0x00001638,
			.framedrop_pattern        = 0x0000163C,
			.mmu_prefetch_cfg         = 0x00001660,
			.mmu_prefetch_max_offset  = 0x00001664,
			.system_cache_cfg         = 0x00001668,
			.addr_status_0            = 0x00001670,
			.addr_status_1            = 0x00001674,
			.addr_status_2            = 0x00001678,
			.addr_status_3            = 0x0000167C,
			.debug_status_cfg         = 0x00001680,
			.debug_status_0           = 0x00001684,
			.debug_status_1           = 0x00001688,
			.comp_group               = CAM_VFE_BUS_VER3_COMP_GRP_3,
			.ubwc_regs                = NULL,
		},
		/* BUS Client 3 RDI3 */
		{
			.cfg                      = 0x00001700,
			.image_addr               = 0x00001704,
			.frame_incr               = 0x00001708,
			.image_cfg_0              = 0x0000170C,
			.image_cfg_1              = 0x00001710,
			.image_cfg_2              = 0x00001714,
			.packer_cfg               = 0x00001718,
			.frame_header_addr        = 0x00001720,
			.frame_header_incr        = 0x00001724,
			.frame_header_cfg         = 0x00001728,
			.irq_subsample_period     = 0x00001730,
			.irq_subsample_pattern    = 0x00001734,
			.framedrop_period         = 0x00001738,
			.framedrop_pattern        = 0x0000173C,
			.mmu_prefetch_cfg         = 0x00001760,
			.mmu_prefetch_max_offset  = 0x00001764,
			.system_cache_cfg         = 0x00001768,
			.addr_status_0            = 0x00001770,
			.addr_status_1            = 0x00001774,
			.addr_status_2            = 0x00001778,
			.addr_status_3            = 0x0000177C,
			.debug_status_cfg         = 0x00001780,
			.debug_status_0           = 0x00001784,
			.debug_status_1           = 0x00001788,
			.comp_group               = CAM_VFE_BUS_VER3_COMP_GRP_4,
			.ubwc_regs                = NULL,
		},
		/* BUS Client 4 Gamma */
		{
			.cfg			  = 0x00001800,
			.image_addr		  = 0x00001804,
			.frame_incr		  = 0x00001808,
			.image_cfg_0		  = 0x0000180C,
			.image_cfg_1		  = 0x00001810,
			.image_cfg_2		  = 0x00001814,
			.packer_cfg		  = 0x00001818,
			.frame_header_addr	  = 0x00001820,
			.frame_header_incr	  = 0x00001824,
			.frame_header_cfg	  = 0x00001828,
			.irq_subsample_period	  = 0x00001830,
			.irq_subsample_pattern	  = 0x00001834,
			.framedrop_period	  = 0x00001838,
			.framedrop_pattern	  = 0x0000183C,
			.mmu_prefetch_cfg	  = 0x00001860,
			.mmu_prefetch_max_offset  = 0x00001864,
			.system_cache_cfg	  = 0x00001868,
			.addr_status_0		  = 0x00001870,
			.addr_status_1		  = 0x00001874,
			.addr_status_2		  = 0x00001878,
			.addr_status_3		  = 0x0000187C,
			.debug_status_cfg	  = 0x00001880,
			.debug_status_0		  = 0x00001884,
			.debug_status_1		  = 0x00001888,
			.comp_group		  = CAM_VFE_BUS_VER3_COMP_GRP_0,
			.ubwc_regs		  = NULL,
		},
		/* BUS Client 5 Stats BE */
		{
			.cfg			  = 0x00001900,
			.image_addr		  = 0x00001904,
			.frame_incr		  = 0x00001908,
			.image_cfg_0		  = 0x0000190C,
			.image_cfg_1		  = 0x00001910,
			.image_cfg_2		  = 0x00001914,
			.packer_cfg		  = 0x00001918,
			.frame_header_addr	  = 0x00001920,
			.frame_header_incr	  = 0x00001924,
			.frame_header_cfg	  = 0x00001928,
			.irq_subsample_period	  = 0x00001930,
			.irq_subsample_pattern	  = 0x00001934,
			.framedrop_period	  = 0x00001938,
			.framedrop_pattern	  = 0x0000193C,
			.mmu_prefetch_cfg	  = 0x00001960,
			.mmu_prefetch_max_offset  = 0x00001964,
			.system_cache_cfg	  = 0x00001968,
			.addr_status_0		  = 0x00001970,
			.addr_status_1		  = 0x00001974,
			.addr_status_2		  = 0x00001978,
			.addr_status_3		  = 0x0000197C,
			.debug_status_cfg	  = 0x00001980,
			.debug_status_0		  = 0x00001984,
			.debug_status_1		  = 0x00001988,
			.comp_group		  = CAM_VFE_BUS_VER3_COMP_GRP_0,
			.ubwc_regs		  = NULL,
		},
	},
	.num_out = 6,
	.vfe_out_hw_info = {
		{
			.vfe_out_type  = CAM_VFE_BUS_VER3_VFE_OUT_RDI0,
			.max_width     = -1,
			.max_height    = -1,
			.source_group  = CAM_VFE_BUS_VER3_SRC_GRP_1,
			.num_wm        = 1,
			.wm_idx        = {
				0,
			},
		},
		{
			.vfe_out_type  = CAM_VFE_BUS_VER3_VFE_OUT_RDI1,
			.max_width     = -1,
			.max_height    = -1,
			.source_group  = CAM_VFE_BUS_VER3_SRC_GRP_2,
			.num_wm        = 1,
			.wm_idx        = {
				1,
			},
		},
		{
			.vfe_out_type  = CAM_VFE_BUS_VER3_VFE_OUT_RDI2,
			.max_width     = -1,
			.max_height    = -1,
			.source_group  = CAM_VFE_BUS_VER3_SRC_GRP_3,
			.num_wm        = 1,
			.wm_idx        = {
				2,
			},
		},
		{
			.vfe_out_type  = CAM_VFE_BUS_VER3_VFE_OUT_RDI3,
			.max_width     = -1,
			.max_height    = -1,
			.source_group  = CAM_VFE_BUS_VER3_SRC_GRP_4,
			.num_wm        = 1,
			.wm_idx        = {
				3,
			},
		},
		{
			.vfe_out_type  =
				CAM_VFE_BUS_VER3_VFE_OUT_GAMMA,
			.max_width     = 1920,
			.max_height    = 1080,
			.source_group  = CAM_VFE_BUS_VER3_SRC_GRP_0,
			.num_wm        = 1,
			.wm_idx        = {
				4,
			},
		},
		{
			.vfe_out_type  = CAM_VFE_BUS_VER3_VFE_OUT_STATS_BE,
			.max_width     = -1,
			.max_height    = -1,
			.source_group  = CAM_VFE_BUS_VER3_SRC_GRP_0,
			.num_wm        = 1,
			.wm_idx        = {
				5,
			},
		},
	},
	.num_comp_grp    = 4,
	.comp_done_shift = 0,
	.top_irq_shift   = 1,
	.max_out_res = CAM_ISP_IFE_OUT_RES_BASE + 33,
};

static struct cam_vfe_irq_hw_info vfe68x_irq_hw_info = {
	.reset_mask    = 0,
	.supported_irq = CAM_VFE_HW_IRQ_CAP_LITE_EXT_CSID,
	.top_irq_reg   = &vfe68x_top_irq_reg_info,
};

static struct cam_vfe_hw_info cam_vfe_lite68x_hw_info = {
	.irq_hw_info                   = &vfe68x_irq_hw_info,

	.bus_version                   = CAM_VFE_BUS_VER_3_0,
	.bus_hw_info                   = &vfe680x_bus_hw_info,

	.top_version                   = CAM_VFE_TOP_VER_4_0,
	.top_hw_info                   = &vfe68x_top_hw_info,
};

#endif /* _CAM_VFE_LITE68X_H_ */
