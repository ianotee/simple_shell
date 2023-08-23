#include "shell.h"

/**
 * _strlen - The catenates.
 * @z: char param.
 * Return: length
 */
int _strlen(char *z)
{
    int i = 0;

    if (!z)
        return (0);
    while (*z++)
        i++;
    return (i);
}
