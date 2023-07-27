#include "shell.h"


/* char *function_names[] = {"cd", "help", "exit"}; */
/* int (*commands_lst[]) (char **) = {&_cd, &_help, &_stop}; */


/**
 * _cd - change current directory
 * @args: command and dir name
 *
 * Return: void
 */
void _cd(char **args)
{
	if (strcmp(args[0], "cd") == 0)
	{
		if (args[1] == NULL)
		{
			fprintf(stderr, "error: expected argument to \"cd\"\n");
		}
		else
		{
			if (chdir(args[1]) != 0)
				fprintf(stderr, "error: expected argument to \"cd\"\n");
		}
	}
}




/**
 * _help - prints some helpful information
 * @function_names: array of command names
 *
 * Return: void
 */
void _help(char **function_names)
{
	if (strcmp(function_names[0], "help") == 0)
	{
		printf("\tBuilts by:\n");
		printf("Mostafa Noaman - Abdul Aziz Al Saudi\n");
		printf("Allowed commands:\n");
		printf("\tpwd\n\tls\n\ttouch\n\tmv\n\trm\n");
		printf("\tcd\n\thelp\n\texit\n");
		printf("for more incormation use: man (command name)\n");
	}
}




/**
 * _stop - exit from the shell loop
 * @args: the command "exit" is arg[0]
 *
 * Return: void
 */
void _stop(char **args)
{
	if (strcmp(args[0], "exit") == 0)
		exit(0);
}




/**
 * function_names_len - get length of the array
 *
 * Return: 2d array number of values
 */
int function_names_len(void (**function_names)(char **))
{
	return (sizeof(function_names) / sizeof(char *));
}
