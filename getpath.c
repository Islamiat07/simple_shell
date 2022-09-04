#include "shell.h"
/**
 * pathCat - concats directory and user input to check for builitin
 * @dir: directory
 * @input: user input
 * Return: buffer to directory
 */
char *pathCat(char *dir, char *input)
{
	int i, k, len1, len2;
	char *buf;

	len1 = _strlen(dir);
	len2 = _strlen(input);

	buf = malloc(4096);
	buffers4(NULL, buf);

	i = 0;
	while (i < len1)
	{
		buf[i] = dir[i];
		i++;
	}
	k = 0;
	while (i < (len1 + len2))
	{
		buf[i] = input[k];
		i++;
		k++;
	}
	buf[i] = '\0';
	return (buf);
}

/**
 * get_env - gets env in order to navigate PATH
 * @env: double pointer
 * Return: buf
 */
char *get_env(char **env)
{
	int i, k;
	char *start, *buf, *str = "PATH=";

	i = 0;
	while (env[i])
	{
		k = 0;
		while (env[i][k] == str[k])
		{
			if (env[i][k + 1] == str[k + 1])
			{
				start = env[i];
				break;
			}
			k++;
		}
		i++;
	}
	_strlen(start);
	buf = malloc(4096);
	buffers3(NULL, buf);
	i = 0;
	k = 0;
	while (start[i] != '\0')
	{
		if (start[i] == ':')
		{
			buf[k] = '/';
			k++;
		}
		buf[k] = start[i];
		i++;
		k++;
	}
	buf[k] = '/';
	k++;
	buf[k] = '\0';
	return (buf);
}
