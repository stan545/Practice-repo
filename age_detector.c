#include<stdio.h>
#include<time.h>
#include "main.h"


int main(void)
{
	int current_year;
	int current_month;
	int _age;
	int YOB;
	int _months;

	printf("please enter your Year of birth: ");
	scanf("%d", &YOB);
	
	int MOB;
	printf("please enter your month of birth in figures: ");
	scanf("%d", &MOB);

	time_t t;
	t = time('\0');
	struct tm tm = *localtime(&t);
	scanf("current year: %i, %i", &tm.tm_mon+1, &tm.tm_year+1900);
	printf("current year is %i %i\n", tm.tm_mon+1, tm.tm_year+1900);
	current_year = tm.tm_year+1900;
	current_month = tm.tm_mon+1;
	
	printf("if you were born %d, %d\n", MOB, YOB);
	
	_age = current_year - YOB;
	_months;
	{
		if(MOB < current_month)
		{
			_months = current_month - MOB;
		}
		else if(MOB > current_month)
		{
			_months = (12 - MOB) + current_month;
			_age--;
		}
	}
	Age(_age, _months);

	printf("you are %i yrs and %imonths 😊\n", _age, _months);
	
}
