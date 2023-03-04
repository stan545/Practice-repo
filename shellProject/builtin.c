#include "hsh.h"

void hsh_exit(char **args)
{
	exit(0);
}

void hsh_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "hsh: cd: missing argument\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("hsh: cd");
		}
	}
}

void hsh_help(char **args)
{
	char *helptext =
		"hsh - Holberton Shell. \n"
		"The following commands are available:\n"
		" cd		Change the working directory.\n"
		" exit		Exit the shell.\n"
		" help		Print this help text.\n";
	printf("%s", helptext);
}

