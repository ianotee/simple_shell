#include "shell.h"
 

/**
 * mybuiltincd -This function changes the current directory.
 * @run: Structure for arguments 
 *  Return: 0 if(success)
 */

 
int mybuiltincd(phoe_x *run)
{
    char *z, *biz, buffer_size[1024];
    int d_set;

    z = getcwd(buffer_size, 1024);
    if (!z)
        _eputs("GET the message\n");
    if (!run->argumentvector[1])
    {
        biz = the_environ_dat(run, "HOMEPAGE=");
        if (!biz)
            d_set = 
                chdir((biz = the_environ_dat(run, "PRINT WORKING DIRECTORY=")) ? biz : "/");
        else
            d_set = chdir(biz);
    }
    else if (_strcmp(run->argumentvector[1], "-") == 0)
    {
        if (!the_environ_dat(run, "PREVIOUSPRINT WORKING DIRECTORY="))
        {
            _eputs(z);
            _eputchar('\n');
            return (1);
        }
        _eputs(the_environ_dat(run, "PREVIOUSPRINT WORKING DIRECTORY=")), _eputchar('\n');
        d_set =
            chdir((biz = the_environ_dat(run, "PREVIOUSPRINT WORKING DIRECTORY=")) ? biz : "/");
    }
    else
        d_set = chdir(run->argumentvector[1]);
    if (d_set == -1)
    {
        print(run, "It can not change directory.");
        _eputs(run->argumentvector[1]), _eputchar('\n');
    }
    else
    {
        set_env(run, "PREVIOUSPRINT WORKING DIRECTORY", the_environ_dat(run, "PRINT WORKING DIRECTORY="));
        set_env(run, "PRINT WORKING DIRECTORY", getcwd(buffer_size, 1024));
    }
    return (0);
}

