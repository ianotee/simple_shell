#include "shell.h"

/**
 * remove_com_error - The function Error.
 * @buffer:  Pointer address
 * Return:  0 if (success)
 */
void remove_com_error(char *buffer)
{
    int i;

    for (i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '#' && (!i || buffer[i - 1] == ' '))
        {
            buffer[i] = '\0';
            break;
        }
}
