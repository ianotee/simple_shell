#include "shell.h"

/**
 * _strcmp - This Function checks on the size
 * @z1:  Checks the first size.
 * @z2:  This checks for the second size.
 * Return:negative.
 */
int _strcmp(char *z1, char *z2)
{
    while (*z1 && *z2)
    {
        if (*z1 != *z2)
            return (*z1 - *z2);
        z1++;
        z2++;
    }
    if (*z1 == *z2)
        return (0);
    else
        return (*z1 < *z2 ? -1 : 1);
}
