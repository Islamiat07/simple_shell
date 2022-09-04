#include "shell.h"

/**
 * get_line - get line from command
 * Return: buffer
 */
char *get_line(void)
{
	char *buf = NULL;
	size_t bufsize = 0;
	int test;

	test = getline(&buf, &bufsize, stdin);
	buffers3(NULL, buf);

	if (test == EOF)
	{
		buffers1(NULL, NULL);
		buffers2(NULL, NULL);
		buffers3(NULL, NULL);
		buffers4(NULL, NULL);
		buffers5(NULL);
		_exit(0);
	}
	return (buf);
}
