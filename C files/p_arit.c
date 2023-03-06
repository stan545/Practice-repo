#include <stdio.h>

void main()
{
	int s[4];
	int *d;
	int n = 98;

	d = &n;

	printf("The value of n is: %d\n", n);
	printf("The value of *d is: %d\n", *d);
	printf("The address of n is: %p\n", &n);
	printf("The value of d is: %p\n", d);
	printf("The value of d+1 is: %p\n", d+1);
	printf("The value of d+2 is: %p\n", d+2);
	printf("The value of d+3 is: %p\n", d+3);
	printf("The value of d+4 is: %p\n", d+4);
	printf("The value of d+5 is: %p\n", d+5);
	printf("The value of d+6 is: %p\n", d+6);
	printf("\n\n");
	d=s;
	printf("the address of s is: %p\n", &s);
	printf("d=s;\nd: %p\nd+1: %p\n", d,d+1);
	printf("the address of the pointer *d is: %p\n", &d);
	printf("The size of n is: %lu\n", sizeof(n));
	printf("The size of content of the pointer *d is: %lu\n", sizeof(*d));
	printf("The size of the pointer d is: %lu\n", sizeof(d));



}
