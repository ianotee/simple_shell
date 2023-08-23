#include "shell.h"

/**
 * get_input_all - This gets the line of the environment.
 * @run: The struct Pointer
 * Return: void
 */
ssize_t get_input_all_func(phoe_x *run)
{
	static char *buffer; 
	static size_t i, k, len;
	ssize_t r = 0;
	char **buf_p = &(run->argument), *h;

	_eputchar(BUF_CLEANSE);
	r = input_buf_all(run, &buffer, &len);
	if (r == -1) 
		return (-1);
	if (len)	
	{
		k = i; 
		h = buffer + i; 
		confirm_chain(run, buffer, &k, i, len);
		while (k < len) 
		{
			if (The_chain(run, buffer, &k))
				break;
			k++;
		}
		i = k + 1; 
		if (i >= len) 
		{
			i = len = 0;
			run->command_type = NAME_NORM;
		}
		*buf_p = h; 
		return (_strlen(h));
	}
	*buf_p = buffer; 
	return (r);
}

