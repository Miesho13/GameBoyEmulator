#ifndef __MEM__
#define __MEM__

#include <stdint.h>


#define MEM_MAP_BEGIN 0x0;


// MEMORY MAP
#define INTERRUPT_ENR (0xFFFF) 
#define INT_RAM       (0xFF80) 
#define IO_USABLE1    (0xFF4C) 
#define IO_PORT       (0xFF00) 
#define IO_USABLE0    (0xFEA0) 
#define SAM_0AM       (0xFE00) 
#define ECHO_8kB_RAM  (0xE000) 
#define INT_8kB_RAM   (0xC000) 
#define SW_RAM_BANK   (0xA000) 
#define VRAM          (0x8000) 
#define SW_ROM_BANK   (0x4000) // ROM ONLY 32kB 0000 - 7FFF
#define ROM_BANK      (0x0000) //  


#define ENTRY_POINT0 (0x0100) // code execution
#define ENTRY_POINT1 (0x0102)
#define ENTRY_POINT2 (0x0103)



#endif
