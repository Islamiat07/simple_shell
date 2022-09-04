#include "shell.h"

/**
 * exit_sh - function to exit from shell
 * @command: input from command
 * Return: 0 for success
 */
int exit_sh(char **command)
{
	if (*command)
	{
		buffers1(NULL, NULL);
		buffers2(NULL, NULL);
		buffers3(NULL, NULL);
		buffers4(NULL, NULL);
		buffers5(NULL);
		exit(2);
	}
	return (0);
}

/**
 * cd - function to change directory
 * @command: input from command
 * Return: 0 for success
 */
int cd(char **command)
{
	chdir(command[1]);
	return (0);
}

/**
 * printenv - function to print env
 * @command: pointer to command
 * Return: 0 for success
 */
int printenv(char **command)
{
	int i;

	if (*command)
	{
		i = 0;
		while (environ[i])
		{
			write(1, environ[i], _strlen(environ[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
