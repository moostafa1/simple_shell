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
void _cd(char **args);
void _help(char **args);
void _stop(char **args);
int function_names_len(void (**args)(char **));


#endif
