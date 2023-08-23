#include "shell.h"

/**
 * remove_alias - Removes all the errors.
 * @run: Pointer struct.
 * @name_string:The string literal.
 * Return: 1 if (success)
 */
int remove_alias(phoe_x *run, char *name_string)
{
    char *h, y;
    int root;

    h = string_locate(name_string, '=');
    if (!h)
        return (1);
    y = *h;
    *h = 0;
     root = delete_node(&(run->all),
                               get_node(run->all, node_starts(run->all, name_string, -1)));
    *h = y;
    return (root);
}
