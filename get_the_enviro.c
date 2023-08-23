#include "shell.h"

/**
 * the_environ_dat - This Function gets the data.
 * @run: Structure pointer.
 * @lin: The size.
 * Return: 0 if (success)
 */
char *the_environ_dat(phoe_x *run, const char *lin)
{
	string *nat = run->viro;
	char *h;

	while (nat)
	{
		h = starts_env(nat->name_string, lin);
		if (h && *h)
			return (h);
		nat = nat->head;
	}
	return (NULL);
}

