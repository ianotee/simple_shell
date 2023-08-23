#include "shell.h"

/**
 * confirm_chain - This function links the program.
 * @run: The structure  Pointer.
 * @buffer: char parameter
 * @h:  the linker 
 * @i: the starting point
 * @len: the buffer size
 * Return: 0 if (success)
 */
void confirm_chain(phoe_x *run, char *buffer, size_t *h, size_t i, size_t len)
{
    size_t j = *h;

    if (run->command_type == NAME_AND)
    {
        if (run->station)
        {
            buffer[i] = 0;
            j = len;
        }
    }
    if (run->command_type == NAME_OR)
    {
        if (!run->station)
        {
            buffer[i] = 0;
            j = len;
        }
    }
    *h = j;
}

