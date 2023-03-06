#include <stdio.h>

int main()
{
	int distance;
	int newDistance;

	distance = 135;

	printf("%d\n", distance);

	newDistance = 429;
	distance = newDistance;

	printf("  %d\n", distance);

	return (0);
}
