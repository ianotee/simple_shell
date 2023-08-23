#include "shell.h"

/**
 * print_func - Function for decimals.
 * @input: int param
 * @m: int param.
 * Return: 
 */
int print_func(int input, int m)
{
    int (*__putchar)(char) = _eputchar;
    int i, count = 0;
    unsigned int _dosa, corn;

    if (m == STDERR_FILENO)
        __putchar = _print_line;
    if (input < 0)
    {
        _dosa = -input;
        __putchar('-');
        count++;
    }
    else
        _dosa = input;
    corn = _dosa;
    for (i = 1000000000; i > 1; i /= 10)
    {
        if (_dosa / i)
        {
            __putchar('0' + corn / i);
            count++;
        }
        corn %= i;
    }
    __putchar('0' + corn);
    count++;
    return (count);
}
