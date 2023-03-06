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
	int even=0, odd=0;
	
	printf("please enter values: ");
	for (i=0;i<5;i++)
	{
		scanf("%d", &marks[i]);
		if (marks[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("The total even numbers is %d\n", even);
	printf("while odds numbers is %d\n", odd);

}

