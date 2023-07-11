#ifndef SHELL2_H
#define SHELL2_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define TOK_DELIM " \t\r\n\a\""


void non_interactive_shell(void);
void interactive_shell(void);
char **split_line(char *line);
char *read_line(void);
int _fork(void);
int exec_args(char **args, char **env);

#endif
