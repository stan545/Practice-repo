#include "main.h"
#include <stdio.h>
/**
  * _memset - this function fills the first n bytes of the memory area
  *pointed to by s.
  * @n: unsigned int n is the number of bytes to be filled
  *starting from s
  * @s: starting address of memory to be filled
  * @b: the value to be filled
  * Return: A pointer s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		*s = b;
		s++;
		n--;

	}
	return (s);
}
