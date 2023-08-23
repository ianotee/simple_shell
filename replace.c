#include "shell.h"

/**
*replace -  The function that replaces data.
 * @run:  The struct Pointer.
 * Return: 1.
 */
int replace(phoe_x *run)
{
    int i;
    string  *nat;
    char *h;

    for (i = 0; i < 10; i++)
    {
        nat= node_starts(run->all, run->argumentvector[0], '=');
        if (!nat)
            return (0);
        free(run->argumentvector[0]);
        h = string_locate(nat->name_string, '=');
        if (!h)
            return (0);
        h = _strdup(h + 1);
        if (!h)
            return (0);
        run->argumentvector[0] = h;
    }
    return (1);
}
