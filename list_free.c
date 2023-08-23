#include "shell.h"

/**
 *list_free - This Function frees.
 * @head_ptr: The Pointer
 * Return: 0  if (success)
 */
void list_free(string **head_ptr)
{
    string *nat, *next_node, *link;

    if (!head_ptr || !*head_ptr)
        return;
    link = *head_ptr;
    nat = link;
    while (nat)
    {
        next_node = nat->head;
        free(nat->name_string);
        free(nat);
        nat = next_node;
    }
    *head_ptr = NULL;
}

