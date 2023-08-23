#include "shell.h"

/**
 *alph:Identifies alphabets.
 *@b: integer param.
 *Return:success if alphabetic.
 */

int alph(int b)
{
    if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
        return (1);
    else
        return (0);
}
