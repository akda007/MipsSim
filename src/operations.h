#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "defs.h"

#include <stdio.h>

void add(Mips_T * cpu, int reg0, int reg1, int reg2) {
    REG(cpu, reg0) = REG(cpu, reg1) + REG(cpu, reg2);
}

void addi(Mips_T * cpu, int reg0, int reg1, int value) {
    REG(cpu, reg0) = REG(cpu, reg1) + value;
}

void sub(Mips_T * cpu, int reg0, int reg1, int reg2) {
    REG(cpu, reg0) = REG(cpu, reg1) + REG(cpu, reg2);
}

void lw(Mips_T * cpu, int reg0, int mem) {
    REG(cpu, reg0) = cpu->memory[mem];
}

void sw(Mips_T * cpu, int reg0, int mem) {
    cpu->memory[mem] = REG(cpu, reg0);
}

#endif