#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * Return: 0 always
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (number % 3 == 0 || number % 5 == 0)
		{
			if (number % 3 == 0)
			{
				printf("%s", "Fizz");
			}
			else
			{
				 printf("%s", "Buzz");
			}
		}
		else
		{
			printf("%d", number);
		}
		if (number != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
