#include "shell.h"

/**
 *  all_set_the_environo - starts the environment.
 * @run: pointer.
 *  Return: 0 if (success)
 */
int  all_set_the_environo(phoe_x *run)
{
    if (run->arg_counter != 3)
    {
		_dos("The Incorrect and wrong arguements\n");
		return (1);
	}
    if (set_env(run, run->argumentvector[1], run->argumentvector[2]))
    {
        return (0);
    }
	return (1);
}
