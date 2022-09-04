#include "shell.h"

/**
 * execute - forks to child process to execute command
 * @fullPath: full directory with command
 * @command: user input
 * Return: status
 */
int execute(char *fullPath, char **command)
{
	pid_t child;
	int status = 0;
	struct stat st;
