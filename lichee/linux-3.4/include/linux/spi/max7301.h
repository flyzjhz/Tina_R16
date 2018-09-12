/*
 * include/linux/spi/max7301.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef LINUX_SPI_MAX7301_H
#define LINUX_SPI_MAX7301_H

#include <linux/gpio.h>

/*
 * Some registers must be read back to modify.
 * To save time we cache them here in memory
 */
struct max7301 {
	struct mutex	lock;
	u8		port_config[8];	/* field 0 is unused */
	u32		out_level;	/* cached output levels */
	u32		input_pullup_active;
	struct gpio_chip chip;
	struct device *dev;
	int (*write)(struct device *dev, unsigned int reg, unsigned int val);
	int (*read)(struct device *dev, unsigned int reg);
};

struct max7301_platform_data {
	/* number assigned to the first GPIO */
	unsigned	base;
	/*
	 * bitmask controlling the pullup configuration,
	 *
	 * _note_ the 4 lowest bits are unused, because the first 4
	 * ports of the controller are not used, too.
	 */
	u32		input_pullup_active;
};

extern int __max730x_remove(struct device *dev);
extern int __max730x_probe(struct max7301 *ts);
#endif