#include "shell.h"
/**
 * add_node_at_end - Thisfunction is used to add the node.
 * @link: The Pointer structure
 * @name_string: The string.
 * @my_Number:  the Iterattor.
 * Return: 0.
 */
string *add_node_at_end(string **link, const char *name_string, int my_Number)
{
    string *new_node, *nat;

    if (!link)
        return (NULL);
    nat = *link;
    new_node = malloc(sizeof(string));
    if (!new_node)
        return (NULL);
    set_the((void *)new_node, 0, sizeof(string));
    new_node->my_Number = my_Number;
    if (name_string)
    {
        new_node->name_string = _strdup(name_string);
        if (!new_node->name_string)
        {
            free(new_node);
            return (NULL);
        }
    }
    if (nat)
    {
        while (nat->head)
            nat = nat->head;
        nat->head = new_node;
    }
    else
        *link= new_node;
    return (new_node);
}

