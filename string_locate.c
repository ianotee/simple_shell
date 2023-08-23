#include "shell.h"
/**
 **string_locate - This function pinpoints a string.
 *@z: This is the size.
 *@y: char param.
 *Return: z if (success)
 */
char *string_locate(char *z, char y)
{
	do {
		if (*z == y)
			return (z);
	} while (*z++ != '\0');
	return (NULL);
}
