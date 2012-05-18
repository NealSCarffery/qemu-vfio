/*
 *  ioapic.c IOAPIC emulation logic
 *
 *  Copyright (c) 2011 Jan Kiszka, Siemens AG
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HW_IOAPIC_H
#define HW_IOAPIC_H

#include <stdint.h>
#include "notify.h"

#define IOAPIC_NUM_PINS 24

void ioapic_eoi_broadcast(int vector);
void ioapic_add_gsi_eoi_notifier(Notifier *notify, uint32_t gsi);
void ioapic_remove_gsi_eoi_notifier(Notifier *notify, uint32_t gsi);

#endif /* !HW_IOAPIC_H */
