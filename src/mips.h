#ifndef MIPS_H
#define MIPS_H

#include "defs.h"
#include "operations.h"


void inc_PC(Mips_T * cpu) {
    REG(cpu, PC) += 4;
}

void jump_operation(Mips_T *cpu, uint32_t op) {
    
}

void imediate_operation(Mips_T *cpu, uint32_t op) {
    uint8_t opcode, rs, rt;
    uint16_t i_addres;

    opcode = (op >> 26) & 0x3F;

    rs = (op >> 21) & 0x1F;
    rt = (op >> 16) & 0x1F;
    i_addres = op & 0xFFFF;

}

void arithmetic_operation(Mips_T *cpu, uint32_t operation) {
    uint8_t opcode,r0,r1,r2,shift,func;
    
    opcode = (operation >> 26) & 0x3F;
    r1 = (operation >> 21) & 0x1F;
    r2 = (operation >> 16) & 0x1F;
    r0 = (operation >> 11) & 0x1F;
    shift = (operation >> 6) & 0x1F;
    func = operation & 0x3F;

    if (opcode == 0x10) {
        //mfc0
    }


}

void instruction_processing(Mips_T * cpu, uint32_t op) {
    uint8_t opcode;

    opcode = (op >> 26) & 0x3F;

    switch (opcode)
    {
    case 0x0: //R
    case 0x10:
        arithmetic_operation(cpu, op);
        break;
    
    //J
    case 0x2:
    case 0x3:
        jump_operation(cpu, op);
        break;

    //I    
    default:

        break;
    }
}

void instruction_search(Mips_T * cpu) {
    int operation = REG(cpu, PC);

    //Process operation
    instruction_processing(operation);

    //Increment PC by 4
    inc_PC(cpu);
}

#endif