#include <stdio.h>

void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'S';
	printf("the address of p is: %p\n", &p);
	printf("The address of c is: %p\n", &c);
	printf("The value of *p is: %p\n", p);
	printf("The value of c is: %c\n", c);
	printf("The value of p is: %c\n", *p);
	modif_my_char_var(p, c);
	printf("the address of p is: %p\n", &p);
	printf("The address of c is: %p\n", &c);
	printf("The value of *p is: %p\n", p);
	printf("The value of c is: %c\n", c);
	printf("The value of p is: %c\n", *p);

	return (0);
}
