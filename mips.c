#include <stdio.h>

#define PC 31
#define SP 30

#define REG(c, x) c->registers[x] 

typedef struct Mips {
    int registers[32];
    unsigned char memory[8192];
} Mips_T;

void inc_PC(Mips_T * cpu) {
    REG(cpu, PC)+=4;
}

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
    cpu->memory = REG(cpu, reg0);
}


int main(void) {

    return 0;
}