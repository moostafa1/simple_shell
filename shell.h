#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void _execve(char *fname);

#endif
