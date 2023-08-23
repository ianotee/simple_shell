#include "shell.h"

/**
 * get_history - Targets the history .
 * @run: struct pointer.
 * Return: allocation.
 */
char *get_history(phoe_x *run)
{
    char *buffer, *biz;

    biz = the_environ_dat(run, "HOMEPAGE=");

    if (!biz)
        return (NULL);
    buffer = malloc(sizeof(char) * (_strlen(biz) + _strlen(HISTORY) + 2));
    if (!buffer)
        return (NULL);
    buffer[0] = 0;
    copy_the_string(buffer, biz);
    string_catenation(buffer, "/");
    string_catenation(buffer, HISTORY);
    return (buffer);
}

