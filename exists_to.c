#include "shell.h"

/**
 **_strncpy - duplicates the string.
 *@move: file url.
 *@own: The files  source.
 *@w: the integer.
 *Return: the cat.
 */
char *_strncpy(char *move, char *own, int w)
{
    int i, k;
    char *z = move;

    i = 0;
    while (own[i] != '\0' && i < w - 1)
    {
        move[i] = own[i];
        i++;
    }
    if (i < w)
    {
        k = i;
        while (k < w)
        {
            move[k] = '\0';
            k++;
        }
    }
    return (z);
}

