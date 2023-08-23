#include "shell.h"

/**
 *deliver:It checks the end of a character.
 *@c:character param.
 *@deliv: Checks the character.
 *Return: success else zero.
 */
int deliver(char c, char *deliv)
{
    while (*deliv)
        if (*deliv++ == c)
            return (1);
    return (0);
}
