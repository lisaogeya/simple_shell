#include "shell.h"
/**
 * user_input - read user input
 * getline - built in function
 * @s:size
 * @cmd:pointer parameter
 *
 * Return:0
 */
void user_input(char *cmd, size_t s)
{
ssize_t scan = getline(&cmd, &s, stdin);
if (scan != -1)
{
cmd[scan - 1] = '\0';
}
else if (!feof(stdin))
{
_print("Error\n");
exit(EXIT_FAILURE);
}
else
{
_print("\n");
exit(EXIT_SUCCESS);
}
free(cmd);
}

