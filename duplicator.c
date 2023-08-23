#include "shell.h"

/**
 * duplicator- This Function replicates the program.
 * @pathstr: This is the string url
 * @start: Initiates the program.
 * @stop: terminates the program.
 * Return: 0 if (success)
 */
char *duplicator(char *pathstr, int start, int stop)
{
    static char buffer[1024];
    int n = 0, k = 0;

    for (k = 0, n = start; n < stop; n++)
        if (pathstr[n] != ':')
            buffer[k++] = pathstr[n];
    buffer[k] = 0;
    return (buffer);
}

