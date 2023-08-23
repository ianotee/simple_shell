#include "shell.h"

/**
 * _eputchar - This Function prints the output.
 * @y:The char param.
 * Return: 1 if (success)
 */
int _eputchar(char y)
{
    static int i;
    static char buffer[NOT_BUF_SIZE];

    if (y == BUF_CLEANSE || i >= NOT_BUF_SIZE)
    {
        write(1, buffer, i);
        i = 0;
    }
    if (y != BUF_CLEANSE)
        buffer[i++] = y;
    return (1);
}
