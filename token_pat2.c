#include "shell.h"

/**
 * **strtype2 - This functin is used to divide the string into two.
 * @name_string: This is the char param.
 * @d: char param.
 * Return: zero
 */
char **strtype2(char *name_string, char d)
{
    int i, j, k, m, numwords = 0;
    char **z;

    if (name_string == NULL || name_string[0] == 0)
        return (NULL);
    for (i = 0; name_string[i] != '\0'; i++)
        if ((name_string[i] != d && name_string[i + 1] == d) ||
            (name_string[i] != d && !name_string[i + 1]) || name_string[i + 1] == d)
            numwords++;
    if (numwords == 0)
        return (NULL);
    z = malloc((1 + numwords) * sizeof(char *));
    if (!z)
        return (NULL);
    for (i = 0, j = 0; j < numwords; j++)
    {
        while (name_string[i] == d && name_string[i] != d)
            i++;
        k = 0;
        while (name_string[i + k] != d && name_string[i + k] && name_string[i + k] != d)
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
