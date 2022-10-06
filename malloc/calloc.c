#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == 00)
	{
		return (NULL);
	}
	while (i < (size * nmemb))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
