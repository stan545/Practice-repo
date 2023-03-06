#include <stdio.h>
#include <stdarg.h>

int main(int ac, char **av)
{

	for (int i = 0; av[i]; i++)
	{
		printf("%s ", av[i]);
	}
	printf("\n");
	return (0);
}
