#include "shell.h"

/**
 * mybuiltinhelp -  shifts the directory.
 * @run:Pointer of a structure.
 *  Return:0 if success.
 */
int mybuiltinhelp(phoe_x *run)
{
	char **argument;

    argument = run->argumentvector;
    _eputs("Run cd when changing the directory.\n");
	if (0)
		_eputs(*argument); 
	return (0);
}

