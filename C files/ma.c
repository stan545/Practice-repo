//#include <conio.h>
#include <stdio.h>

/*void main()
{
	int b[5],i;
	printf("Please Enter the array elements: ");
	for (i=0;i<5;i++)
		scanf("%d", &b[i]);
	for (i=0;i<5;i++)
		printf("The value of the array b[%d] is %d\n", i, b[i]);

	for (i=4;i>=0;i--)
		printf("The value of the array b[%d] is %d\n", i, b[i]);
}*/

void main()
{
	int marks[5],i;
	float sum,avg;
	sum=0;

	printf("Please enter the marks of five students: \n");
	for (i=0;i<5;i++)
		scanf("%d", &marks[i]);
	for (i=0;i<5;i++)
		sum=sum+marks[i];
	avg=sum/5;
	printf("The average of the total marks is %.2f\n", avg);
}

