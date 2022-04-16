#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1 to 100
 * Return: void
 */

void fizz_buzz(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", number);
		}
		if (number != 100)
		{
			_putchar(' ');
		}
	}
	printf("\n");
}
