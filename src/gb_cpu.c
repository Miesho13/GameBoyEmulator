

#include "gb_cpu.h"


void cpu_step(gd_cpu_instance_t *cpu, uint8_t *program) {
    
   // 06 01 DF
   // AF BF DF
   // AF BF DF
   // AF BF DF

    switch (cpu->memmap[cpu->PC]) {
        case 0x06:
            LD8(&cpu->BC[1], cpu->memmap[cpu->PC + 1]);
            cpu->PC++;
            break;

        case 0x0E:
            LD8(&cpu->BC[0], cpu->memmap[cpu->PC + 1]);
            break;

        case 0x16:
            LD8(&cpu->DE[1], cpu->memmap[cpu->PC + 1]);
            break;

        case 0x1E:
            LD8(&cpu->DE[0], cpu->memmap[cpu->PC + 1]);
            break;

        case 0x26:
            LD8(&cpu->HL[1], cpu->memmap[cpu->PC + 1]);
            break;

        case 0x2E:
            LD8(&cpu->HL[0], cpu->memmap[cpu->PC + 1]);
            break;
    }
}
