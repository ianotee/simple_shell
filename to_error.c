#include "shell.h"

/**
 *error_handler - This pointer catches an error.
 * @name_string: The pointer
 * @m: int param
 * Return: character if (success)
 */
int  error_handler(char *name_string, int m)
{
    int i = 0;

    if (!name_string)
        return (0);
    while (*name_string)
    {
        i += the_puts_error(*name_string++, m);
    }
    return (i);
}
