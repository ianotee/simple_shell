#include "shell.h"

/**
 * The_chain - test if current char.
 * @run: parameter struct
 * @buffer:  charset buffer
 * @h: address of current position in buffer
 * Return: 1 if chain 
 */
int The_chain(phoe_x *run, char *buffer, size_t *h)
{
    size_t j = *h;

    if (buffer[j] == '|' && buffer[j + 1] == '|')
    {
        buffer[j] = 0;
        j++;
        run->command_type = NAME_OR;
    }
    else if (buffer[j] == '&' && buffer[j + 1] == '&')
    {
        buffer[j] = 0;
        j++;
        run->command_type = NAME_AND;
    }
    else if (buffer[j] == ';') 
    {
        buffer[j] = 0; 
        run->command_type = NAME_CHAIN;
    }
    else
        return (0);
    *h = j;
    return (1);
}

