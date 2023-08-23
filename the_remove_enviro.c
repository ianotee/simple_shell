#include "shell.h"

/**
 * remove_the_set_env- This function removes the environment
 * @run:pointer
 *  Return: Always 0
 */
int  remove_the_set_env(phoe_x *run)
{
    int i;

    if (run->arg_counter == 1)
    {
        _dos("There are very few  arguements that is left.\n");
        return (1);
    }
    for (i = 1; i <= run->arg_counter; i++)
        un_getenv(run, run->argumentvector[i]);
    return (0);
}
