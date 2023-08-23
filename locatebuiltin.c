#include "shell.h"

/**
 * find_builtin - Checks the Command.
 * @run: Sruct parameter.
Return: 0 if(success)
 */
int find_builtin(phoe_x *run)
{
    int i, built_in_ret = -1;

    mo_dat builtintbl[] = {
        {"exit", exit_terminal},
        {"env", the_envi_at},
        {"help", mybuiltinhelp},
        {"history", builtin_hist},
        {"setenv", all_set_the_environo},
        {"unsetenv", remove_the_set_env},
        {"cd", mybuiltincd},
        {"alias", the_no_alias},
        {NULL, NULL}};
    for (i = 0; builtintbl[i].name; i++)
        if (_strcmp(run->argumentvector[0], builtintbl[i].name) == 0)
        {
            run->Num_of_counts++;
            built_in_ret = builtintbl[i].mole(run);
            break;
        }
    return (built_in_ret);
}

