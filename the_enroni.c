#include "shell.h"

/**
 * the_envi_at - This function displays the environment.
 * @run:Struct  Pointer.
 * Return:  if(success)
 */
int the_envi_at(phoe_x *run)
{
    print_environ(run->viro);
    return (0);
}
