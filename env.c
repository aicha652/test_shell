#include "main.h"


void print_env (char **argv, char *envp[])
{
	int j;
	size_t length;
	const char newline = '\n';

	if (_strcmp(argv[0], "env") == 0)
	{
		for(j = 0; envp[j] != NULL; j++)
		{
			length = _strlen(envp[j]);
			write(1, envp[j], length);
			write(1, &newline, 1);
		}
	}
}
