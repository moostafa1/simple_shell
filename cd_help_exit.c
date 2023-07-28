#include "shell.h"


char *function_names[] = {"cd", "help", "exit"};
int (*commands_lst[]) (char **) = {&_cd, &_help, &_stop};



/**
 * _cd - change current directory
 * @args: command and dir name
 *
 * Return: 1
 */
int _cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "error: expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
			perror("cd");
	}
	return (1);
}




/**
 * _help - prints some helpful information
 * @function_names: array of command names
 *
 * Return: 1
 */
int _help(char **function_names)
{
	int i = 0;

	printf("\tBuilts by:\n");
	printf("Mostafa Noaman - Abdul Aziz Al Saudi\n");
	printf("Allowed commands:\n");
	printf("\tpwd\n\tls\n\ttouch\n\tmv\n\trm\n");

	for (; i < function_names_len(); i++)
	{
		printf("\t%s\n", function_names[i]);
	}
	printf("for more incormation use: man (command name)\n");
	return (1);
}




/**
 * _stop - exit from the shell loop
 * @args: the command "exit" is arg[0]
 *
 * Return: 1
 */
int _stop(char **args)
{
	if (strcmp(args[0], "exit") == 0)
	{
		if (args[1] != NULL)
			printf("%s\n", args[1]);
		return (0);
	}
	return (0);
}




/**
 * function_names_len - get length of the array
 *
 * Return: 2d array number of values
 */
int function_names_len(void)
{
	return (sizeof(function_names) / sizeof(char *));
}
