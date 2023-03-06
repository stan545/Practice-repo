#include "hsh.h"

void hsh_exec(char **args)
{
	builtin_t cmdCall[] = {
		 {"help", hsh_help},
		 {"exit", hsh_exit},
		 {"cd", hsh_cd},
	};

	int hsh_num_builtins =  sizeof(cmdCall) / sizeof(builtin_t);

	for (int i = 0; i < hsh_num_builtins; i++)
	{
		if (strcmp(args[0], cmdCall[i].name) == 0)
		{
			cmdCall[i].func(args);
			return;
		}
	}

	pid_t child_pid = fork();

	if (child_pid == 0)
	{
		execvp(args[0], args);
		perror("hsh");
		exit(1);
	}
	else if (child_pid > 0)
	{
		int status;
		do {
			waitpid(child_pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	else
	{
		perror("hsh");
	}
}
