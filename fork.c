#include "shell.h"


/**
 * fork_cmd - Takesthe param.
 * @run: pointer
 * Return: void
 */
void fork_cmd(phoe_x *run)
{
    pid_t child_pid;

    child_pid = fork();

    if (child_pid == -1)
    {
      
        perror("The Error :");
        return;
    }
    if (child_pid == 0)
    {
        if (execve(run->url, run->argumentvector, no_environ(run)) == -1)
        {
            info_free_on(run, 1);
            if (errno == EACCES)
                exit(126);
            exit(1);
        }
        
    }
    else
    {
        wait(&(run->station));
        if (WIFEXITED(run->station))
        {
            run->station = WEXITSTATUS(run->station);
            if (run->station == 126)
                print(run, " The Entry is Denied\n");
        }
    }
}


