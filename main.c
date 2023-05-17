#include "main.h"

void exec(char **arguments)
{
	char *cmd = NULL;

	if (arguments)
	{
		cmd = arguments[0];

		if (execve(cmd, arguments, NULL) == -1)
		{
			perror("./hsh");
		}
	}
}

int main(int ac, char **argv)
{
	char *buff, *buff_copy;
	size_t buff_size = 0;
	ssize_t characters;
	const char *delim = " \n";
	int sum_tokens = 0;
	char *token;
	int i;

	(void)ac;

	while(1)
	{
		printf("#cisfun$ ");
		characters = getline(&buff, &buff_size, stdin);
		if (characters == -1)
		{
			printf("Exit");
			exit(-1);
		}
		buff_copy = malloc(sizeof(char) * characters);
		if (buff_copy == NULL)
		{
			perror("failed memory allocation");
			exit (-1);
		}
		strcpy(buff_copy, buff);
		
		token = strtok(buff, delim);

		while(token != NULL)
		{
			sum_tokens++;
			token = strtok(NULL, delim);
		}
		sum_tokens++;

		argv = malloc(sizeof(char *) * sum_tokens);

		token = strtok(buff_copy, delim);

		for(i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[i], token);

			token = strtok(NULL, delim);
		}
		argv[i] = NULL;

		if (strcmp(argv[0], "exit") == 0)
		{
			exit(0);
		}
		exec(argv);

	}
	free(buff_copy);
	free(buff);
	return (0);
}
