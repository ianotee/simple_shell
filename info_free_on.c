#include "shell.h"

/**
 * info_free_on - frees phoe_xstruct fields
 * @run: struct address
 * @mo: true if freeing all fields
 */
void info_free_on(phoe_x *run, int mo)
{
    froze(run->argumentvector);
    run->argumentvector = NULL;
    run->url = NULL;

    if (mo)
    {
        if (!run->command)
            free(run->argument);
        if (run->viro)
            list_free(&(run->viro));
        if (run->hist_toll)
            list_free(&(run->hist_toll));
        if (run->all)
            list_free(&(run->all));
        froze(run->environ);
        run->environ = NULL;
        alfree((void **)run->command);
        if (run->analyse > 2)
            close(run->analyse);
        _eputchar(BUF_CLEANSE);
    }
}

