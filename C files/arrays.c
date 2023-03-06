#include <stdio.h>
 
int main(void)

{
	char numbers[5]={'a','b','c','d','e'};
	int i = 0;
	
	if (i == 3)
	{
		putchar(numbers[i]);
	}
	if (i == 4)
	{
		putchar(numbers[i]);
	}
	if (i == 0)
	{
		putchar(numbers[i]);
	}
	if (i == 3)
	{
		putchar(numbers[i]);
	}

	printf("I am so %c %c %c %c \n", numbers[3], numbers[4], numbers[0], numbers[3]);

	return (0);
}
