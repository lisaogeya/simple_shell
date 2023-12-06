#include "mainshell.h"
/**
 * user_cmd - read user input
 * @s:size
 * @cmd:pointer parameter
 * Return:0
 */
void user_cmd(char *cmd, size_t s)
{
if (fgets(cmd, s, stdin) != NULL)
{
cmd[strcspn(cmd, "\n")] = '\0';
}
else
{
if (!feof(stdin))
{
_write("Error\n");
exit(EXIT_FAILURE);
}
else
{
_write("\n");
exit(EXIT_SUCCESS);
}
}
}
