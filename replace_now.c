#include "shell.h"

/**
 * replace_now - replaces the  vars
 * @run: struct param.
 * Return: 1 if (sucess)
 */
int replace_now(phoe_x *run)
{
    int i = 0;

    string *nat;

    for (i = 0; run->argumentvector[i]; i++)
    {
        if (run->argumentvector[i][0] != '$' || !run->argumentvector[i][1])
            continue;
        if (!_strcmp(run->argumentvector[i], "$?"))
        {
            replace_string(&(run->argumentvector[i]),
                           _strdup(convert_error_no(run->station, 10, 0)));
            continue;
        }
        if (!_strcmp(run->argumentvector[i], "$$"))
        {
             replace_string(&(run->argumentvector[i]),
                           _strdup(convert_error_no(getpid(), 10, 0)));
            continue;
        }
        nat = node_starts(run->viro, &run->argumentvector[i][1], '=');
        if (nat)
        {
            replace_string(&(run->argumentvector[i]),
                    _strdup(string_locate(nat->name_string,  '=') + 1));
            continue;
        }
        replace_string(&run->argumentvector[i], _strdup(""));
    }
    return (0);
}
