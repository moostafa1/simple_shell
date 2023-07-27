#include "shell.h"
#define TOKEN_SIZE 64
#define TOKEN_DELIM " \t\r\n\a"

/**
 * _strtok - takes the input string and tokenize it
 * @line: input string from the user
 *
 * Return: 2d array of strings (tokens)
 */
char **_strtok(char *line)
{
	int size;
	int index = 0;
	char **tokens;
	char *token;

	size = TOKEN_SIZE;
	tokens = malloc(sizeof(token) * TOKEN_SIZE);

	if (!tokens)
	{
		fprintf(stderr, "error: allocation failed\n");
		/*free(tokens);*/
		exit(EXIT_FAILURE);
	}

	token = strtok(line, TOKEN_DELIM);
	while (token)
	{
		tokens[index] = token;
		index++;

		if (index >= size)
		{
			size += TOKEN_SIZE;
			tokens = realloc(tokens, size * sizeof(char *));

			if (!tokens)
			{
				fprintf(stderr, "error: reallocation failed\n");
				/*free(tokens);*/
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, TOKEN_DELIM);
	}
	tokens[index] = NULL;
	return (tokens);
}
