#include  "shell.h"

/**
 * _print_line - This function displays the string.
 * @y: char param.
 * Return: 1 if (success)
 */
int _print_line(char y)
{
	static int i;
	static char buffer[NOT_BUF_SIZE];

	if (y == BUF_CLEANSE || i >= NOT_BUF_SIZE)
	{
		write(2, buffer, i);
		i = 0;
	}
	if (y != BUF_CLEANSE)
		buffer[i++] = y;
	return (1);
}
