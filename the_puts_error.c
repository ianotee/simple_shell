#include "shell.h"

/**
 * the_puts_error - Displays the string.
 * @y: char param.
 * @m: int param.
 * Return: 1 if (success)
 */
int  the_puts_error(char y, int m)
{
    static int i;
    static char buffer[NOT_BUF_SIZE];

    if (y == BUF_CLEANSE || i >= NOT_BUF_SIZE)
    {
        write(m, buffer, i);
        i = 0;
    }
    if (y != BUF_CLEANSE)
        buffer[i++] = y;
    return (1);
}

