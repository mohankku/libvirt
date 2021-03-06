/*
 * lock_driver_nop.h: A lock driver which locks nothing
 *
 * Copyright (C) 2010-2011 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library;  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __VIR_LOCK_DRIVER_NOP_H__
# define __VIR_LOCK_DRIVER_NOP_H__

# include "lock_driver.h"

extern virLockDriver virLockDriverNop;


#endif /* __VIR_LOCK_DRIVER_NOP_H__ */
