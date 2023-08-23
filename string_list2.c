#include "shell.h"

/**
 * string_list2 - returns an array.
 * @link:This  pointer points to first node
 * Return: an array
 */
char **string_list2(string *link)
{
	string *nat = link;
	size_t i = name_list1(link), j;
	char **strs;
	char *name_string;

	if (!link || !i)
		return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	for (i = 0; nat; nat = nat->head, i++)
	{
		name_string = malloc(_strlen(nat->name_string) + 1);
		if (!name_string)
		{
			for (j = 0; j < i; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		}
		name_string = copy_the_string(name_string, nat->name_string);
		strs[i] = name_string;
	}
	strs[i] = NULL;
	return (strs);
}
