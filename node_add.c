#include "shell.h"

/**
 * node_add_beg- This is the Function for ading the node.
 * @link: This is the pointer to node.
 * @name_string: the string.
 * @my_Number:The iterator
 * Return: 0
 */
string *node_add_beg(string **link, const char *name_string, int my_Number)
{
    string *new_head;

    if (!link)
        return (NULL);
    new_head = malloc(sizeof(string));
    if (!new_head)
        return (NULL);
    set_the((void *)new_head, 0, sizeof(string));
    new_head->my_Number = my_Number;
    if (name_string)
    {
        new_head->name_string = _strdup(name_string);
        if (!new_head->name_string)
        {
            free(new_head);
            return (NULL);
        }
    }
    new_head->head = *link;
    *link = new_head;
    return (new_head);
}

