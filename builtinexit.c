#include "shell.h"

/**
 * exit_terminal - This Function will exit the shell.
 * @run: This is a pointer to a structure.
 *  Return: exit.
 */
int exit_terminal(phoe_x *run)
{
    int exit;

    if (run->argumentvector[1])
    {
        exit = Num_error(run->argumentvector[1]);
        if (exit == -1)
        {
            run->station = 2;
            print(run, "unknown number: ");
            _dos(run->argumentvector[1]);
            _print_line('\n');
            return (1);
        }
        run->error = Num_error(run->argumentvector[1]);
        return (-2);
    }
    run->error = -1;
    return (-2);
}

