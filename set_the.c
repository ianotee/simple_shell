#include "shell.h"

/**
 *set_the- This function fills the mem.
 *@z:  char param.
 *@q: Char param.
 *@w: integer param
 *Return: z
 */
char *set_the(char *z, char q, unsigned int w)
{
    unsigned int i;

    for (i = 0; i < w; i++)
        z[i] = q;
    return (z);
}
