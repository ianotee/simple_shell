#include "shell.h"
/**
 * buff_read - Interprates a buffer
 * @run: struct param.
 * @buffer: character
 * @i: size
 * Return: r
 */
ssize_t buff_read(phoe_x *run, char *buffer, size_t *i)
{
	ssize_t r = 0;

	if (*i)
		return (0);
	r = read(run->analyse, buffer,PERUSE_BUF_SIZE);
	if (r >= 0)
		*i = r;
	return (r);
}

