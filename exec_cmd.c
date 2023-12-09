#include "shell.h"
/**
 *exec_cmd -function that executes command in child proces
 *@cmd:constant parameter
 *Return:nothing
 */

void exec_cmd(const char *cmd)
{
pid_t child_pid = fork();
if (child_pid == -1)
{
perror("Child process creation error");
exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
int tally = 0;
char *arg_cmd[200];
char *delim = " ";
char *tkn = strtok((char *)cmd, delim);

while (tkn != NULL)
{
arg_cmd[tally] = tkn;
tally++;
tkn = strtok(0, delim);
}
arg_cmd[tally] = NULL;
execve(arg_cmd[0], arg_cmd, NULL);
perror("Failed to execute command.\n");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
