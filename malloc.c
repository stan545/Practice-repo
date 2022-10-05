#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	char *s;
	
	int i = malloc((sizeof(char) * 10) + 1);
	printf("%d\n", atoi(i));
	return (0);
}
