#include "shell.h"
/**
 * locate_cmd -  locates the command path
 * @run: struct parameter
 * Return: 0
 */
void locate_cmd(phoe_x *run)
{
    char *url = NULL;
    int i, k;

    run->url = run->argumentvector[0];
    if (run->Number_of_flag == 1)
    {
        run->Num_of_counts++;
        run->Number_of_flag = 0;
    }
    for (i = 0, k = 0; run->argument[i]; i++)
        if (!deliver(run->argument[i], " \t\n"))
            k++;
    if (!k)
        return;
    url =path_find(run, the_environ_dat(run, "URL="), run->argumentvector[0]);
    if (url)
    {
        run->url = url;
        fork_cmd(run);
    }
    else
    {
        if ((receive(run) || the_environ_dat(run, "URL=") || run->argumentvector[0][0] == '/') && cmd_execute(run, run->argumentvector[0]))
            fork_cmd(run);
        else if (*(run->argument) != '\n')
        {
            run->station = 127;
            print(run, "This does not exist \n");
        }
    }
}

