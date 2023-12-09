#include "shell.h"
/**
 * main - entry point of program
 *prompt-display prompt
 *user_input-read user input
 *exec_cmd-execute commands
 *Return:0
 */
int main(int ac, char **av)
{
const char text[] = "Simple Shell project is quite hard!"; 
//interactive mode
if(isatty(STDIN_FILENO))
{

char cmd[100];

write_str(text);

while (!0)
{
prompt();
user_input(cmd, sizeof(cmd));
exec_cmd(cmd);

}
// non-interactive mode
else{


}

return (0);
}
