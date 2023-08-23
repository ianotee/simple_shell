#include "shell.h"

/**
 * clear_info_at - It starts the process.
 * @run: struct Pointer of the  structure.
 */
void clear_info_at(phoe_x *run)
{
    run->argument = NULL;
    run->argumentvector = NULL;
    run->url = NULL;
    run->arg_counter = 0;
}

