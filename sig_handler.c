#include "shell.h"
/**
 * sig_handler - It checks the signal
 * @sig_num: integer param
 * Return: 0.
 */
void sig_handler(__attribute__((unused)) int sig_num)
{
    _eputs("\n");
    _eputs("$ ");
    _eputchar(BUF_CLEANSE);
}
