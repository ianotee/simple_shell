#include "shell.h"

/**
 * froze  - This is used to check for the string.
 * @j: char param
 */
void froze(char **j)
{
    char **a = j;

    if (!j)
        return;
    while (*j)
        free(*j++);
    free(a);
}
