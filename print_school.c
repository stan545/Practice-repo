#include <stdio.h>

void print_school(void)
{
	char str[] = "Holberton";

	str[0] = 's';
	printf("%s\n", str);
}
int main(void)
{
	print_school();
	return (0);
}
