#include "shell.h"

/**
 *aturu:Changes string to integer.
 *@z:character param.
 *Return: zero if success.
 */

int aturu(char *z)
{
    int n, sign = 1, flaggs = 0, output;
    unsigned int result = 0;

    for (n = 0; z[n] != '\0' && flaggs != 2; n++)
    {
        if (z[n] == '-')
            sign *= -1;
        if (z[n] >= '0' && z[n] <= '9')
        {
            flaggs = 1;
            result *= 10;
            result += (z[n] - '0');
        }
        else if (flaggs == 1)
        {
            flaggs = 2;
        }
    }

    output = (sign == -1) ? -result : result;
    return output;
}

