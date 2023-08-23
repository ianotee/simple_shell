#include "shell.h"

/**
 * node_starts - returns node whose string starts.
 * @nat: pointer.
 * @prefix: string to match
 * @y: next character.
 * Return: 1 if (success)
 */
string *node_starts(string *nat, char *prefix, char y)
{
    char *h = NULL;

    while (nat)
    {
        h = starts_env(nat->name_string, prefix);
        if (h && ((y == -1) || (*h == y)))
            return (nat);
        nat = nat->head;
    }
    return (NULL);
}
