#include <cstdint>

#ifndef _Z80_H_
#define _Z80_H_
class Z80 {

  uint8_t Accumulator_reg;
  uint8_t Flag_reg;
  uint8_t A_reg;
  uint8_t B_reg;
  uint8_t C_reg;
  uint8_t D_reg;
  uint8_t E_reg;
  uint8_t F_reg;
  uint8_t H_reg;
  uint8_t L_reg;

  uint8_t Interrupt_Vector_reg;
  uint8_t Memory_Refresh_reg;

  uint16_t PC_reg;
  uint16_t SP_reg;
  uint16_t IX, IY;


public:

};
#endif