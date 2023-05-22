#include "main.h"

int exit_status(char **argv)
{
	int i = 0, status;

	if (_strcmp(argv[0], "exit") == 0)
	{
		if (argv[1] != NULL)
		{
			while(argv[1][i] != '\0')
			{
				if (!_isdigit((unsigned char)argv[1][i]))
				{
					printf("You should put an intger");
					return (1);
				}
				i++;
			}
			status = _atoi(argv[1]);
			exit(status);
		}
		exit(0);
	}
	return (0);
}
