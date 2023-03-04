#include <stdio.h>

/* This program prompts the user for age and check if He/She is allowed to smoke or drink. */
int main()
{
	char* User;
	int age;
	printf("Hello there fella, can i know your name?\n");
	scanf("%s", User);
	printf("And how old is %s?\n ", User);
	scanf("%d", &age);
	printf("Hey %s, now that i know you are %d years old,\n Let me check what and what you are allowed to take at this wonderful age.\n Give me a second ;D\n\n", User, age);

	if (age < 18)
	{
		printf("I am so sorry dear, You are not allowed to take alcohol or smoke.\n");
	}
	else if (age >= 18 && age <= 30)
	{
		printf("Alright %s, you are only allowed to drink, but unfortunately you can't smoke. You are still too young to smoke dear friend. Drink responsibly!\n", User);
	}
	else
	{
		printf("Nice, You are allowed to drink and smoke. But you are adviced to DRINK RESPONSIBLY, remember that SMOKERS ARE LIABLE TO DIE YOUNG\n");
	}
	return(0);
}
