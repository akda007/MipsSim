#ifndef DEFS_H
#define DEFS_H

#include <stdint.h>

#define ZERO 0
#define PC 31
#define SP 30

#define REG(c, x) c->registers[x]

typedef struct Mips {
    float registers[32];
    uint32_t memory[8192];
    uint8_t ram[8192];
} Mips_T;

#endif
