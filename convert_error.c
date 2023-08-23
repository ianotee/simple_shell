#include "shell.h"

/**
 * convert_error_no - This  Function duplicates the rule.
 * @my_number: int parameter.
 * @boseline: integer parameter
 * @flags: integer params
 * Return: The character.
 */
char *convert_error_no(long int my_Number, int boseline, int flags)
{
    static char *array_num;
    static char buffer[50];
    char sun = 0;
    char *pointer_link;
    unsigned long n = my_Number;

    if (!(flags & UNSIGNED) && my_Number< 0)
    {
        n = -my_Number;
        sun = '-';
    }
    array_num = flags & IN_LOWER ? "0123456789abcdef" : "0123456789ABCDEF";
    pointer_link = &buffer[49];
    *pointer_link = '\0';
    do
    {
        *--pointer_link = array_num[n % boseline];
        n /= boseline;
    } while (n != 0);
    if (sun)
        *--pointer_link = sun;
    return (pointer_link);
}

