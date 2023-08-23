#include "shell.h"

/**
 * name_list1 - the list Function.
 * @f: The Pointer.
 * Return: 0
 */
size_t name_list1(const string *f)
{
    size_t i = 0;

    while (f)
    {
        f = f->head;
        i++;
    }
    return (i);
}

