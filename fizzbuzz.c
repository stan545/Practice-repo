#include <stdio.h>

/**
 * check_fizzbuzz - checks for fizz or buzz
 * @num: integer variable
 */
void check_fizzbuzz(int num)
{
	if (num == 0)
	{
		putchar(num / 10 + '0');
		putchar(num % 10 + '0');
	}
	else if (num % 3 == 0 && num % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (num % 3 == 0)
	{
		printf("Fizz");
	}
	else if (num % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		putchar(num / 10 + '0');
		putchar(num % 10 + '0');
	}
}

/**
 * fizzbuzz - assigns fizz or buzz for multiples of 3 or 5 for numbers
 * from 0 - 100
 */
void fizzbuzz(void)
{
	int num, count;

	for (count = 0; count < 101; count++)
	{
		num = count;
		if (count == 0)
		{
			check_fizzbuzz(num);
			putchar(',');
			putchar(' ');
		}
		else if (count > 0 && count < 100)
		{
			if (num / 10 == 0)
			{
				check_fizzbuzz(num);
			}
			else if (num / 10 >= 1)
			{
				check_fizzbuzz(num);
			}
			putchar(',');
			putchar(' ');
		}
		else
		{
			check_fizzbuzz(num);
		}
	}
	putchar(10);
}

/**
 * main - calls on fizzbuzz function
 * Return: 0
 */
int main(void)
{
	fizzbuzz();
	return (0);
}
