#include "shell.h"

/**
 * _fork - creates a child process to execute files
 * @args: the name of the file to execute arg[0]
 *
 * Return: 1
 */
int _fork(char **args)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	/* child process */
	if (child_pid == 0)
	{
		if (execvp(args[0], args) == -1)
			perror("Error");
		exit(EXIT_FAILURE);
	}
	/* error forking */
	else if (child_pid == -1)
	{
		perror("Failed to fork\n");
	}
	/* parent process */
	else
	{
		do {
			wait(&status);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
