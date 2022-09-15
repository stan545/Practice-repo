#include <math.h>
#include <stdio.h>

int main(void)
{
	int x;
	x = 5;
	
	int y = x / 2;
	int remainder = x % 2;

	{
	printf("%d\n", y);
	printf("Modulo " "%d\n", remainder);
	}

	return 0;

}
