#include "shell.h"

/**
 * get_line_nov - This Function gets the next line.
 * @phoe_x: parameter struct
 * @pointer_link: address of pointer to buffer, preallocated or NULL
 * @length: size of preallocated ptr buffer if not NULL
 * Return: z
 */
int get_line_nov(phoe_x *run, char **pointer_link, size_t *length)
{
	static char buffer[PERUSE_BUF_SIZE];
	static size_t i, len;
	size_t k;
	ssize_t r = 0, z = 0;
	char *h = NULL, *new_p = NULL, *y;

	h = *pointer_link;

	if (h && length)
		z = *length;
	if (i == len)
		i = len = 0;
	r = buff_read(run, buffer, &len);
	if (r == -1 || (r == 0 && len == 0))
		return (-1);
	y = string_locate(buffer + i, '\n');
	k = y ? 1 + (unsigned int)(y - buffer) : len;
	new_p = size_realloc(h, z, z ? z + k : k + 1);
	if (!new_p) 
		return (h ? free(h), -1 : -1);
	if (z)
		strn_cat(new_p, buffer + i, k - i);
	else
		_strncpy(new_p, buffer + i, k - i + 1);
	z += k - i;
	i = k;
	h = new_p;
	if (length)
		*length = z;
	*pointer_link = h;
	return (z);
}

