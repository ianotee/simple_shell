
#include "shell.h"

/**
 * input_buf_all - This function chains a command.
 * @run: struct param.
 * @buffer: buffer address.
 * @len: address size.
 * Return: the bytes.
 */
ssize_t input_buf_all(phoe_x *run, char **buffer, size_t *len)
{
    ssize_t r = 0;
    size_t len_p = 0;

    if (!*len)
    {

        free(*buffer);
        *buffer = NULL;

        signal(SIGINT, sig_handler);

#if MY_NEW_MACRO
        r = getline(buffer, &len_p, stdin);
#else
        r = get_line_nov(run, buffer, &len_p);
#endif
        if (r > 0)
        {
            if ((*buffer)[r - 1] == '\n')
            {
                (*buffer)[r - 1] = '\0';
                r--;
            }
            run->Number_of_flag = 1;
            remove_com_error(*buffer);
            history_build_all(run, *buffer, run->Num_history++);

            {
                *len = r;
                run->command = buffer;
            }
        }
    }
    return (r);
}

