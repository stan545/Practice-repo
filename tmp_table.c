#include <stdio.h>

int main()
{
	int Fahr, Cel;
	int lower, upper, count;
	 
	lower = 0;
	upper = 300;

	Fahr = lower;
	while (Fahr <= upper)
	{
		Cel = 5 * (Fahr - 32) / 9;
		printf("%d\t%d\n", Fahr, Cel);
		Fahr +=20;
	}

}
