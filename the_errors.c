#include "shell.h"

/**
 *_dos - This function displays the input string
 * @name_string: The pointer.
 * Return: 0
 */
void _dos(char *name_string)
{
	int i = 0;

	if (!name_string)
		return;
	while (name_string[i] != '\0')
	{
		_print_line(name_string[i]);
		i++;
	}
}
