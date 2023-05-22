#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include  <errno.h>
#include <sys/wait.h>
#include <string.h>

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
void print_exit(char **argv);
void print_env (char **argv, char *envp[]);
int exit_status(char **argv);
int _isdigit(int c);
int _atoi(char *s);

#endif /* MAIN_H */
