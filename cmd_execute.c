#include "shell.h"

/**
 * cmd_execute - Runs the files that are executable.
 * @run: Structure Pointer.
 * @url: The url line.
 * Return: 1 if (success)
 */
int cmd_execute(phoe_x *run, char *url)
{
    struct stat st;
    (void)run;

    if (!url || stat(url, &st))
        return (0);
    if (st.st_mode & S_IFREG)
    {
        return (1);
    }
    return (0);
}

