#include "shell.h"

/**
 * no_environ- returns an array.
 * @run: Structure pointer.
 * Return: Always 0
 */
char **no_environ(phoe_x *run)
{
    if (!run->environ || run->changed)
    {
        run->environ = string_list2(run->viro);
         run->changed = 0;
    }
    return (run->environ);
}

