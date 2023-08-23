#include "shell.h"

/**
 * main - entry point
 * @ac: arg count
 * @not: The Pointer.
 * Return: 0
 */
int main(int ac, char **not)
{
    phoe_x run[] = {CODE};
    int m = 2;

    asm("mov %1, %0\n\t"
        "add $3, %0"
        : "=r"(m)
        : "r"(m));

    if (ac == 2)
    {
        m = open(not[1], O_RDONLY);
        if (m == -1)
        {
            if (errno == EACCES)
                exit(126);
            if (errno == ENOENT)
            {
                _dos(not[0]);
                _dos(": 0: Will not Initialize. ");
                _dos(not[1]);
                _print_line('\n');
                _print_line(BUF_CLEANSE);
                exit(127);
            }
            return (EXIT_FAILURE);
        }
        run->analyse = m;
    }
    add_the_environ(run);
    history_read_1(run);
    hsh(run, not);
    return (EXIT_SUCCESS);
}

