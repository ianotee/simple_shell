#include "shell.h"
/**
 * history_read_1 - It keeps the records.
 * @run: The structure Pointer.
 * Return: 0 if (Success)
 */
int history_read_1(phoe_x *run)
{
    int i, last = 0, linecount = 0;
    ssize_t m, rdlen, fsize = 0;
    struct stat st;
    char *buffer = NULL, *filename = get_history(run);

    if (!filename)
        return (0);
    m = open(filename, O_RDONLY);
    free(filename);
    if (m == -1)
        return (0);
    if (!fstat(m, &st))
        fsize = st.st_size;
    if (fsize < 2)
        return (0);
    buffer = malloc(sizeof(char) * (fsize + 1));
    if (!buffer)
        return (0);
    rdlen = read(m, buffer, fsize);
    buffer[fsize] = 0;
    if (rdlen <= 0)
        return (free(buffer), 0);
    close(m);
    for (i = 0; i < fsize; i++)
        if (buffer[i] == '\n')
        {
            buffer[i] = 0;
            history_build_all(run, buffer + last, linecount++);
            last = i + 1;
        }
    if (last != i)
        history_build_all(run, buffer + last, linecount++);
    free(buffer);
    run->Num_history = linecount;
    while (run->Num_history-- >= HIST_MAX)
        delete_node(&(run->hist_toll), 0);
    make_number(run);
    return (run->Num_history);
}

