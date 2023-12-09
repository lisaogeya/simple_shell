#include "shell.h"
/**
 * main - entry point of program
 *prompt-display prompt
 *user_input-read user input
 *exec_cmd-execute commands
 *Return:0
 */
int main(void)
{
const char text[] = "Simple Shell project is quite hard!"; 
char cmd[100];

write_str(text);

/*while (!0)
{
prompt();
user_input(cmd, sizeof(cmd));
exec_cmd(cmd);

}*/

return (0);
}
