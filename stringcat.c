#include "shell.h"

/**
 * string_catenation - concatenates.
 * @move: url
 * @own: char param.
 * Return: pointer.
 */
char *string_catenation(char *move, char *own)
{
    char *root = move;

    while (*move)
            move++;
    while (*own)
        *move++ = *own++;
    *move = *own;
    return (root);
}
