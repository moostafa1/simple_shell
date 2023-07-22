#include "shell.h"

/**
 * main - prints "$ " waiting the user to enter a command, then token it
 *
 * Return: 0
 */
int main()
{
	int bytes_read;
	size_t size = 1;
	char *string;
	const char s[2] = " ";
	char *token;
	/*char *_exit = "exit";*/

	while (1)
	{
		/* These 2 lines are very important. */
		string = (char *) malloc(size);
		bytes_read = getline(&string, &size, stdin);
		string[strlen(string) - 1]= '\0';

		printf("$ ");
		_execve(string);
		if (bytes_read == -1)
		{
			puts("ERROR!");
		}
		else
		{
			/* get the first token */
			token = strtok(string, s);
			/* puts(string); */
		}
		/*if (_strcmp(string, _exit) == 0)
			exit(0);*/

		/* walk through other tokens */
		while(token != NULL)
		{
			/*printf("%s\n", token);*/
			token = strtok(NULL, s);
		}
	}

		free(string);
		free(token);
		return (0);
}
