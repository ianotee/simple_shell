#include "shell.h"

/**
 * hsh - main 
 * @run: pointer.
 * @not: the argv.
 * Return: 0 if(success)
 */
int hsh(phoe_x *run, char **not)
{
    ssize_t r = 0;
    int builtin = 0;

    while (r != -1 && builtin != -2)
    {
        clear_info_at(run);
        if (receive(run))
            _eputs("$ ");
        _print_line(BUF_CLEANSE);
        r = get_input_all_func(run);
        if (r != -1)
        {
            set_info_now(run, not );
            builtin = find_builtin(run);
            if (builtin == -1)
                locate_cmd(run);
        }
        else if (receive(run))
            _eputchar('\n');
        info_free_on(run, 0);
    }
    history_write(run);
    info_free_on(run, 1);
    if (!receive(run) && run->station)
        exit(run->station);
    if (builtin == -2)
    {
        if (run->error == -1)
            exit(run->station);
        exit(run->error);
    }
    return (builtin);
}
