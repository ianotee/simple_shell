#include "shell.h"

/**
 * _strdup -  This function replicates.
 * @name_string: This Function takes care of the string structure.
 * Return: pointer.
 */
char *_strdup(const char *name_string)
{
    int length = 0;
    char *root;

    if (name_string == NULL)
        return (NULL);
    while (*name_string++)
        length++;
    root = malloc(sizeof(char) * (length + 1));
    if (!root)
        return (NULL);
    for (length++; length--;)
        root[length] = *--name_string;
    return (root);
}
