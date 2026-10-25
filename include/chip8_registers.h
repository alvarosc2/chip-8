#ifndef CHIP8_REGISTERS_H
#define CHIP8_REGISTERS_H

#include "config.h"

struct chip8_registers
{
    // Chip-8 has 16 8-bit general purpose registers
    unsigned char V[CHIP8_TOTAL_DATA_REGISTERS];
};

#endif