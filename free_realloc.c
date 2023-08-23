#include "shell.h"
/**
 * ffree - This function changes the string.
 * @pp:Pointer.
 */
void ffree(char **pp)
{
    char **a = pp;

    if (!pp)
        return;
    while (*pp)
        free(*pp++);
    free(a);
}

