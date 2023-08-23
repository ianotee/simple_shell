#include "shell.h"

/**
 * the_no_alias - This Function acts as the man page.
 * @run: struct pointer.
 *  Return: 0 if (success)
 */
int the_no_alias(phoe_x *run)
{
	int i = 0;
	char *h = NULL;

	string *nat = NULL;

	if (run->arg_counter == 1)
	{
		nat = run->all;
		while (nat)
		{
            print_the_at_alias(nat);
            nat = nat->head;
		}
		return (0);
	}
    for (i = 1; run->argumentvector[i]; i++)
    {
		h =string_locate(run->argumentvector[i], '=');
		if (h)
            start_set_alias(run, run->argumentvector[i]);
        else
            print_the_at_alias(node_starts(run->all, run->argumentvector[i], '='));
    }
	return (0);
}
