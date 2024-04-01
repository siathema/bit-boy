#ifndef _SM83_CORE_H_
#define _SM83_CORE_H_

#include "utils.h"

typedef struct {
  u8 F_reg;
  u8 A_reg;
  u8 B_reg;
  u8 C_reg;
  u8 D_reg;
  u8 E_reg;
  u8 H_reg;
  u8 L_reg;

  u16 PC_reg;
  u16 SP_reg;

  u64 M_cycles;
  u64 C_cycles;

  u8 I_Reg;
}SM83_core;

void fetch(SM83_core* core);

void core_init(SM83_core* core);

void core_run(SM83_core* core);

void core_tick(SM83_core* core);

#endif
