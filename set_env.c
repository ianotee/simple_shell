#include "shell.h"

/**
 * set_env - starts the environment.
 * @run: struct pointer.
 * @var: character param.
 * @value:  character param.
 *  Return: 0 if (success).
 */
int set_env(phoe_x *run, char *var, char *value)
{
    char *buffer = NULL;
     string *nat;
    char *h;

    if (!var || !value)
        return (0);
    buffer = malloc(_strlen(var) + _strlen(value) + 2);
    if (!buffer)
        return (1);
    copy_the_string(buffer, var);
    string_catenation(buffer, "=");
   string_catenation(buffer, value);
    nat = run->viro;
    while (nat)
    {
        h = starts_env(nat->name_string, var);
        if (h && *h == '=')
        {
            free(nat->name_string);
            nat->name_string = buffer;
            run->changed = 1;
            return (0);
        }
        nat = nat->head;
    }
    add_node_at_end(&(run->viro), buffer, 0);
    free(buffer);
    run->changed = 1;
    return (0);
}
