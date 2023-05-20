#include "main.h"

void print_exit(char **argv)
{
	if (_strcmp(argv[0], "exit") == 0)
	{
		exit(0);
	}
}
