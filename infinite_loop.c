#include "shell.h"
/**
 * infinite_loop - loops all functions for shell execution
 *
 * Return:0
 */
void infinite_loop(void)
{
int status;
char *get_line;
char **cmd;
do {
char *prompt = "Lsh $ > ";
write(STDOUT_FILENO, &prompt, strlen(prompt));

get_line = read_input();
cmd = print_input();
status = exec_cmd(cmd);

free(get_line);
free(cmd);

} while (status !0);
}
