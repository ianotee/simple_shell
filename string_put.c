#include "shell.h"

/**
 *_eputs -  This  function displays the output.
 *@name_string:  It displays the character string.
 * Return: zero
 */
void _eputs(char *name_string)
{
    int i = 0;

    if (!name_string)
        return;
    while (name_string[i] != '\0')
    {
        _eputchar(name_string[i]);
        i++;
    }
}
