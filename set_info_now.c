#include "shell.h"

/**
 * set_info_now - The function that stores the information.
 * @run: Struct Function.
 * @not: The Pointer.
 */
void set_info_now(phoe_x *run, char **not)
{
    int i = 0;

    run->first_Name = not[0];
    if (run->argument)
    {
        run->argumentvector = strtype(run->argument, " \t");
        if (!run->argumentvector)
        {
            run->argumentvector = malloc(sizeof(char *) * 2);
            if (run->argumentvector)
            {
                run->argumentvector[0] = _strdup(run->argument);
                run->argumentvector[1] = NULL;
            }
        }
        for (i = 0; run->argumentvector && run->argumentvector[i]; i++)
            ;
        run->arg_counter = i;
        replace(run);
        replace_now(run);
    }
}
