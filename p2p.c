#include <stdio.h>

int main(void)
{
	int num = 123;
	int *prt1;
	int **prt2;

	prt1 = &num;
	prt2 = &prt1;

	printf("The value of num is: %d\n", num);
	printf("The value of ptr1 is: %d\n", *prt1);
	printf("The value of Prt2 is: %d\n", **prt2);
	printf("The address of num is: %p\n", &num);
	printf("The address of the value of prt1 is: %p\n", prt1);
	printf("The address of the value of prt2 is: %p\n", *prt2);
	printf("The address of prt1 is: %p\n", &prt1);
	printf("The address of num is: %p\n", &prt2);
	printf("The address of num is: %p\n", &num);
	printf("size of *prt1 is: %lu\n", sizeof(prt1));
	printf("size of **prt2 is: %lu\n", sizeof(**prt2));
/*	printf("");
	printf("");
	printf("");*/
}
