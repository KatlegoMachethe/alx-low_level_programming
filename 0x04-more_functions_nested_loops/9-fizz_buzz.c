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
			printf("%s", "Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (number % 3 == 0 && number % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else
		{
			printf("%d", number);
		}
		printf(" ");
	}
	printf("\n");
}
