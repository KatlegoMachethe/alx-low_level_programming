#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing the largest prime factor of a number
 * Return: 0 always
 */

int main(void)
{
	long int num = 612852475143;
	long int factor;

	for (factor = 2; factor < num; factor++)
	{
		if (num % factor == 0)
		{
			num = num / factor;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
