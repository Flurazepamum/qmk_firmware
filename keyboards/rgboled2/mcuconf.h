// Copyright 2018-2022 flura
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include_next <mcuconf.h>


// Used for EEPROM
#undef RP_SPI_USE_SPI0
#define RP_SPI_USE_SPI0 TRUE
