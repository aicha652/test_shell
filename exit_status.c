#include "main.h"

void exit_status(char **argv)
{
	int i = 0, status;

	if (_strcmp(argv[0], "exit") == 0)
	{
		if (argv[1] != NULL)
		{
			while(argv[1][i] != '\0')
			{
				if (_isdigit(argv[1][i]) == 0)
				{
					printf("status must be an intger");
				}
				i++;
			}
			status = _atoi(argv[1]);
			exit (status);
		}
	}

}
