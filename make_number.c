#include "shell.h"
/**
 * make_number  - This Function adds Integers.
 * @run: Structure Pointer.
 * Return: 0.
 */
int make_number(phoe_x *run)
{
    string *nat = run->hist_toll;
    int i = 0;

    while (nat)
    {
        nat->my_Number = i++;
        nat = nat->head;
    }
    return (run->Num_history = i);
}

