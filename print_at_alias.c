#include "shell.h"

/**
 * print_the_at_alias - displays the string.
 * @nat: Pointer to the struct.
 * Return: 0
 */
int print_the_at_alias(string *nat)
{
    char *h = NULL, *b = NULL;

    if (nat)
    {
        h = string_locate(nat->name_string, '=');
        for (b = nat->name_string; b <= h; b++)
            _eputchar(*b);
        _eputchar('\'');
        _eputs(h + 1);
        _eputs("'\n");
        return (0);
    }
    return (1);
}
