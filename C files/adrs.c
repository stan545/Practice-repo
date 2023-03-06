#include <stdio.h>

int main()
{
	int a = 98;
	int *adrs;
	
	adrs = &a;
	printf("%p\n", adrs);
	printf("%p\n", &a);
	printf("The value of n is %d\n", a);
	printf("The address of adrs %p\n", &adrs);
	printf("The size of the pointer *adrs is %lubytes\n", sizeof(adrs));
	
	*adrs = 01;
	printf("The value of a is %d\n", a);
	printf("The value of n is %d\n", a);
	printf("The value of adrs is %d\n", *adrs);
}
