#ifndef SANCUS_SUPPORT_SPM_CONTROL_H
#define SANCUS_SUPPORT_SPM_CONTROL_H

#include <sancus/sm_support.h>

struct ElfModule;

void sm_load(void);
void sm_call(void);
void sm_print_identity(void);
int sm_register_existing(struct SancusModule* sm);
struct SancusModule* sm_get_by_id(sm_id id);
struct ElfModule* sm_get_elf_by_id(sm_id id);

#endif
