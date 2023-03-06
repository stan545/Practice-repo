#include <stdio.h>
#include <math.h>

/* This is an app that converts the value of Temperation from Fahrenheit to Celsius */

int main()
{
	float Fahrenheit;
	float Celsius;

	printf("Please enter the value of the temperature in Fahrenheit: ");
	scanf("%f\n", &Fahrenheit);
	//read
	printf("you have entered %f\n", Fahrenheit);
	Celsius = ((5.0/9) * (Fahrenheit - 32));
	printf("%fF converts to %fC degrees\n", Fahrenheit, Celsius);
}
