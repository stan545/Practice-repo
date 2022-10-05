#include <stdio.h>

void main()
{
	int arr1[5],arr2[5],arr3[5];
	int i;

	printf("please enter values for the first Array: \n");
	for (i=0;i<5;i++)
		scanf("%d", &arr1[i]);

	printf("please enter values for the second Array: \n");
	for (i=0;i<5;i++)
		scanf("%d", &arr2[i]);


	printf("The values of arr3 arrays are: \n");
	for (i=0;i<5;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
		printf("%d\n", arr3[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("The address of the array arr3[%d] which holds the value %d is:  %p\n", i, arr3[i], &arr3[i]);
	}

	printf(" arr[3]: %p\n", arr3);
	printf("The size of the array arr3 is : %lu\n", sizeof(arr3));
	printf("The size of the array arr3 is : %lu\n", sizeof(&arr3));

}
