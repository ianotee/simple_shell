#include "shell.h"

/**
 * alfree - This function frees the memory.
 * @pointer_link: Pointer.
 * Return: 1 if (success)
 */
int alfree(void **pointer_link)
{
    if (pointer_link && *pointer_link)
    {
        free(*pointer_link);
        *pointer_link = NULL;
        return (1);
    }
    return (0);
}

