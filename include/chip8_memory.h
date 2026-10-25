#ifndef CHIP8_MEMORY_H
#define CHIP8_MEMORY_H

#include "config.h"
#include <stdbool.h>

struct chip8_memory
{
    char memory[CHIP8_MEMORY_SIZE];
};

void chip8_is_memory_in_bounds(int index);
bool chip8_memory_set(struct chip8_memory *memory, int index, unsigned char val);
bool chip8_memory_get(struct chip8_memory *memory, int index, unsigned char *value);

#endif
