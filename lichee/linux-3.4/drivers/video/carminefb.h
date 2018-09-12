/*
 * drivers/video/carminefb.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef CARMINE_CARMINE_H
#define CARMINE_CARMINE_H

#define CARMINE_MEMORY_BAR	2
#define CARMINE_CONFIG_BAR	3

#define MAX_DISPLAY	2
#define CARMINE_DISPLAY_MEM	(800 * 600 * 4)
#define CARMINE_TOTAL_DIPLAY_MEM	(CARMINE_DISPLAY_MEM * MAX_DISPLAY)

#define CARMINE_USE_DISPLAY0	(1 << 0)
#define CARMINE_USE_DISPLAY1	(1 << 1)

/*
 * This values work on the eval card. Custom boards may use different timings,
 * here an example :)
 */

/* DRAM initialization values */
#ifdef CONFIG_FB_CARMINE_DRAM_EVAL

#define CARMINE_DFLT_IP_CLOCK_ENABLE		(0x03ff)
#define CARMINE_DFLT_IP_DCTL_ADD		(0x05c3)
#define CARMINE_DFLT_IP_DCTL_MODE		(0x0121)
#define CARMINE_DFLT_IP_DCTL_EMODE		(0x8000)
#define CARMINE_DFLT_IP_DCTL_SET_TIME1		(0x4749)
#define CARMINE_DFLT_IP_DCTL_SET_TIME2		(0x2a22)
#define CARMINE_DFLT_IP_DCTL_REFRESH		(0x0042)
#define CARMINE_DFLT_IP_DCTL_STATES		(0x0003)
#define CARMINE_DFLT_IP_DCTL_RESERVE0		(0x0020)
#define CARMINE_DFLT_IP_DCTL_FIFO_DEPTH		(0x000f)
#define CARMINE_DFLT_IP_DCTL_RESERVE2		(0x0000)
#define CARMINE_DFLT_IP_DCTL_DDRIF1		(0x6646)
#define CARMINE_DFLT_IP_DCTL_DDRIF2		(0x0055)
#define CARMINE_DFLT_IP_DCTL_MODE_AFT_RST	(0x0021)
#define CARMINE_DFLT_IP_DCTL_STATES_AFT_RST	(0x0002)
#define CARMINE_DFLT_IP_DCTL_IO_CONT0		(0x0555)
#define CARMINE_DFLT_IP_DCTL_IO_CONT1		(0x0555)
#define CARMINE_DCTL_DLL_RESET			(1)
#endif

#ifdef CONFIG_CARMINE_DRAM_CUSTOM

#define CARMINE_DFLT_IP_CLOCK_ENABLE		(0x03ff)
#define CARMINE_DFLT_IP_DCTL_ADD		(0x03b2)
#define CARMINE_DFLT_IP_DCTL_MODE		(0x0161)
#define CARMINE_DFLT_IP_DCTL_EMODE		(0x8000)
#define CARMINE_DFLT_IP_DCTL_SET_TIME1		(0x2628)
#define CARMINE_DFLT_IP_DCTL_SET_TIME2		(0x1a09)
#define CARMINE_DFLT_IP_DCTL_REFRESH		(0x00fe)
#define CARMINE_DFLT_IP_DCTL_STATES		(0x0003)
#define CARMINE_DFLT_IP_DCTL_RESERVE0		(0x0020)
#define CARMINE_DFLT_IP_DCTL_FIFO_DEPTH		(0x000f)
#define CARMINE_DFLT_IP_DCTL_RESERVE2		(0x0000)
#define CARMINE_DFLT_IP_DCTL_DDRIF1		(0x0646)
#define CARMINE_DFLT_IP_DCTL_DDRIF2		(0x55aa)
#define CARMINE_DFLT_IP_DCTL_MODE_AFT_RST	(0x0061)
#define CARMINE_DFLT_IP_DCTL_STATES_AFT_RST	(0x0002)
#define CARMINE_DFLT_IP_DCTL_IO_CONT0		(0x0555)
#define CARMINE_DFLT_IP_DCTL_IO_CONT1		(0x0555)
#define CARMINE_DCTL_DLL_RESET			(1)
#endif

#endif