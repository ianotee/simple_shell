#include "shell.h"

/**
 *receive:Returns success when its interactive.
 *@phoe_x: The typedef of the structure.
 *@m: Struct Pointer.
 *Return: 1 if (succeess).
 */
int receive(phoe_x *m)
{
    return (isatty(STDIN_FILENO) && m->analyse <= 2);
}

