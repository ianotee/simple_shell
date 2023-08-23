#include "shell.h"

/**
 * print_name - prints the elements
 * @f: pointer
 * Return: the size of the list
 */
size_t print_name(const string *f)
{
    size_t i = 0;

    while (f)
    {
        _eputs(convert_error_no(f->my_Number, 10, 0));
        _eputchar(':');
        _eputchar(' ');
        _eputs(f->name_string ? f->name_string : "(zero)");
        _eputs("\n");
        f = f->head;
        i++;
    }
    return (i);
}

