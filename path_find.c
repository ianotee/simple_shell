#include "shell.h"

/**
 * path_find - finds the command
 * @run: struct pointer.
 * @pathstr: url string
 * @cmd: cmd url
 * Return: url.
 */
char *path_find(phoe_x *run, char *pathstr, char *cmd)
{
    int i = 0, curr_pos = 0;
    char *url;

    if (!pathstr)
        return (NULL);
    if ((_strlen(cmd) > 2) && starts_env(cmd, "./"))
    {
        if (cmd_execute(run, cmd))
            return (cmd);
    }
    while (1)
    {
        if (!pathstr[i] || pathstr[i] == ':')
        {

            url = duplicator(pathstr, curr_pos, i);
            if (!*url)
                string_catenation(url, cmd);
            else
            {
                string_catenation(url, "/");
                string_catenation(url, cmd);
            }
            if (cmd_execute(run, url))
                return (url);
            if (!pathstr[i])
                break;
            curr_pos = i;
        }
        i++;
    }
    return (NULL);
}

