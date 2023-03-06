#include <stdio.h>
#include <math.h>

int abs(int);
int _pow(int,int);

int main(int argc,char *argv[])
{
	printf("%d\n", abs(-100));
	printf("%f\n", pow(9,2));
}

int abs(int num)
{
	return (num < 0) ? -num : num;
}

int _pow(int n, int m)
{
	int expo = 1;
	for(int i = 1; i <= m; i++)
		expo *= n;
	return expo;
}
