/*
 * Platform data for MAX98506
 *
 * Copyright 2013-2015 Maxim Integrated Products
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */

#ifndef __SOUND_MAX98506_PDATA_H__
#define __SOUND_MAX98506_PDATA_H__

#define MAX98506_I2C_ADDR	0x62
#define MAX98506_I2C_ADDR_S (MAX98506_I2C_ADDR >> 1)

/* MAX98506 volume step */
#define MAX98506_VSTEP_0		0
#define MAX98506_VSTEP_1		1
#define MAX98506_VSTEP_2		2
#define MAX98506_VSTEP_3		3
#define MAX98506_VSTEP_4		4
#define MAX98506_VSTEP_5		5
#define MAX98506_VSTEP_6		6
#define MAX98506_VSTEP_7		7
#define MAX98506_VSTEP_8		8
#define MAX98506_VSTEP_9		9
#define MAX98506_VSTEP_10		10
#define MAX98506_VSTEP_11		11
#define MAX98506_VSTEP_12		12
#define MAX98506_VSTEP_13		13
#define MAX98506_VSTEP_14		14
#define MAX98506_VSTEP_15		15
#define MAX98506_VSTEP_MAX		MAX98506_VSTEP_15

struct max98506_volume_step_info {
	int length;
	uint32_t vol_step;
	uint32_t adc_thres;
	uint32_t boost_step[MAX98506_VSTEP_MAX + 1];
	bool adc_status;
};

struct max98506_pc_active {
	u32 capture_active;
	u32 playback_active:1;
};

#define MAX98506_PINFO_SZ	6
struct max98506_pdata {
	int sysclk;
	u32 spk_gain;
	u32 vmon_slot;
	bool i2c_pull_up;
#ifdef USE_MAX98506_IRQ
	int irq;
#endif /* USE_MAX98506_IRQ */
	uint32_t pinfo[MAX98506_PINFO_SZ];
};

#endif /* __SOUND_MAX98506_PDATA_H__ */
