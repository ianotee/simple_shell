#include "shell.h"
/**
 * replace_string - replaces string
 * @old_then: tHE OLD file
 * @new_now: the new input
 * Return: 1
 */
int replace_string(char **old_then, char *new_now)
{
    free(*old_then);

    *old_then = new_now;

    return (1);
}
