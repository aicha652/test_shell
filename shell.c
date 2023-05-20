#include "main.h"


int main(int ac, char **argv)
{
	char *buff;
	size_t buff_size = 0;
	ssize_t characters;
	const char *del = " \n";
	char *mytoken;
	char *args[] = {"/bin/ls", "ls", "-l", NULL};
	int i = 0;
	char *str = "exit";

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
		mytoken = strtok(buff, del);
		while(mytoken != NULL)
		{
			mytoken = strtok(NULL, del);
		}
		if (execve(args[i], args, NULL) == -1)
		{
			perror("./shell");
			i++;
		}
		if (*argv[0] == *str)
		{
			exit(0);
		}
	}

	free(buff);
	return (0);
}
