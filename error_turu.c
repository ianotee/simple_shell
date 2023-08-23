#include "shell.h"

/**
 *Num_error - Converts the error.
 * @z:  Pointer to character.
 * Return: 0 if(success)
 */
int Num_error(char *z)
{
    int i = 0;
    unsigned long int result = 0;

    if (*z == '+')
        z++; 
    for (i = 0; z[i] != '\0'; i++)
    {
        if (z[i] >= '0' && z[i] <= '9')
        {
            result *= 10;
            result += (z[i] - '0');
            if (result > INT_MAX)
                return (-1);
        }
        else
            return (-1);
    }
    return (result);
}

