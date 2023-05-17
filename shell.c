#include "main.h"

int main(int ac, char **argv)
{
	char *buff;
	size_t buff_size = 0;
	ssize_t characters;
	/*const char *delim = " \n";*/

	(void)ac;
	(void)argv;

	while(1)
	{
		printf("#cisfun$ ");
		buff = (char *)malloc(sizeof(char) * buff_size);
		if (buff == NULL)
		{
			perror("Failed memory allocation");
			exit(-1);
		}
		characters = getline(&buff, &buff_size, stdin);
		if (characters == -1)
		{
			printf("Exit....");
			exit(-1);
		}
	}
	/*token = strtok(buff, delim);*/

	free(buff);
	return (0);
}
