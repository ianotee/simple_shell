#include "shell.h"

/**
 * starts_env - starts the program.
 * @stack: looks for s string
 * @need: The subscript.
 * Return: 1.
 */
char *starts_env(const char *stack, const char *need)
{
	while (*need)
		if (*need++ != *stack++)
			return (NULL);
	return ((char *)stack);
}
