#include "shell.h"

/**
 * history_write - This Function creates or appends an existing file.
 * @phoe_x: struct param
 * @run: Struct Pointer.
 * Return: 1 on success, else -1
 */
int  history_write(phoe_x *run)
{
    ssize_t m;
    char *filename = get_history(run);

    string *nat = NULL;

    if (!filename)
        return (-1);
    m = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0644);
    free(filename);
    if (m == -1)
        return (-1);
    for (nat = run->hist_toll; nat; nat = nat->head)
    {
        error_handler(nat->name_string, m);
        the_puts_error('\n', m);
    }
    the_puts_error(BUF_CLEANSE, m);
    close(m);
    return (1);
}

