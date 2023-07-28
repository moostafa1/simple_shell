#include "shell.h"

/**
 * main - executing the shell code by calling all the functions in a loop
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	char *string;
	char **tokens;
	int status;

	do {
		printf("$ ");
		string = _getline();
		tokens = _strtok(string);
		status = _fork(tokens);
		free(string);
		free(tokens);
	} while (status);

	return (EXIT_SUCCESS);
}
