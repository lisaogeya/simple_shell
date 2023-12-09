#ifndef MAINSHELL_H
#define MAINSHELL_H


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void write_str(const char *str);
void _print(const char *text_output);
void user_input(char *cmd, size_t s);
void exec_cmd(const char *cmd);


#endif /*MAINSHELL_H*/
