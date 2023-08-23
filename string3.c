#include "shell.h"

/**
 * copy_the_string - duplicates the string.
 * @move: file url.
 * @own: file source.
 * Return: pointer to url 
 */
char *copy_the_string(char *move, char *own)
{
    int i = 0;

    if (move == own || own == 0)
        return (move);
    while (own[i])
    {
        move[i] = own[i];
        i++;
    }
    move[i] = 0;
    return (move);
}
