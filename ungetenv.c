#include "shell.h"

/**
* un_getenv -This Function is used to remove the environment variable i the terminal
 * @run: struct pointer.
 * @var: The char param.
 *Return: 1 if (success)
 */
int un_getenv(phoe_x *run, char *var)
{
    string *nat = run->viro;
    size_t i = 0;
    char *h;

    if (!nat || !var)
        return (0);
    while (nat)
    {
        h = starts_env(nat->name_string, var);
        if (h && *h == '=')
        {
            run->changed = delete_node(&(run->viro), i);
            i = 0;
            nat = run->viro;
            continue;
        }
        nat = nat->head;
        i++;
    }
    return (run->changed);
}
