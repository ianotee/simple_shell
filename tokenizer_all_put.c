#include "shell.h"

/**
 * **strtype - splits a string into words.
 * @name_string: the string
 * @d: This is the del 
 * Return: a pointer.
 */
char **strtype(char *name_string, char *d)
{
    int i, j, k, m, numwords = 0;
    char **z;

    if (name_string == NULL || name_string[0] == 0)
        return (NULL);
    if (!d)
        d = " ";
    for (i = 0; name_string[i] != '\0'; i++)
        if (!deliver(name_string[i], d) && (deliver(name_string[i + 1], d) || !name_string[i + 1]))
            numwords++;
    if (numwords == 0)
        return (NULL);
    z = malloc((1 + numwords) * sizeof(char *));
    if (!z)
        return (NULL);
    for (i = 0, j = 0; j < numwords; j++)
    {
        while (deliver(name_string[i], d))
            i++;
        k = 0;
        while (!deliver(name_string[i + k], d) && name_string[i + k])
            k++;
        z[j] = malloc((k + 1) * sizeof(char));
        if (!z[j])
        {
            for (k = 0; k < j; k++)
                free(z[k]);
            free(z);
            return (NULL);
        }
        for (m = 0; m < k; m++)
            z[j][m] = name_string[i++];
        z[j][m] = 0;
    }
    z[j] = NULL;
    return (z);
}
