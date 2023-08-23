#include "shell.h"

/**
 * start_set_alias - Function that starts.
 * @run: struct param.
 * @name_string: the string alias
 * Return: if (success)
 */
int start_set_alias(phoe_x *run, char *name_string)
{
    char *h;

    h = string_locate(name_string, '=');
    if (!h)
        return (1);
    if (!*++h)
        return (remove_alias(run, name_string));
    remove_alias(run, name_string);
    return (add_node_at_end(&(run->all), name_string, 0) == NULL);
}
