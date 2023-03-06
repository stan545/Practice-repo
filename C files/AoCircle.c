#include <stdio.h>
#include <math.h>
/*******************
AUTHOR: HENRY KANU
Description: simple mathematics
date: B/B/BBBB
*******************/ 
int main(void)
{
	//declare variable radius
	double radius;
	
	printf("please enter the radius of the circle: "); //PROMPT USER FOR VALUE OF RADIUS
	scanf("%lf\n", &radius); //read value and assign to radius
	{
		double pi = (double) 22 / 7;
		double Area = pi * (radius*radius);
	
		printf("The Area of the circle is: %lf\n", Area);
	}
	return (0);
}
