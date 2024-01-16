#ifndef __GB_CPU__
#define __GB_CPU__

#include <stdint.h>
#include "mem.h"


typedef uint8_t reg8;
typedef uint16_t reg16;

#define HB (1) // HIGHT_BYTE
#define LB (0) // LOW_BYTE

#define FLAG_Z (1 << 7) // ZERFO FLAG
#define FLAG_N (1 << 6) // SUBTRACT FALG
#define FLAG_H (1 << 5) // HALF CARRY FLAG
#define FLAG_C (1 << 4) // CARRY FALG



typedef struct {
    uint8_t memmap[0xFFFF];
    
    reg8 AF[2];
    reg8 BC[2];
    reg8 DE[2];
    reg8 HL[2];
    reg16 SP;
    reg16 PC;
    
} gd_cpu_instance_t;

void gb_cpu_init();
void cpu_step(gd_cpu_instance_t *cpu);

// instruction
// load  
void LD8(reg8 *reg, uint8_t n);
void LD16(reg8 *reg, uint16_t n);




#endif
