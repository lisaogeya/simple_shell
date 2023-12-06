#ifndef MAINSHELL_H
#define MAINSHELL_H


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void _write(const char *text_output);
void prompt(void);
void user_cmd(char *cmd, size_t s);
#endif /*MAINSHELL_H*/
