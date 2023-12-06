#include "mainshell.h"

/**
 *_write - prints to standard output
 *@text_output:parameter
 *Return:void
 */
void _write(const char *text_output)
{
write(STDOUT_FILENO, text_output, strlen(text_output));
}
