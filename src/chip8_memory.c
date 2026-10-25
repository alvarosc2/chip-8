#include "chip8_memory.h"
#include <stdbool.h>
#include <stdlib.h>

bool chip8_is_memory_in_bounds(int index)
{
    if (index >= 0 && index < CHIP8_MEMORY_SIZE)
    {
        // We are ok
        return true;
    }
    else
    {
        return false;
    }
}

bool chip8_memory_set(struct chip8_memory *memory, int index, unsigned char val)
{
    if (memory == NULL || !chip8_is_memory_in_bounds(index))
    {
        return false;
    }

    memory->memory[index] = val;
    return true;
}

bool chip8_memory_get(struct chip8_memory *memory, int index, unsigned char *value)
{
    if (memory == NULL || value == NULL ||
        !chip8_is_memory_in_bounds(index))
    {
        return false;
    }

    *value = (unsigned char)memory->memory[index];
    return true;
}