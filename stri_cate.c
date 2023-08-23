#include "shell.h"
/**
 **_strn_cat - The cats the string.
 *@move: The url
 *@own: the target resource
 *@w: the int param
 *Return: 0
 */
char *strn_cat(char *move, char *own, int w)
{
    int i, k;
    char *z = move;

    i = 0;
    k = 0;
    while (move[i] != '\0')
        i++;
    while (own[k] != '\0' && k < w)
    {
        move[i] = own[k];
        i++;
        k++;
    }
    if (k < w)
        move[i] = '\0';
    return (z);
}
