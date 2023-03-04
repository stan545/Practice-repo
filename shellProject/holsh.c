#include "hsh.h"

int main()
{

	while (true)
	{
		printf("Hol$ ");
		char *line = hsh_read_line();
		char **tokens = hsh_split_line(line);

		if (tokens[0] != NULL)
		{
			hsh_exec(tokens);
		}

		free(tokens);
		free(line);
	}
}
