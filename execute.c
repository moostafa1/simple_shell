#include "shell.h"



/**
 * _execute - executes a file
 * @args: file to execute arg[0]
 *
 * Return: _fork (integer)
 */
int _execute(char **args)
{
	if (args[0] == NULL)
		return (1);

	_cd(args);
	_help(args);
	_stop(args);
	return _fork(args);
}
