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
	int MOB;
	int tm_mon;
	int tm_year;

	
	printf("please enter your Year of birth: ");
	scanf("%d", &YOB);
	time_t t;
	t = time('\0');
	struct tm tm = *localtime(&t);
	scanf("current month and year: %i, %i", &tm.tm_mon+1, &tm.tm_year+1900);
	printf("current year is %i %i\n", tm.tm_mon+1, tm.tm_year+1900);
	current_year = tm.tm_year+1900;
	current_month = tm.tm_mon+1;
	
	if(YOB <= current_year)
	{
			printf("please enter your month of birth in figures: ");
			scanf("%d", &MOB);
		if(MOB > 12)
			{
				printf("You have give an invalid Month, please enter a correct one: \n");
				scanf("%d", &MOB);
			}
		if(MOB <= 12)
		{
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

		printf("you are %i yrs + %imonths 😊\n", _age, _months);
		}
		else
		{
			printf("You have given an invalid response 😥, please check input and try again\n");
		}
	}
	if(YOB > current_year)
		{
			printf("You have given an invalid year, please restart the app and enter a valid one\n");
		}

/*	else(YOB = current_year)
	{
		if(MOB = current_month)
		{
			printf("You are not up to a month old🚼");
		}
	}
 */
}
