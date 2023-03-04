#ifndef HSH_H
#define HSH_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

typedef struct builtin
{
	char *name;
	void (*func)(char **args);
} builtin_t;

char* hsh_read_line();
char** hsh_split_line(char *line);
void hsh_exit(char **args);
void hsh_cd(char **args);
void hsh_help(char **args);

int hsh_num_builtins();
void hsh_exec(char **args);

#endif
