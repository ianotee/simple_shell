#include "shell.h"

/**
 * delete_node - This function gets rid of the entire File.
 * @link: This is the node pointer.
 * @index: This takes the action.
 * Return: 1 if (succeess)
 */
int delete_node(string **link, unsigned int index)
{
    string *nat, *prev_node;
    unsigned int i = 0;

    if (!link || !*link)
        return (0);
    if (!index)
    {
        nat = *link;
        *link = (*link)->head;
        free(nat->name_string);
        free(nat);
        return (1);
    }
    nat = *link;
    while (nat)
    {
        if (i == index)
        {
            prev_node->head = nat->head;
            free(nat->name_string);
            free(nat);
            return (1);
        }
        i++;
        prev_node = nat;
        nat = nat->head;
    }
    return (0);
}

