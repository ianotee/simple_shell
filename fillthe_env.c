#include "shell.h"

/**
 * add_the_environ - Function add the Environment.
 * @run: Structure Pointer.
 * Return: if (success)
 */
int add_the_environ(phoe_x *run)
{
	string *nat = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add_node_at_end(&nat, environ[i], 0);
	run->viro = nat;
	return (0);
}

