#include <stdio.h>
#include <math.h>

int main()
{
	double a = 5;
	double b = 25;

	double c = a / b;

	printf("%f\n", c);

	int x;
	x = 5;
	
	int y = x / 2;
	int remainder = x % 2;

	printf("%d\n", y);
	printf("Modulo " "%d\n", remainder);

	return 0;

}
