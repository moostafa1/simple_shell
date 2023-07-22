#include "shell.h"


/**
 * _execve - executes a given compiled c program
 * @fname: file to executes
 *
 * Return: void
 */
void _execve(char *fname)
{
	char *argv[2];

	argv[0] = fname;
	argv[1] = NULL;

	if (fname == NULL)
		return;


	if (execve(argv[0], argv, NULL) < 0)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
}
