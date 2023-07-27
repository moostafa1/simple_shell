#include "shell.h"



/**
 * _execute - executes a file
 * @args: file to execute arg[0]
 *
 * Return: _fork (integer)
 */
int _execute(char **args)
{
	int i = 0;

	if (args[0] == NULL)
		return (1);


	for (; i < function_names_len(); i++)
	{
		if (strcmp(args[0], function_names[i]) == 0)
			return (commands_lst[i](args));
	}
	return _fork(args);
}
