#include "shell.h"

/**
 * size_realloc- This Function checks for memory.
 * @pointer_link: This is the link to the node.
 * @old: int param.
 * @new: int param.
 * Return: pointer if (success)
 */
void *size_realloc(void *pointer_link, unsigned int old, unsigned int new)
{
    char *h;

    if (!pointer_link)
        return (malloc(new));
    if (!new)
        return (free(pointer_link), NULL);
    if (new == old)
        return (pointer_link);
    h = malloc(new);
    if (!h)
        return (NULL);
    old = old < new ? old : new;
    while (old--)
        h[old] = ((char *)pointer_link)[old];
    free(pointer_link);
    return (h);
}
