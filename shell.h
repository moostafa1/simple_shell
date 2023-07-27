#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

char *_getline();
char **_strtok(char *line);
int _fork(char **args);
int _execute(char **args);
int _cd(char **args);
int _help(char **args);
int _stop(char **args);
int function_names_len(void);

extern char *function_names[];
extern int (*commands_lst[]) (char **);

#endif
