#include "shell.h"
/**
 * history_build_all - This  Function links the History Files.
 * @run: The struct Pointer.
 * @buffer: This is size Pointer.
 * @linecount- This counts the number of  lines in the terminal.
 * Return: 0 if(Succees)
 */
int history_build_all(phoe_x *run, char *buffer, int linecount)
{
    string *nat = NULL;

    if (run->hist_toll)
        nat = run->hist_toll;
    add_node_at_end(&nat, buffer, linecount);
    if (!run->hist_toll)
        run->hist_toll = nat;
    return (0);
}


