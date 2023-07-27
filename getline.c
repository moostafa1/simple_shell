#include "shell.h"
#define BUFFER_SIZE 1024


/**
 * _getline - takes user input
 *
 * Return: pointer to the inputted string
 */
char *_getline(void)
{
	int size = BUFFER_SIZE;
	int index = 0;
	char *buffer;
	int c;


	buffer = malloc(sizeof(char) * size);
	if (!buffer)
	{
		fprintf(stderr, "free memory: allocation error\n");
		free(buffer);
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		c = getchar();
		if (c == EOF || c == '\n')
		{
			buffer[index] = '\0';
			if (index == 0)
				return (NULL);
			return (buffer);
		}
		else
		{
			buffer[index] = c;
		}
		index++;

		if (index > size)
		{
			size += BUFFER_SIZE;
			buffer = realloc(buffer, sizeof(*buffer));
			if (!buffer)
			{
				fprintf(stderr, "free memory: allocation error\n");
				free(buffer);
				exit(EXIT_FAILURE);
			}
		}
	}
	/*free(buffer);*/
}