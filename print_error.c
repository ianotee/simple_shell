#include "shell.h"

/**
 * print- Displays the error
 * @run: The Struct Pointer
 * @toddle: The Pointer.
 * Return: 0.
 */
void print(phoe_x *run, char *toddle)
{
    _dos(run->first_Name);
    _dos(": ");
    print_func(run->Num_of_counts, STDERR_FILENO);
    _dos(": ");
    _dos(run->argumentvector[0]);
    _dos(": ");
    _dos(toddle);
}
