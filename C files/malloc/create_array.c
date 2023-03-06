#include <stdio.h>
#include "main.h"
#include "stdlib.h"

char *create_array(unsigned int size, char c)
{
	char *ps;
	unsigned int i;
	i = 0;

	if (size == 0 && size == 00)
	{
		return NULL;
	}
	ps = malloc(size * sizeof(char));

	while(i < size)
	{
		ps[i] = c;
		i++;
	}

	return (ps);
}
	
