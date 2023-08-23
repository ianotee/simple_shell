#include "shell.h"

/**
 * print_environ - lists all string.
 * @f: pointer.
 * Return: size
 */
size_t  print_environ(const string *f)
{
    size_t i = 0;

    while (f)
    {
        _eputs(f->name_string ? f->name_string : "(nil)");
        _eputs("\n");
        f = f->head;
        i++;
    }
    return (i);
}

