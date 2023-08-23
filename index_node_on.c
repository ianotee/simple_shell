#include "shell.h"

/**
 * get_node - The node.
 * @link:  Struct Pointer to the node.
 * @nat: The pointer.
 * Return: 0 if (success)
 */
ssize_t get_node(string *link, string *nat)
{
    size_t i = 0;

    while (link)
    {
        if (link == nat)
            return (i);
        link = link->head;
        i++;
    }
    return (-1);
}

