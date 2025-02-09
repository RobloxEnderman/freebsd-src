/*-
 * Copyright (c) 2022, Netflix, Inc.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#ifndef KBOOT_H
#define KBOOT_H

#define DEVT_HOSTDISK 1234

void do_init(void);

extern const char *hostfs_root;

/* Per-platform fdt fixup */
void fdt_arch_fixups(void *fdtp);

uint64_t kboot_get_phys_load_segment(void);
uint8_t kboot_get_kernel_machine_bits(void);

/* util.c */
bool file2str(const char *fn, char *buffer, size_t buflen);
bool file2u64(const char *fn, uint64_t *val);

#endif /* KBOOT_H */
